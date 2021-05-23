#include "linked_list.h"

/*function definitions */
void add_begin(ST** ptr)
{
	/*memory allocation*/
	ST* temp = malloc(sizeof(ST));

	if (temp == NULL)
	{
		printf("Malloc failed\n");
		return;
	}
	/*Fetch the details*/
	printf("Enter the roll no\n");
	scanf_s("%d", &temp->rno);
	printf("Enter the name\n");
	scanf_s("%s", temp->name, sizeof(temp->name));

	/*Linking*/
	temp->next = *ptr;
	*ptr = temp;
}

void delete_node(ST** ptr)
{
	ST* temp;
	if (!*ptr)
		printf("List is empty! Nothing to delete\n)";
	int num;
	printf("Enter the number of node to delete\n");
	scanf_s("%d", &num);
	if(*ptr->rno == num)
	{
		temp = *ptr;
		*ptr = *ptr->next;
		free(temp);
	}
	while (*ptr->next)
	{
		if ((*ptr->next)->rno == num)
		{
			temp = *ptr->next;
			*ptr->next = (*ptr->next)->next;
			free(temp);
		}
	}

}

void print_list(ST* ptr)
{
	while (ptr)
	{
		printf("Numner is %d and name is %s\n", ptr->rno, ptr->name);
		ptr = ptr->next;
	}
}