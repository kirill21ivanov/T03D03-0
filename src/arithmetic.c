#include <stdio.h>

int sum(int a, int b);
int mul(int a, int b);
int del(int a, int b);
int min(int a, int b);

int main() {
    int x, y;
    int lol, lol2;
    lol = scanf("%d", &x);
    lol2 = scanf("%d", &y);
    if (lol != 1 || lol2 !=1) {
        printf("n/a\n");
        return 0;
}
    if (y != 0) {
        printf("%d %d %d %d\n", sum(x, y), mul(x, y), del(x, y), min(x, y));
    } else {
        printf("%d %d %d n/a\n", min(x, y), sum(x, y), mul(x, y));
        return 0;
    }
}

int sum(int a, int b) {
    return a + b;
}
int mul(int a, int b) {
    return a * b;
}
int del(int a, int b) {
    return a / b;
}
int min(int a, int b) {
    return a - b;
}

