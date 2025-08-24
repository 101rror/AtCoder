///There is none worthy of worship except ALLAH and Muhammad(SWT) is the messenger of ALLAH.


/**
*
*   author :: 101rror
*
**/

#include<bits/stdc++.h>

using namespace std;

#define SuccessfullyExecuted return 0;

#define  YES       cout << "YES" << endl;
#define  NO        cout << "NO" << endl;
#define  Yes       cout << "Yes" << endl;
#define  No        cout << "No" << endl;
#define  one       cout << "1" << endl;
#define  mone      cout << "-1" << endl;
#define  zero      cout << "0" << endl;
#define  nl        cout << endl;

#define  asrt(s)   sort(s, s + n);
#define  arsrt(s)  sort(s, s + n, greater<long>());
#define  arvs(s)   reverse(s, s + n);
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
    long n;
    cin >> n;
    //bool flag = false;

    long sum1 = 0;
    long sum2 = 0;

    for(long i = 0; i < n; i++)
    {
        long x, y;
        cin >> x >> y;

        sum1 += x;
        sum2 += y;
    }

    if(sum1 > sum2)
    {
        cout << "Takahashi";
        nl
    }
    else if(sum1 < sum2)
    {
        cout << "Aoki";
        nl
    }
    else
    {
        cout << "Draw";
        nl
    }
}



int main()
{

    passion();


    SuccessfullyExecuted
}
