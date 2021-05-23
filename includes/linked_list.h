#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct Student {
	int rno;
	char name[20];
	struct Student* next;
}ST;

void add_begin(ST**); // function to add the node at the begin of the list
void print_list(ST*);	//function to print the details of all nodes
void delete_node(ST*);	//To delete a node
