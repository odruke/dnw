#include "dnw.h"

static int  getRandomInt(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

int ft_setword(char *origin, int language)
{
/*
 * search different approach for correct language input validation	
	if(language != 1 && language != 2 && language != 3)
	{
		printf("invalid input\npress 1 for english\npresione 2 para español\napuyez sur 3 pour le français\n");
		return (ft_setword);
	}
*/	
	srand(time(NULL));
	int	i;
	int	position;
	char	*en;
	char	*sp;
	char	*fr;
	char	*lang_file;

	en = "words/english_words.txt";
	sp = "words/spanish_words.txt";
	fr = "words/french_words.txt";
	switch(language)
	{
		case 1:
			lang_file = en;
			break;
		case 2:
			lang_file = sp;
			break;
		case 3:
			lang_file = fr;
			break;
	}

	FILE	*file = fopen(lang_file, "r");
	if (file == NULL) 
	{
		perror("Error opening file");
		return 1;
	}
	i = 0;
	position = (sizeof(char) * (getRandomInt(0, 49) * 6)); //2nd value of getRandomInt match number of words in the txt minus one
	fseek(file, position, SEEK_SET);

    while((origin[i] = fgetc(file)) && (i < 5))
		i++;
	origin[i] = '\0';
	fclose(file);
	return 0;
}

int compare_exact(char *original, char *test)
{
	if(*original == *test)
		return (1);
	else
		return (0);
}

char    compare_part(char *original, char *letter)
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
void    scanword(char *test)
{
	int	clean;
	
	if(scanf("%5[a-z]", test) != 1)
	{
		while ((clean = getchar()) != '\n' && clean != EOF);
		printf("invalid input. Lowercase letters only\n");
		scanword(test);
	}
	
	if((clean = getchar()) != '\n' && clean != EOF)
	{
		while ((clean = getchar()) != '\n' && clean != EOF);
		printf("Invalid input. Please enter a five letter word.\n");
		scanword(test);
	}
	
}
