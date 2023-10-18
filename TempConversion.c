#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Fahrenheit to Celsius conversion table\n");
    printf("Enter your temperature in F:");
    scanf("%4d", &a);

    while (a <= 100)
    {
        printf("%4d degrees F = %4d degrees C\n", a, (a - 32) * 5/9);
        a = a + 10; }


    return 0;
}
