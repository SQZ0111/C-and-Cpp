#include <stdio.h>
#include <stdbool.h>

int main(){
    printf("1.Start Game\n");
    printf("2.Options\n");
    printf("3.Characters\n");
    printf("4.Exit\n");
    printf("Press Number\n");
    
    int press;
    scanf("%d",&press);

    if(press ==1)
    {
        printf("Starting Game...");
    }

    else if(press == 2)
    {
        printf("Not avaible, coming soon...");
    }
    else if(press == 3)
    {
        printf("Under construction...");
    }

    else if(press == 4)
    {
        printf("Save changes? Y/N: ");
        char quit;
        getchar();
        scanf("%c",&quit);
    
        if(quit == 'Y' || quit == 'y')
        {
            printf("Saving changes!\n");
        }
        else if (quit == 'N' || quit == 'n')
        {
            printf("Goodbye!\n");
        }
        else
        {
            printf("Error! Hackers detected\n");
        }
        printf("Exiting...");
    }

    else
    {
        printf("Wrong input!\n");
    }
    return 0;
}