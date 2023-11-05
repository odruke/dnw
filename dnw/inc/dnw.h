#ifndef DNW_H
#define DNW_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int ft_setword(char *origin, int language);
int compare_exact(char *original, char *test);
char    compare_part(char *original, char *letter);
void    scanword(char *test);
char    *ft_message(char *ide, int lang);

#endif
