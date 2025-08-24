
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
    long k, g, m;
    cin >> k >> g >> m;
    long eg = 0;
    long em = 0;

    while(k)
    {
        if(eg == g)
        {
            eg -= g;
        }
        else if(em == 0)
        {
            em = m;
        }
        else
        {
            if(g - eg <= em)
            {
                em -= g - eg;
                eg = g;
            }
            else
            {
                eg += em;
                em = 0;
            }
        }
        k--;
    }

    cout << eg << " " << em;
    nl
}



int main()
{
    passion();

    SuccessfullyExecuted
}
