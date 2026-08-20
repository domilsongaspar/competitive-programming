#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, Q, serie, marm_number, search;
    bool found;
    
    serie = 1;
    while (true)
    {
        cin >> N >> Q;
        
        if (N == 0 && Q == 0)
            break;
            
        cout << "CASE# " << serie++ << ":" << endl;   
        vector<int> marms;
        for (int i = 0; i < N; i++)
        {
            cin >> marm_number;
            marms.push_back(marm_number);
        }
        
        sort(marms.begin(), marms.end());
        
        for (int x = 0; x < Q; x++)
        {
            cin >> search;
            
            found = false;
            for (size_t y = 0; y < marms.size(); y++)
            {
                if (marms[y] == search)
                {
                    cout << search << " found at " << y + 1<< endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << search << " not found" << endl;
        }
    }
 
    return 0;
}