#include <stdio.h>
#include <math.h>

int main() {
    float x = 0.0f, y = 0.0f;
    int lol;
    lol = scanf("%f", &x);
       if ( lol != 1 ) {
           printf("n/a\n");
           return 0;
       } else {
           y = 7 * pow(10, -3) * pow(x, 4);
           y += (22.8 * pow(x, 1/3) - pow(10, 3) * x + 3) /(x * x / 2) - x * pow((10 + x), (2/x)) -
           1.01;
           printf("%.1f\n", y);
           return 0;
    }
}

