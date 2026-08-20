#include <iostream>

using namespace std;

int next_word(string line, size_t i)
{
    while (i < line.size())
    {
        if (line[i] == ' ')
        {
            while (i < line.size() && line[i] == ' ')
                i++;
            break;
        }
        i++;
    }
    return (i == line.size() ? -1 : i);
}

char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        c += 32;
    return (c);
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string line;
    int i, counter;
    char old;
    
    while (getline(cin, line))
    {
        i = 0;
        counter = 0;
        while (i < line.size())
        {
            old = line[i];
            i = next_word(line, i);
            if (to_lower(line[i]) == to_lower(old))
                counter++;
            while (to_lower(line[i]) == to_lower(old))
                i = next_word(line, i);
            if (i == -1)
                break;
        }
        cout << counter << endl;
    }
 
    return (0);
}