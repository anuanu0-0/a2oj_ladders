#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string.h>

using namespace std;

#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define endl '\n'

#define vi vector<int>
#define pb push_back
#define mii map<int, int>
#define S set<int>
int main()
{
    S set;
    int n, temp;
    int p, q;
    cin >> n;
    cin >> p;
    for (int i = 0; i < p; ++i)
    {
        cin >> temp;
        set.insert(temp);
    }

    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        cin >> temp;
        set.insert(temp);
    }

    if (set.size() == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
    return 0;
}
