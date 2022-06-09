#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    //promts user to enter height of pyramid
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 10);
    
    //builds pyramid
    for (int r = 1; r <= height; r++)   //rows of the pyramid
    {
        for (int s = height - r; s > 0; s--)    //s = height - r, is the relationship between the row(r),height, and number of spaces(s)
        {
            printf(" ");
        }
        for (int b = 0; b < r; b++)
        {
            printf("#");
        }
        for (int d = 0; d < 2; d++)
        {
            printf(" ");
        }
        for (int t = 0; t < r; t++)     //bacsically just a copy of loop (b) 
        {
            printf("#");
        }
        printf("\n");
        
    }
}

//space=height-r