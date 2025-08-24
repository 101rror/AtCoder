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
    long n, m;
    cin >> n >> m;

    vector<string> a(n);

    for (auto &it: a)
    {
        cin >> it;
    }

    vector<long> ans(n, 0);

    for (int j = 0; j < m; j++)
    {
        long cnt0 = 0, cnt1 = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i][j] == '0')
            {
                cnt0++;
            }
            else
            {
                cnt1++;
            }
        }

        if (cnt0 == 0 || cnt1 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                ans[i]++;
            }
        }
        else if (cnt0 < cnt1)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i][j] == '0')
                {
                    ans[i]++;
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i][j] == '1')
                {
                    ans[i]++;
                }
            }
        }
    }

    long mx = *max_element(ans.begin(), ans.end());

    for (int i = 0; i < n; i++)
    {
        if (ans[i] == mx)
        {
            cout << i + 1 << " ";
        }
    }
    nl
}



int32_t main()
{
    FastRead

    solution();

    Executed
}
