#include <iostream>
#include <algorithm>
using namespace std;

#define test  \
    int t;    \
    cin >> t; \
    while (t--)

int main()
{
    string s;
    cin >> s;
    // STL lowercase
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if (c != 'a' && c != 'o' && c != 'y' && c != 'e' && c != 'u' && c != 'i')
            cout << "." << c;
    }

    return 0;
}
