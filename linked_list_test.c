#include <stdio.h>

typedef struct Number
{
	int	position;
	struct Number	*next;
}number;

number	*createnode(int position)
{ 
	number	*n = (number *)malloc(sizeof(number));
	if (!n) return (NULL);
	n->position = position;
	n->next = NULL;
	return (n);
}



int	main()
{
	
}