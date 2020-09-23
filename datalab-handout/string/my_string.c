#include "my_string.h"


size_t my_strlen (const char *str) 
{
    size_t s;
    for(s = 0; str[s]; ++s) {
        ;
    }
    return s;
}

char *my_strncpy (char *destination, const char *source, size_t num)
{
    size_t s;
    for(s = 0; s < num; ++s) {
        destination[s] = source[s];
        if(source[s] == '\0') {
            break;
        }
    }
    return destination;
}

void *my_memmove (void *destination, const void *source, size_t num)
{
    char *dest_cast = destination;
	char const *source_cast = source;
	if(dest_cast < source_cast) {
		while(num-- > 0) {
			*dest_cast++ = *source_cast++;
        }
	} else {
		dest_cast += num;
		source_cast += num;
		while(num-- > 0) {
            *--dest_cast = *--source_cast;
        }
	}
	return destination;
}
