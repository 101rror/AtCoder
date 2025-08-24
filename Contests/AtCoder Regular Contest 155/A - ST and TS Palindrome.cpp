#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    long long k;
    string s;
    cin >> n >> k >> s;

    long long len = k + n;
    long long d = gcd(2 * k, len);

    for (int i = 0; i < n; i++)
    {
        long long j = (i + d) % len;
        if (j < n && s[i] != s[j])
        {
            cout << "No";
            cout << endl;
            return;
        }
        j = (len - 1 - i) % d;
        if (j < n && s[i] != s[j])
        {
            cout << "No";
            cout << endl;
            return;
        }
    }

    cout << "Yes";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
