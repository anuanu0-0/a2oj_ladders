#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <limits.h>
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
    int n, m;
    cin >> n >> m;
    int arr[m + 1];
    for (int i = 1; i <= m; i++)
    {
        cin >> arr[i];
    }
    sort(arr + 1, arr + m + 1);

    int best = INT_MAX;
    for (int i = 1, j = n; j <= m; i++, j++)
    {
        best = min(arr[j] - arr[i], best);
    }

    cout << best << endl;

    return 0;
}
