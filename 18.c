#include <stdio.h>

main()
{
    int prefer;

    printf("On a scale of 1 to 10, how happy are you?\n");
    scanf(" %d", &prefer);

    if (prefer >= 8)
    {
        printf("Great for you!\n");
        printf("things are going well for you!\n");
    }
    else if (prefer >= 5)
    {
        printf("better than average, right?\n");
        printf("maybe things will get even better soon!\n");
    }
    else if (prefer >= 3)
    {
        printf("Sorry you're feeling not so great.\n");
        printf("Hope things turn around soon...\n");
    }
    else
    {
        printf("Hang in there--things have to improve, right?\n");
        printf("Always darkest before the dawn.\n");
    }

    return 0;
}