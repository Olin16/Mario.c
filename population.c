#include <cs50.h> 
#include <stdio.h>

int main(void)
{
    int start;
    int end;
    int year;
    
    do
    {
        start = get_int("Starting Population: ");   // TODO: Prompt for start size  
    }
    while (start < 9);

    do
    {
        end = get_int("Ending Population: ");   // TODO: Prompt for end size
    }
    while (end < start);
    
    year = 0;
    while (start < end)
    {
        start = start + (start / 3) - (start / 4);   // TODO: Calculate number of years until we reach threshold
        year++;
    }
    printf("Years: %i", year);
    // TODO: Print number of years
}