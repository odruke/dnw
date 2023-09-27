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

char	*compare_part(char *original, char *letter)
{
	int	i;
	
	i = 0;
	while(original[i])
	{
		if(original[i] == *letter)
			return letter;
		i++;
	}
	return(NULL);
}


int	main()
{
	int 	i;
	int		n;
	char	*final = (char *)malloc(sizeof(char) * 6);
	char	*original = (char *)malloc(sizeof(char) * 6);
	char	*test = (char *)malloc(sizeof(char) * 6);
	char	*missplaced = (char *)malloc(sizeof(char) * 6);
	
	if(!final || !original || !test || !missplaced)
	{
		printf("memory allocation failed\n");
		return(0);
	}
	
	memset(missplaced, '\0', 6)
	i = 0;
	n = 0;
	strcpy(original, "house");
	printf("***********  D  N  W  ***********\n\n");
	printf("welcome to Definetely Not Wordle!\n\n\n");
	printf("plz enter a five letter word to start the game:\n");
	scanf("%s", test); //anadir fail options
	while(test[i])
	{
		if(!compare_exact(&original[i], &test[i]))
		{
			final[i] = '_';
			if((missplaced[n] = compare_part(original, &test[i])))
				n++;
		}
		else
			final[i] = original[i];
			i++;
	}
	final[6] = '\0';
	n = 0;
	printf("%s\n\n", final);
	while(missplaced[n])
	{
		printf("letter %c is somewere else\n", missplaced[n]);
		n++;
	}
	free(final);
	free(original);
	free(test);
	free(missplaced);
	return(0);
}
