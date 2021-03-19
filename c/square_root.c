#include "square_root.h"

uint16_t square_root(uint16_t n)
{
    if(n <= 1) return n;
    
    uint16_t root = 0, large_candidate = 0;
    int shift_value = 2;
    
    while(n >> shift_value != 0)
    {
        shift_value += 2;
    }
    
    while(shift_value >= 0)
    {
        root = root << 1;
        large_candidate = root + 1;
        
        if(large_candidate * large_candidate <= n >> shift_value)
        {
            root = large_candidate;
        }
        
        shift_value -= 2;
    }
    
    return root;
    
}
