#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *str1, char *str2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif /* _MAIN_H_ */
