#include <iostream>
using namespace std;

#define test  \
    int t;    \
    cin >> t; \
    while (t--)

int main()
{
    test
    {
        string s;
        cin >> s;
        int n = s.size();
        if (n <= 10)
            cout << s << endl;
        else
            cout << s[0] << n - 2 << s[n - 1] << endl;
    }

    return 0;
}
