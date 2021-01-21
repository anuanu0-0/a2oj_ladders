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
    int ans = 0;
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 1 && b == 1 && c == 1)
        ans = 3;
    else if (a == 1 && c == 1)
        ans = a + b + c;
    else if (a == 1)
        ans = (a + b) * c;
    else if (c == 1)
        ans = a * (b + c);
    else if (b == 1)
        ans = (min(a, c) + b) * max(a, c);
    else
        ans = a * b * c;

    cout << ans << endl;

    return 0;
}
