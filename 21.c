#include <stdio.h>

main()
{
    char ans;

    printf("is your printer on (Y/N) ?\n");

    scanf(" %c", &ans);

    if ((ans == 'Y') || (ans == 'N'))
    {
        if (ans == 'N')
        {
            printf("*** Turn the printer on now. ***\n");
        }
        else
        {
            printf("You did not enter a Y or N.\n");
        }
    }
}