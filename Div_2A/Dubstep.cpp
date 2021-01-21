#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define endl '\n'

#define vi vector<int>
#define pb push_back
#define mii map<int, int>

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'W')
        {
            string str = s.substr(i, 3);
            if (str == "WUB")
            {
                s.replace(i, 3, " ");
            }
        }
    }
    bool sp = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ' && sp == false)
        {
            continue;
        }
        else
        {
            sp = true;
            cout << s[i];
        }
    }
    // cout << s << endl;
    return 0;
}
