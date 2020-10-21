#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define endl '\n'
#define vi vector<int>
#define pb push_back

int main()
{
    string s, word = "hello";
    cin >> s;
    int idx = 0;
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == word[idx])
        {
            ans += word[idx];
            idx++;
        }
    }

    if (ans == "hello")
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
