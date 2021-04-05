#include <stdio.h>
#include <math.h>
int main() {
    float t = 1;
    float z = t + 2;
    float y = 4;
    float x = 8 * z / (exp(t) + 2) - (y * y);
    printf("Результаты x = %5.2f", x);
    return 0;
}

