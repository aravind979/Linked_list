#include "linked_list.h"

int main()
{
	printf("*****Welcome to datastructure*****\n");
	ST* hp = 0; //head pointer
	char op;
	do {
		add_begin(&hp);
		printf("Do you want to continue (y/n)");
		scanf_s(" %c", &op, 1);
	} while (op == 'y');
	print_list(hp);
	return 0;
}

