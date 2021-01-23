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
#define ll long long
#define vi vector<int>
#define pb push_back
#define mii map<int, int>
#define S set<int>
int main()
{
    ll n, k, ans;
    cin >> n >> k;

    if (k <= (n + 1) / 2)
        ans = 2 * k - 1;

    else
        ans = (k - (n + 1) / 2) * 2;

    cout << ans << endl;
    return 0;
}
