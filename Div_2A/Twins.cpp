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
#define pb(x) push_back(x)

int main()
{
    int n, sum = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    sort(v.begin(), v.end(), greater<int>());
    int minCoins = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (minCoins > sum / 2)
            break;
        minCoins += v[i];
        count++;
    }
    cout << count << endl;
    return 0;
}
