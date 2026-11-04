#include <stdio.h>

int main() {
    double profit, bonus;
    
    scanf("%lf", &profit);
    
    if (profit <= 100000) {
        bonus = profit * 0.1;
    } else if (profit <= 200000) {
        bonus = 10000 + (profit - 100000) * 0.075;
    } else if (profit <= 400000) {
        bonus = 17500 + (profit - 200000) * 0.05;
    } else if (profit <= 800000) {
        bonus = 27500 + (profit - 400000) * 0.03;
    } else {
        bonus = 39500 + (profit - 800000) * 0.01;
    }
    
    printf("%.1f\n", bonus);
    
    return 0;
}
