#include <bits/stdc++.h>

using namespace std;

void passion()
{
    string s;

    getline(cin, s);

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ')
        {
            s.erase(i);
        }
    }

    cout << s << " " << "san";
}



int main()
{
    passion();

    return 0;
}
