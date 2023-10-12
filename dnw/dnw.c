#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

static int getRandomInt(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int	ft_setword(char *origin)
{
	
	srand(time(NULL));
	char	i;
	int	position;
	FILE	*file = fopen("english_words.txt", "r");
	if (file == NULL) 
	{
		perror("Error opening file");
		return 1;
	}
	i = 0;
	position = (sizeof(char) * (getRandomInt(0, 4) * 6));
	fseek(file, position, SEEK_SET);

    while((origin[i] = fgetc(file)) && (i < 5))
		i++;
	origin[i] = '\0';
	fclose(file);
	return 0;
}

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
	int	clean;
	
	if(scanf("%5[a-z]", test) != 1)
	{
		while (clean = getchar() != '\n' && clean != EOF);
		printf("invalid input. Lowercase letters only\n");
		scanword(test);
	}
	if(clean = getchar() != '\n' && clean != EOF)
	{
		while (clean = getchar() != '\n' && clean != EOF);
		printf("Invalid input. Please enter a five letter word.\n");
		scanword(test);
	}
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
	//strcpy(original, "tetas");
	ft_setword(original);
	strcpy(test, "_____");
	printf("***********  D  N  W  ***********\n\n");
	printf("welcome to Definetely Not Wordle!\n\n\n");
	printf("plz enter a five letter word to start the game:\n");
	while(strcmp(original, test) != 0 && tries > 0)
	{
		if(tries < 5)
			printf("you have %i tries left. Plz try again\n", tries);
		scanword(test);
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
		if (strcmp(original, test) != 0)
		{
			while(missplaced[n])
			{
				printf("letter %c is somewere else\n", missplaced[n]);
				missplaced[n] = '\0';
				n++;
			}
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
