#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    if (a>b)
    {
        printf("pierwsza liczba jest większa\n");
    }
    else if (a<b)
    {
        printf("druga liczba jest większa\n");
    }
    else
    {
        printf("liczby są równe\n");
    }
    return 0;
}
