#include <stdio.h>
#include <string.h>

typedef	struct	Person
{
	char	*name[20];
	char	*city[20];
	int		age;
}person;

int	main()
{
	person	personarray[3];
	int		i;
	
	i = 0;
	strcpy(personarray[0].name, "juan");
	strcpy(personarray[0].city, "Benidorm");
	personarray[0].age = 25;
	
	strcpy(personarray[1].name, "Jose");
	strcpy(personarray[1].city, "Villajollosa");
	personarray[1].age = 28;
	
	strcpy(personarray[2].name, "Miguel");
	strcpy(personarray[2].city, "Calpe");
	personarray[2].age = 30;
	
	while(i < 3)
	{
		printf("the name pf the person is %s, he lives in %s, and has %i years old\n", personarray[i].name, personarray[i].city, personarray[i].age)
		i++;
	}
	return (0);
}