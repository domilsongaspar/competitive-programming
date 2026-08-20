#include <stdio.h>
 
int main() {
    int hi, hf, mi, mf, diff, h, m;
    
    scanf("%i %i %i %i", &hi, &mi, &hf, &mf);
    mi += hi * 60;
    mf += hf * 60;
    
    diff = mf - mi;
    if (diff <= 0)
        diff += 24 * 60;
    h = diff / 60;
    m = diff % 60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    return 0;
}