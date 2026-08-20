#include <iostream>
#include <algorithm>
#include <string>
#include <limits>
#include <ctype.h>

using namespace std;

void crypto(string s)
{
    size_t len = s.size();
    
    for (size_t i = 0; i < len; i++)
    {
        if (isalpha(s[i]))
            s[i] += 3;
    }
    reverse(s.begin(), s.end());
    for (size_t i = len / 2; i < len; i++)
        s[i] -= 1;
    cout << s << endl;
}
 
int main() {
    int N;
    string s;
    
    cin >> N;
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (N-- > 0)
    {
        getline(cin, s);
        crypto(s);
    }
 
    return (0);
}