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
	new->next = *head;
	*head = new;
}

int	sizelist(Number *head)
{
	Number *temp;
	int	i;

	i = 0;
	temp = head;
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

void	printlist(Number *head)
{
	Number	*temp;
	int	i;

	i = 1;
	temp = head;
	if(!temp) // condition for empty list
	{
		printf("this is the position content in the node number %i: %i\n\n", i, temp->position);	
	}
	else
	{
		while(temp)
		{
			printf("this is the position content in the node number %i: %i\n\n", i, temp->position);
			temp = temp->next;
			i++;
		}
	}
}
void	addlast(Number **head, Number *new)
{
	Number *temp;

	temp = (*head)->next;
	while (temp->next)
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
		return (1);
	head->position = 0;
	head->next = NULL;
	
	node1 = createnode(1);
	node2 = createnode(2);
	addfront(&head->next, node1);
	addlast(&head, node2);

	printlist(head);
	printf("->the list is up to %i nodes by now<-\n", sizelist(head));
	deleteNumber(head);
	deleteNumber(node1);
	deleteNumber(node2);

//	while(while nlist > 0)
//	{
//		createnode
//	}
}
