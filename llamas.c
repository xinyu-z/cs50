#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for start size
    int size;
    do
    {
        size = get_int("Please type in starting size: ");
    }
    while(size <9);

    // Prompt for end size
    int endsize;
    do
    {
        endsize = get_int("Please type in final size: ");
    }
    while (endsize < size);

    //Calculate number of years until we reach threshold
    int year = 0;
    while (size < endsize)
    {
        //for (i = 0; ; i+=1)
        //{
        size = size + size / 3 - size / 4;
        year++;
        //}
    }
    //Print number of years
    printf("Years: %i", year);
}
