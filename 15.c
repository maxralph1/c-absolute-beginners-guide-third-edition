#include <stdio.h>

main()
{
    int ctr = 0;

    ctr += 1;
    printf("Counter is at %d.\n", ctr);
    ctr += 1;
    printf("Counter is at %d.\n", ctr);

    printf("Counter is at %d.\n", ctr += 1);
    ctr += 1;
    printf("Counter is at %d.\n", ctr);

    printf("Counter is at %d.\n", ctr += 1);
    ctr -= 1;
    printf("counter is at %d.\n", ctr);
    printf("counter is at %d.\n", ctr -= 1);
    printf("counter is at %d.\n", ctr -= 1);
    printf("counter is at %d.\n", ctr -= 1);

    return 0;
}