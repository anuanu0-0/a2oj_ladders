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
    int n, m, ans;
    cin >> n >> m;
    string arr[2] = {"Malvika", "Akshat"};
    if (n == m)
        ans = n;
    else
    {
        ans = min(n, m);
    }
    cout << arr[ans % 2] << endl;
    return 0;
}
