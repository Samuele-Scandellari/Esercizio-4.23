#include <stdio.h>
#include <math.h>
int main() {
    float y;
    printf("Inserire un numero reale positivo (y): ");
    scanf("%f", &y);
    int x = 1;
    while (pow(x, x) < y) {
        x++;
    }
    x--;
    printf("Il massimo numero intero positivo x tale che %d^%d < %.2f\n",x, x, y);
    return 0;
}