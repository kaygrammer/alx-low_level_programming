#include "main.h"
#include <stdio.h>

char *cap_string(char *str)
{
  int i;
  int prev_char_was_separator = 1;

for (i = 0; str[i] != '\0'; i++) {
    if (prev_char_was_separator) {
      if (str[i] >= 'a' && str[i] <= 'z') {
        str[i] = str[i] - 'a' + 'A';
      }
    }
prev_char_was_separator = (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}');
}
}

