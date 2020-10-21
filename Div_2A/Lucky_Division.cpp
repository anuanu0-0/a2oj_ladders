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
    vi v = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    int x, ans = 0;
    cin >> x;
    for (auto i : v)
    {
        if (x % i == 0)
            ans = 1;
    }
    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
