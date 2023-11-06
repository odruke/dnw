#ifndef DNW_H
#define DNW_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void    scanword(char *test);
int 	ft_setword(char *origin, int language);
int 	compare_exact(char *original, char *test);
char    compare_part(char *original, char *letter);
char    *ft_message(char *ide, int lang);

#endif
