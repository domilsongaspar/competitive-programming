#include <iostream>

using namespace std;

long long fat(int n) {
    if (n < 2) {
        return 1;
    }
    
    return n * fat(n-1);
}

int main() {
    long long int M, N;
    
    while (cin >> M >> N) {
        cout << fat(M) + fat(N) << endl;
    }
    
    return 0;
}