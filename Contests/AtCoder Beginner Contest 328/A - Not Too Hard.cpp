///A - Not Too Hard


/**
*
*   author :: 101rror
*
**/

#include<bits/stdc++.h>

#define long long long

using namespace std;


void passion()
{
    long n, x;
    scanf("%lld%lld", &n, &x);
    //bool flag = false;

    vector<long>a(n);

    for(auto &it : a)
    {
        scanf("%lld", &it);
    }

    long count = 0;

    for(auto &it : a)
    {
        if(it <= x)
        {
            count += it;
        }
    }

    cout << count << endl;
}



int main()
{
    passion();

    return 0;
}
