#include <stdio.h>

int shapeArea(int n) {
    return ((n*n)+((n-1)*(n-1)));
}

int main()
{
    printf("%d\r\n",shapeArea(4));
    return 0;
}