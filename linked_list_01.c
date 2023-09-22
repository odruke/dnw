#include <stdio.h>
#include <stdlib.h>

typedef struct number
{
	int	position;
	struct number	*next;
}Number;


Number	*createnode(int position)
{ 
	Number	*n = (Number *)malloc(sizeof(Number));
	if (!n) return (NULL);
	n->position = position;
	n->next = NULL;
	return (n);
}

void	deleteNumber(Number *number)
{
	free(number);
}

void 	addfront(Number **head, Number *new)
{
	new->next = head->next;
	head->next = new;
}

int	sizeNumber(Number *head)
{
	Number *temp;
	int	i;

	i = 0;
	temp = head->next;
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

void	printNumber(Number *head)
{
	Number	*temp;
	int	i;

	i = 1;
	temp = head->next;
	while(temp)
	{
		printf("this is the position content in the node number %i: %i\n\n", i, temp->position);
		temp = temp->next;
		i++;
	}
}
void	addlast(Number **head, Number *new)
{
	Number *temp;

	temp = head->next;
	while (temp)
	{
		temp = temp->next;
	}
	temp->next = new;
}

int	main()
{
//	int	nlist;

//	nlist = 4;
	Number	*node1;
	Number	*node2;
	Number	*head = (Number *)malloc(sizeof(Number));
	if (!head)
		return (NULL);
	head->next = NULL;
	
	node1 = createnode(1);
	node2 = createnode(2);
	addfront(head, node1);
	addlast(head, node2);

	printNumber(head);

	deletenumber(head);
	deletenumber(node2);
	deletenumber(node1);

//	while(while nlist > 0)
//	{
//		createnode
//	}
}
