// insertion in the beginning of circular linked list

//required libraries
#include <stdio.h>
#include <stdlib.h>

//node declaration
struct node
{
	int data;
	struct node *next;
}
*head=NULL,*last=NULL; // initialising

void createCLL(int givenData)
{
	struct node *newNode; // creating a node to be added
	newNode = (struct node*)malloc(sizeof(struct node)); // allocating memory
	
	//storing value in new node and pointing it to null
	newNode -> data = givenData;
	newNode -> next = NULL;
	
	if(head==NULL) // checking if head is null
	{
		head = last = newNode; //assigning head and last as new node in case of empty list
	}
	
	else
	{
		last -> next = newNode; // attaching new element to last
		last = last -> next; // updating last
	}
}

void DeletionAtEnd()
{
	struct node* secondlast = head; // creating a pointer for head
	
	while (secondlast -> next -> next != head) // finding second last element
	{
		secondlast = secondlast -> next;
	}
	secondlast -> next = head; //updating head
}

void display(struct node *cll)
{
	// traversing and printinglist elements
	int i=1;
	do {
		printf(" %d ", cll -> data);
		cll = cll -> next;
		i++;
	}while (cll!=head); // using do while loop to print head then check condition
}

int main()
{
	// my info
	printf("\n\n Name - Syeda Reeha Quasar \n Roll No. - 14114802719 \n Group - 3C7 \n\n");
	
	int n, x, value, i;
	
	printf("\nEnter No. of Nodes to be inserted: ");
	scanf("%d",&n);
	
	for (i = 1; i <= n; i++)
	{
		printf("\nEnter Data of Node at position %d :",i); // taking data for nodes
		scanf("%d",&x);
		createCLL(x);
		
		// condition to make linked list circular by connecting last and head
		if (i == n) {
			last -> next = head;
		}
	}
	
	printf("\n Circular Linked list Before deletion\n"); // printing cll before insertion
	display(head);
	
	printf("\n----------- Deleting element from the last ----------\n"); // deleting element from the last
	
	DeletionAtEnd(value);
	
	//printing after insertion
	printf("\nCircular Linked List  After deletion from the end :\n");
	display(head);
	
	return 0;
}
