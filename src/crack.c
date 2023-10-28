#include <stdio.h>
#include <math.h>
int glich(int a, int b, int c);
float z;
int main() {
    float x, y;
    int lol, lol2;
    lol = scanf("%f", &x);
    lol2 = scanf("%f", &y);
    if (lol != 1 || lol2 !=1) {
        printf("n/a\n");
        return 0;
    } else {
    z = pow(x, 2) + pow(y, 2);
        if (z <= 25)
        printf("GOTCHA");
        else
            printf("MISS");
    }
    }
