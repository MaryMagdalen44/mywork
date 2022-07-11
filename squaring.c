#include <stdio.h>
#define NMAX 10
int input(int *a, int *n);
void output(int *a, int *n);
void squaring(int *a, int *n);
int main() {
int n, data[NMAX];
input(data, &n);
squaring(data, &n);
output(data, &n);
return 0;}
int input(int *a, int *n)
{scanf("%d", n);
for(int p = 0; p < *n; p++)
{scanf("%d", &a[p]);}
return 2;}
void output(int *a, int *n)
{for(int p = 0; p < *n-1; p++)
{printf("%d ", a[p]);}
printf("%d\n", a[*n-1]);}
void squaring(int *a, int *n)
{for(int p = 0; p < *n; p++)
{a[p] *= a[p];}}
