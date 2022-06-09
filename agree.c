#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char yop = get_char("Do you agree? \n");

    if (yop == 'y' || yop == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (yop == 'n' || yop == 'N')
    {
        printf("Disagreed.\n");
    }

}