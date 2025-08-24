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


void passion()
{
    long X, Y;
    cin >> X >> Y;

    long count = 0;
    const long total = 6 * 6;

    for (long i = 1; i <= 6; i++)
    {
        for (long j = 1; j <= 6; j++)
        {
            if ((i + j >= X) || (abs(i - j) >= Y))
            {
                count++;
            }
        }
    }

    double ans = static_cast<double>(count) / total;

    cout << fixed << setprecision(15) << ans;
}


int32_t main()
{
    FastRead

    passion();

    Executed
}
