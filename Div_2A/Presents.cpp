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
    int n;
    mii m;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int temp;
        cin >> temp;
        m.insert({temp, i});
    }
    for (auto it = m.begin(); it != m.end(); ++it)
        cout << it->second << " ";
    return 0;
}
