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
        int64_t A, B;
        cin >> A >> B;
        if (B % A == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int64_t X= __gcd(A,B);
            cout<<A- __gcd(A, X)<<endl;
        }
    }
}
