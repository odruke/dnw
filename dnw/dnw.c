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

char	compare_part(char *original, char *letter)
{
	int	i;
	
	i = 0;
	while(original[i])
	{
		if(original[i] == *letter)
			return (*letter); 
		i++;
	}
	return(0);
}

void	scanword(char *test)
{
//	char	*c;
	int	clean;
	
/*	c = (char *)malloc(sizeof(char) * 6);
	if(!c)
	{
		printf("memory allocation failed in scanword");
		return (NULL);
	}
*/	scanf("%5s", test);
	if(clean = getchar() != '\n' && clean != EOF)
	{
		while (clean = getchar() != '\n' && clean != EOF);
		printf("Invalid input. Please enter a five letter word using only lowercase letters.\n");
//		free (c);
		scanword(test);
	}
//	else
//		return (c);
}

int	main()
{
	int 	i;
	int	n;
	int	tries;
	char	*final = (char *)malloc(sizeof(char) * 6);
	char	*original = (char *)malloc(sizeof(char) * 6);
	char	*test = (char *)malloc(sizeof(char) * 6);
	char	*missplaced = (char *)malloc(sizeof(char) * 6);
	
	if(!final || !original || !test || !missplaced)
	{
		printf("memory allocation failed\n");
		return(0);
	}
	
	memset(missplaced, '\0', 6);
	i = 0;
	n = 0;
	tries = 5;
	strcpy(original, "house");
	strcpy(test, "_____");
	printf("***********  D  N  W  ***********\n\n");
	printf("welcome to Definetely Not Wordle!\n\n\n");
	printf("plz enter a five letter word to start the game:\n");
	while(strcmp(original, test) != 0 && tries > 0)
	{
		if(tries < 5)
			printf("you have %i tries left. Plz try again\n", tries);
//		int	scan;
	//	if(
	//		scan = scanf("%5s", test);
//			test = scanword();
		scanword(test);
		       //	!= 5)
		//	{
		//		printf("Invalid input. Please enter a five letter word using only lowercase letters.\n");
		//		while (getchar() != '\n');
		//		continue;
		//	}
//		printf("scanf value is %i\n", scan);
		tries--;
		i = 0;
		while(test[i])
		{
			if(!compare_exact(&original[i], &test[i])) 
			{
				final[i] = '_';
				if(!strchr(missplaced, test[i]) && !strchr(final, test[i]))
				{
					if((missplaced[n] = compare_part(original, &test[i])))
						n++;
				}
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
	}
	if(strcmp(test, original) == 0)
		printf("Congratulations, you guessed the word!\n\n");
	else
		printf("Sorry, good luck next time\n\n");
	free(final);
	free(original);
	free(test);
	free(missplaced);
	return(0);
}
