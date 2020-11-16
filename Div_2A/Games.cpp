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

// Simple Brute force
int main()
{
    int n;
    cin >> n;
    vi a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[i] == b[j])
                count++;

    cout << count << endl;
    return 0;
}
