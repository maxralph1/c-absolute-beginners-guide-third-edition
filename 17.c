#include <stdio.h>
#define CURRENTYEAR 2023

main()
{
    int yearBorn, age;

    printf("What year were you born?\n");

    scanf(" %d", &yearBorn);

    if (yearBorn > CURRENTYEAR)
    {
        printf("Really? You haven't been born yet?\n");
        printf("Congratulations on time travel!\n");
    }
    else
    {
        age = CURRENTYEAR - yearBorn;

        printf("\nSo this year you will turn %d on your birthday\n", age);

        if ((yearBorn % 4) == 0)
        {
            printf("\nYou were born in a Leap Year--cool!\n");
        }
    }

    return 0;
}