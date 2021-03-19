#include "math.h"
#include "stdio.h"
#include "armstrong_numbers.h"

bool is_armstrong_number(int candidate)
{
    int tmp_candidate = candidate, mod = 0, sum = 0; 
    int tmp_digit = candidate, digit_counter = 0;
    
    while(tmp_digit != 0)
    {
        tmp_digit /= 10;
        digit_counter++;
    }
    
    while(tmp_candidate > 0)
    {
        mod = tmp_candidate % 10;
        sum += power(mod, digit_counter);
        tmp_candidate /= 10;
    }
    
    return sum == candidate;
    
}

// i guess pow sucks. it didnt pass the three digit test because of it!
int power(int base, int exponent)
{
    int total = base;
    
    for(int i = 0; i < exponent - 1; i++)
    {
        total *= base;
    }
    
    return total;
}
