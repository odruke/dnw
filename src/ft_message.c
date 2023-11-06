#include "dnw.h"

typedef struct	lang_msgs	
{
	char	*ide;
	char	*msg;
}Lang_msgs;

char	*ft_message(char *ide, int lang)
{
	//english
	Lang_msgs	en[] = {
		{"welcome", "***********  D  N  W  ***********\n\nwelcome to Definetely Not Wordle!\n\n\nplz enter a five letter word to start the game:\n\n"},
		{"tries", "\n\nyou have %i tries left. Plz try again\n"},
		{"missplaced", "letter %c is somewere else\n"},
		{"win", "Congratulations, you guessed the word!\n\n"},
		{"lose", "Sorry! the correct word was ->%s<-, good luck next time\n\n"},
		{NULL, NULL}
	}; 
	//spanish
	Lang_msgs	sp[] = {
		{"welcome", "***********  D  N  W  ***********\n\nBienvenido a Definetely Not Wordle!\n\n\npor favor, introduce una palabra de cinco letras para empezar el juego:\n\n"},
		{"tries", "\n\nTe quedan %i intentos, por favor intentalo de nuevo\n"},
		{"missplaced","La letra %c esta en otro sitio\n"},
		{"win", "¡Felicidades, adivinaste la palabra!\n\n"},
		{"lose", "Lo siento, la palabra correcta era ->%s<-, suerte la proxima vez\n\n"},
		{NULL, NULL}

	};
	//french
	Lang_msgs	fr[] = {
		{"welcome", "***********  D  N  W  ***********\n\nBienvenue au Definetely Not Wordle!\n\n\nSvp, tapez une palabre de cinq lettres pour commencer le jeux\n\n"},
		{"tries", "\n\nIl vous reste %i tentatives, veuillez réessayer\n"},
		{"missplaced","La lettre %c est à un autre endroit\n"},
		{"win", "Félicitations, vous avez deviné le mot!\n\n"},
		{"lose", "Dsl! le bon mot était ->%s<-, bonne chance la prochaine fois\n\n"},
		{NULL, NULL}
		
	};
	char	*final = (char *)malloc(sizeof(char) * 150);
	final[0] = '\0';
	int	i;
	switch (lang)
	{
		case 1:
			i = 0;
			while(en[i].ide)
			{
				if (!strcmp(en[i].ide, ide))
				{
					strcpy(final, en[i].msg);
					return(final);
					break;
				}//mirar en esta lista si es 1, ingles
				i++;
			}	
			printf("ide error in en");
			free(final);
			return(NULL);
		case 2:
			i = 0;
			while(sp[i].ide)
			{
				if (!strcmp(sp[i].ide, ide))
				{
					strcpy(final, sp[i].msg);
					return(final);
					break;
				}//mirar en esta lista si es 2, spanish 
				i++;
			}
			printf("ide error in sp");
			free(final);
			return(NULL);
		case 3:
			i = 0;
			while(fr[i].ide)
			{
				if (!strcmp(fr[i].ide, ide))
				{
					strcpy(final, fr[i].msg);
					return(final);
					break;
				}//mirar en esta lista si es 3, frances
				i++;
			}
			printf("ide error in fr");
			free(final);
			return(NULL);
	}
	printf("insert valid input");
	free(final);
	return (NULL);
}

