#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - points to a newly allocated space in memory
 * @s1: function parameter
 * @s2: function parameter
 * @s3: fuction parameter
 * Return: always 0 
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len;
    char *result;
    
    /* If either s1 or s2 is NULL, treat it as an empty string */
    s1_len = (s1 == NULL) ? 0 : strlen(s1);
    s2_len = (s2 == NULL) ? 0 : strlen(s2);
    
    /* If n is greater than or equal to s2_len, use the entire
	string s2 */
    n = (n >= s2_len) ? s2_len : n;
    
    /* Allocate memory for the result string */
    result = malloc(sizeof(char) * (s1_len + n + 1));
    if (result == NULL) {
        return NULL;  // Return NULL if allocation fails
    }
    
    /* Copy the contents of s1 and the first n bytes
	of s2 into the result string*/
    strncpy(result, s1, s1_len);
    strncpy(result + s1_len, s2, n);
    
    /*Add null terminator to end of string*/
    result[s1_len + n] = '\0';
    
    return result;
}
