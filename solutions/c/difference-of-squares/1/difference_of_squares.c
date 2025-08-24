#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number)
{
    int sum=0;
    for(unsigned int i=1;i<=number;i++)
    {
        return sum +=(i*i);
    }
}

unsigned int square_of_sums(unsigned int number)
{
    int sum1=0;
    for(unsigned int i=1;i<=number;i++)
    {
        sum1 += i;
    }
    return sum1;
}

unsigned int difference_of_squares(unsigned int number)
{
    return sum_of_squares(number)-square_of_sum(number);
}