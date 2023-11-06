#include "dnw.h"

int	main()
{
	int 	i;
	int	n;
	int	tries;
	int	language;
	char	*msg;	
	char	*final = (char *)malloc(sizeof(char) * 6);
	char	*original = (char *)malloc(sizeof(char) * 6);
	char	*test = (char *)malloc(sizeof(char) * 6);
	char	*misplaced = (char *)malloc(sizeof(char) * 6);

	if(!final || !original || !test || !misplaced)
	{
		printf("memory allocation failed\n");
		return(0);
	}
	
	memset(misplaced, '\0', 6);
	i = 0;
	n = 0;
	tries = 5;
	printf("plz select language:\n\npress 1 for english\npresione 2 para español\napuyez sur 3 pour le français\n");
	scanf("%i", &language);
	getchar();
	ft_setword(original, language);
	strcpy(test, "_____");
	system("clear");
	msg = ft_message("welcome", language);
	printf("%s", msg);
	free(msg);
	while(strcmp(original, test) != 0 && tries > 0)
	{
		if(tries < 5)
		{
			msg = ft_message("tries", language);
			printf(msg, tries);
			free(msg);
		}
		scanword(test);
		tries--;
		i = 0;
		while(test[i])
		{
			if(!compare_exact(&original[i], &test[i])) 
			{
				final[i] = '_';
				if(!strchr(misplaced, test[i]) && !strchr(final, test[i]))
				{
					if((misplaced[n] = compare_part(original, &test[i])))
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
			while(misplaced[n])
			{
				msg = ft_message("misplaced", language);
				printf(msg, misplaced[n]);
				free(msg);
				misplaced[n] = '\0';
				n++;
			}
		}
	}
	if(strcmp(test, original) == 0)
	{
		msg = ft_message("win", language);
		printf("%s", msg);
		free(msg);
	}
	else
	{
		msg = ft_message("lose", language);
		printf(msg, original);
		free(msg);
	}
	free(final);
	free(original);
	free(test);
	free(misplaced);
	return(0);
}
