#include <stdio.h>

int main() {
    int a, b, c, n, res;
    scanf("%d",&n);
    a = n / 100;
    b = n / 10 % 10;
    c = n % 10;
    res = c * 100 + b * 10 + a;
    printf("%.3d\n",res);
    return 0;
}

