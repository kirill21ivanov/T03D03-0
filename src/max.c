#include <stdio.h>

int max(int a, int b);

int main() {
    int x, y;
    int lol, lol2;
    lol = scanf("%d", &x);
    lol2 = scanf("%d", &y);
    if (lol != 1 || lol2 !=1) {
        printf("n/a\n");
        return 0;
    } else {
        printf("%d\n", max(x, y));
        return 0;
    }
}
int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

