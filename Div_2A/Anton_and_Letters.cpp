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

int main()
{
    string s;
    getline(cin, s);
    int n = s.size();
    char arr[n + 1];
    strcpy(arr, s.c_str());
    set<char> S;
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        if ((int)arr[i] >= 97 && (int)arr[i] <= 122)
        {
            // cout << (int)arr[i] << " ";
            S.insert(arr[i]);
        }
    }
    cout << S.size() << endl;
    return 0;
}
