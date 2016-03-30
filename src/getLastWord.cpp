/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	int i, k, len = 0;
	for (i = 0; str[i]; i++)
		len++;
	int j = len - 1;
	char *str_new = (char *)malloc(len * sizeof(char));
	for (i = len - 1; str[i] != ' '; i--)
	{
		j--;
	}
	for (i = j, k = 0; str[i] != ' '; k++, i--)
	{
		str_new[k] = str[i];
	}
	str_new[k] = '\0';
	return str_new;
}
