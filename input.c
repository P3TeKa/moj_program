  GNU nano 8.6                        input.c
#include <stdio.h>

int main() {
    int number;
    printf("podaj liczbe\n");
    scanf("%d", &number);
    printf("Podales liczbe: %d\n", number);
    return 0;
}
