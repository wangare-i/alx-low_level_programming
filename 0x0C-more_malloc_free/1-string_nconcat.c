#include "main.h"
#include <stdlib.h>
/*
 *
 * sting concatenate
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);
{
	size_t i, j, k;
	char *s;

	if (s1 == NULL)
		i = 0;
	else 
	{
		for (i = 0; si[i] != '\0'; i++);
	}
	if (s2 == NULL)
	      	j = 0;
	else
	{
	     	for (j = 0; sj[j] != '\0'; j++);

	}
	if (j > n)
	       	j =n;

	s = malloc(sizeof(char) * (i + j + NULL));
	
	if (s == NULL)
	        return (NULL);
	for (k = 0; k < i; k++);
	         s[k] = s1[k];

	for (k = 0; k < j; k++)
		s[k +1] =s2[k];
	s[i + j] = '\0';	
	return (s);
}
