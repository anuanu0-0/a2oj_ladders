#include <iostream>
#include <algorithm>
using namespace std;

#define test  \
    int t;    \
    cin >> t; \
    while (t--)

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '+' && i != n - 1)
        {
            cout << s[i] << "+";
        }
        if (i == n - 1)
            cout << s[i];
    }

    return 0;
}
