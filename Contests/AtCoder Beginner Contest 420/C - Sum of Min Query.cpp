///There is none worthy of worship except ALLAH and Muhammad(SWT) is the messenger of ALLAH.


/**
*
*   author :: 101rror
*
**/

#include<bits/stdc++.h>

using namespace std;

#define  FastRead  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  Executed  return 0;
#define  nl        cout << "\n";

#define  srt(s)    sort(s.begin(),s.end());
#define  rsrt(s)   sort(s.rbegin(),s.rend());
#define  rvs(s)    reverse(s.begin(), s.end());

#define  long      long long
#define  fi        first
#define  se        second
#define  pb        push_back


void solution()
{
    long n, q;
    cin >> n >> q;

    vector<long> A(n), B(n);
    for (auto &it : A)
    {
        cin >> it;
    }
    for (auto &it : B)
    {
        cin >> it;
    }

    long ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += min(A[i], B[i]);
    }

    while(q--)
    {
        char c;
        cin >> c;
        long x, v;
        cin >> x >> v;
        x--;

        ans -= min(A[x], B[x]);

        if (c == 'A')
        {
            A[x] = v;
        }
        else
        {
            B[x] = v;
        }

        ans += min(A[x], B[x]);

        cout << ans;
        nl
    }
}



int32_t main()
{
    FastRead

    solution();

    Executed
}
