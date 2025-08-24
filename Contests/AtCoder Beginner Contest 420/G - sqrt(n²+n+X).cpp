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


const int N = 2000001;
const int MOD = 1000000007;
long arr[N];
long brr[N];


void solution()
{
    long x;
    cin >> x;

    set<long> ans;

    long s = 1 - 4 * x;
    long ln = abs(s);

    for (long n = 1; n * n <= ln; n++)
    {
        if (s % n != 0)
        {
            continue;
        }

        long a = n;
        long b = s / n;

        vector<pair<long, long>> pairs = {{a, b},{-a, -b}};

        for (auto &[p, q] : pairs)
        {
            if ((p + q) % 2 != 0)
            {
                continue;
            }
            if ((q - p) % 4 != 0)
            {
                continue;
            }

            long k = (p + q) / 2;
            long n1 = (-1 + k) / 2;
            long n2 = (-1 - k) / 2;

            ans.insert(n1);
            ans.insert(n2);
        }
    }

    cout << ans.size();
    nl
    for (auto it: ans)
    {
        cout << it << " ";
    }
    nl
}


int32_t main()
{
    FastRead

    solution();

    Executed
}
