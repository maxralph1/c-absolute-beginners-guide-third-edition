#include <stdio.h>

main()
{
    float a = 19.0;
    float b = 5.0;
    float floatAnswer;

    int x = 19;
    int y = 5;
    int intAnswer;

    floatAnswer = a / b;
    printf("%.1f divided b y %.1f equals %.1f\n", a, b, floatAnswer);

    floatAnswer = x / y;
    printf("%d divided by %d equals %.1f\n", x, y, floatAnswer);

    intAnswer = a / b;
    printf("%.1f divided by %.1f equals %d\n", a, b, intAnswer);

    intAnswer = x % y;
    printf("%d modulus (i.e. remainder of) %d equals %d", x, y, intAnswer);

    return 0;
}