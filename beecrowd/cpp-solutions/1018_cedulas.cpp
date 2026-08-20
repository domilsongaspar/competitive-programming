#include <iostream>

using namespace std;

int main() {
    int N, notas_1, notas_2, notas_5, notas_10, notas_20, notas_50, notas_100, valor;
    
    cin >> N;
    valor = N;
    
    notas_100 = N / 100;
    N %= 100;
    
    notas_50 = N / 50;
    N %= 50;
    
    notas_20 = N / 20;
    N %= 20;
    
    notas_10 = N / 10;
    N %= 10;
    
    notas_5 = N / 5;
    N %= 5;
    
    notas_2 = N / 2;
    N %= 2;
    
    notas_1 = N;
    N %= 1;
    
    cout << valor << endl;
    cout << notas_100 << " nota(s) de R$ 100,00" << endl;
    cout << notas_50 << " nota(s) de R$ 50,00" << endl;
    cout << notas_20 << " nota(s) de R$ 20,00" << endl;
    cout << notas_10 << " nota(s) de R$ 10,00" << endl;
    cout << notas_5 << " nota(s) de R$ 5,00" << endl;
    cout << notas_2 << " nota(s) de R$ 2,00" << endl;
    cout << notas_1 << " nota(s) de R$ 1,00" << endl;
    
    return 0;
}