#include "isogram.h"
#include <string.h>
#include <ctype.h>


bool is_isogram(const char phrase[])
{
    if(phrase == NULL) return false;

    const int startOffset = (int)'a';
    bool seen[26] = {false}; //from a-z = 26

    for(size_t i = 0; phrase[i] != '\0'; i++)
    {
        if(isalpha(phrase[i]) && seen[tolower(phrase[i]) - startOffset ]){
            return false;
        }

        seen[tolower(phrase[i]) - startOffset] = true;
    }

    return true;
}
