#include <bits/stdc++.h>
using namespace std;

const int MAXN = 20;

int n, c;
int items[MAXN];
int best_solution[MAXN];
int curr_solution[MAXN];
int best_remainder = INT_MAX;
int curr_remainder = 0;

void backtrack(int pos, int used_space, int unused_space) {
    if (pos == n) {
        if (unused_space < best_remainder) {
            best_remainder = unused_space;
            for (int i = 0; i < n; i++) {
                best_solution[i] = curr_solution[i];
            }
        }
        return;
    }
    if (used_space + items[pos] <= c) {
        curr_solution[pos] = 1;
        backtrack(pos + 1, used_space + items[pos], unused_space - items[pos]);
    }
    curr_solution[pos] = 0;
    backtrack(pos + 1, used_space, unused_space - items[pos]);
}

int main() {
    cout << "Enter the number of items: ";
    cin >> n;
    cout << "Enter the capacity of the container: ";
    cin >> c;
    cout << "Enter the sizes of the items: ";
    for (int i = 0; i < n; i++) {
        cin >> items[i];
    }
    backtrack(0, 0, accumulate(items, items + n, 0));
    cout << "The optimal solution is: ";
    for (int i = 0; i < n; i++) {
        cout << best_solution[i] << " ";
    }
    cout << endl;
    cout << "The remaining space in the container is: " << best_remainder << endl;
    return 0;
}
