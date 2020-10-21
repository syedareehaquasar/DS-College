//insertion in linked list
#include<stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

void printList(struct Node* n)
{
	while (n != NULL)
	{
		printf(" %d ", n -> data);
		n = n -> next;
	}
}

int main()
{	
	// my information
	printf("\n\n Name - Syeda Reeha Quasar \n Roll No. - 14114802719 \n Group - 3C7 \n\n");
	
	// declaring and initiallizing the nodes as null
	struct Node* head = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;
	struct Node* fourth = NULL;
	struct Node* fifth = NULL;
	
	// allocating dynamic memory using malloc
	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	fourth = (struct Node*)malloc(sizeof(struct Node));
	fifth = (struct Node*)malloc(sizeof(struct Node));
	
	// giving the data value in each node and assigning the next to another node in order to link
	// head data value 1 and pointing to second
	head -> data = 1;
	head -> next = second;
	
	// second data value 2 and pointing to third
	second -> data = 2;
	second -> next = third;
	
	//third data value 3 and pointing to fourth
	third -> data = 3;
	third -> next = fourth;
	
	//fourth data value 4 and pointing to fifth
	fourth -> data = 4;
	fourth -> next = fifth;
	
	//fifth data value 5 and pointing to null i.e. is the end of the linked list
	fifth -> data = 5;
	fifth -> next = NULL;
	
	//declaring and allocating memory to new node
	struct Node* newNode = NULL;
	newNode = (struct Node*)malloc(sizeof(struct Node));
	int n, p;
	printf("Enter the node you want to insert at:\n");
	scanf("%d", &p);
	printf("Enter the data for the new node to inserted at last\n");
	scanf("%d", &n);
	
	while (node != NULL)
	{
		if (x == n) // found the node no.
		{
			next changes....
		}
	}
	newNode -> data = n;
	newNode -> next = NULL;
	
	fifth -> next = newNode;
	
	
	// printing the inked list (function is being called to do so)
	printList(head);	
	return 0;
}
