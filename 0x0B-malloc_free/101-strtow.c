#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * word_len - Locate the index marking the end of the
 * first wordcontained within the string
 * Return: the index marking the end of the initial word pointed to by 
 * the str
 * NULL if ac == 0 or av == NULL
 * @str: string to be search
*/

int word_len(char *str)
{
int index = 0, len = 0;
while (*(str + index) && *(str + index) != ' ')
{
len++;
index++;
}
return (len);
}

/**
 * count_words - counts the number of words in a string
 * Return: the number of words in the the string
 * @str: string to be counted
*/

int count_words(char *str)
{
int index = 0, words = 0, len = 0;
for (index = 0; *(str + index); index++)
len++;
for (index = 0; index < len; index++)
{
if (*(str + index) != ' ')
{
words++;
index += word_len(str + index);
}
}
return (words);
}

/**
 * strtow - splits a string into words
 * Return: NULL if str == NULL or str == ""
 * If the function fails, it should return NULL
 * @str: string to be splited
*/

char **strtow(char *str)
{
char **strings;
int index = 0, words, w, letters, l;

if (str == NULL || str[0] == '\0')
return (NULL);
words = count_words(str);
if (words == 0)
return (NULL);


strings = malloc(sizeof(char *) * (words + 1));
if (strings == NULL)
return (NULL);

for (w = 0; w < words; w++)
{
while (str[index] == ' ')
index++;

letters = word_len(str + index);
strings[w] = malloc(sizeof(char) * (letters + 1));
if (strings[w] == NULL)
{
for (; w >= 0; w--)
free(strings[w]);
free(strings);
return (NULL);
}
for (l = 0; l < letters; l++)
strings[w][l] = str[index++];

strings[w][l] = '\0';
}
strings[w] = NULL;
return (strings);
}
