#include <iostream>
#include <algorithm>
using namespace std;

#define test  \
    int t;    \
    cin >> t; \
    while (t--)

int main()
{
    string x, y;
    cin >> x >> y;
    int ans = 0;
    transform(x.begin(), x.end(), x.begin(), ::tolower);
    transform(y.begin(), y.end(), y.begin(), ::tolower);

    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] > y[i])
        {
            ans = 1;
            break;
        }
        else if (x[i] < y[i])
        {
            ans = -1;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}
