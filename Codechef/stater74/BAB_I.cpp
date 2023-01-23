

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); // line1
    cin.tie(NULL);
    int64_t t;
    cin >> t;
    while (t--)
    {
        int64_t n;
        cin >> n;
        vector<int64_t> posArr, negArr;
        int64_t small;
        for (int i = 0; i < n; i++)
        {
            int64_t temp;
            cin >> temp;
            if (temp < 0)
                negArr.push_back(temp);
            else
                posArr.push_back(temp);
        }
        sort(posArr.begin(), posArr.end());
        sort(negArr.begin(), negArr.end());

        if (posArr.empty())
            cout << -(negArr[negArr.size()-1] + 1) << endl;
        else if (negArr.empty())
            cout << posArr[0] - 1 << endl;
        else if ((((-1) * (posArr[0] - 1)) > negArr[negArr.size() - 1] ))
        {
            cout << posArr[0] - 1 << endl;
        }
        else if ((-1) * (negArr[negArr.size() - 1] + 1) < posArr[0])
            cout << (negArr[negArr.size() - 1] + 1) * -1 << endl;
        else
            cout << -1 << endl;
    }
}
