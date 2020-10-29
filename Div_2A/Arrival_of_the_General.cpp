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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // First Max
    int fmax_index = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i] > v[fmax_index])
            fmax_index = i;
    }
    // Last Min or First reverse Max
    int lmin_index = n;
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] > v[lmin_index])
            lmin_index = i;
    }

    cout << fmax_index << " " << lmin_index;
    return 0;
}
