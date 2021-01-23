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
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if (m * a <= b)
        cout << n * a << endl;
    else
        cout << (n / m) * b + min((n % m) * a, b) << endl;
    return 0;
}
