#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
	int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<(n-1);i++)
    cout << "ok" << arr[i+1]<<endl;
    return 0;
}
