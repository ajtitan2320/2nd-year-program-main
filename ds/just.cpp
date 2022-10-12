#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        
        for (int i = 0; i < s.length() - 2; i++)
        {
            int f = 0;
            if (((s[i + 1] == 'a') || (s[i + 1] == 'e') || (s[i + 1] == 'i') || (s[i + 1] == 'o') || (s[i + 1] == 'u')) && ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u')) && ((s[i + 2] == 'a') || (s[i + 2] == 'e') || (s[i + 2] == 'i') || (s[i + 2] == 'o') || (s[i + 2] == 'u')))
            {
                cout << "happy" << endl;
                f = 1;
                break;
            }
            if (f == 0)
            {
                cout << "sad" << endl;
                break;
            }
        }
    }
    return 0;
}
