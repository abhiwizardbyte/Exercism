#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number)
{
    unsigned long long sum = 0;
    for(unsigned int i = 1; i <= number; i++) {
        sum += ((unsigned long long)i * (unsigned long long)i);
    }
    return (unsigned int)sum;
}

unsigned int square_of_sum(unsigned int number)
{
    unsigned long long sum1 = 0;
    for(unsigned int i = 1; i <= number; i++) {
        sum1 += i;
    }
    return (unsigned int)(sum1 * sum1);
}

unsigned int difference_of_squares(unsigned int number)
{
    return sum_of_squares(number)-square_of_sum(number);
}