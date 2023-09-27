#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	compare_exact(char *original, char *test)
{
	if(*original == *test)
		return (1);
	else
		return (0);
}
/*
char	compare_part(char *original, char *test)
{
	int	i;
	
	while(test)
	{
		
	}
}
*/

int	main()
{
	int i;
	char	*final = (char *)malloc(sizeof(char) * 6);
	char	*original = (char *)malloc(sizeof(char) * 6);
	char	*test = (char *)malloc(sizeof(char) * 6);
	
	if(!final || !original || !test)
	{
		printf("memory allocation failed\n");
		return(0);
	}
	
	
	i = 0;
	strcpy(original, "house");
	printf("***********  D  N  W  ***********\n\n");
	printf("welcome to Definetely Not Wordle!\n\n\n");
	printf("plz enter a five letter word to start the game:\n");
	scanf("%s", &test); //anadir fail options
	while(test[i])
	{
		if(!compare_exact(&original[i], &test[i]))
			final[i] = '_';
		else
			final[i] = original[i];
			i++;
	}
	final[6] = '\0';
	printf("%s\n", final);
	free(final);
	free(original);
	free(test);
	return(0);
}