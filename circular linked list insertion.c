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
*head=NULL,*last=NULL;

void createCLL(int givenData)
{
	struct node *newNode; // creating a node to be added
	newNode = (struct node*)malloc(sizeof(struct node)); // allocating memory
	
	//storing value in new node and pointing it to null
	newNode -> data = givenData;
	newNode -> next = NULL;
	
	if(head==NULL)
	{
		head = last = newNode;
	}
	
	else
	{
		last -> next = newNode;
		last = last -> next;
	}
}

void InsertAtBeginning(int givenData)
{
	struct node* current = head; // current node points to head using for traversal
	struct node* newNode = (struct node*)malloc(sizeof(struct node)); // creating and allocating memory to newNode
	
	newNode -> data = givenData; // storing given value to a newNode
	newNode -> next = head; // pointing newNode to head
	
	while (current -> next != head) // finding last element
	{
		current = current -> next;
	}
	current -> next = newNode; //making node last element so we can remove head and attach this instead
	head = newNode; // updating head
} 

void display(struct node *cll)
{
	// traversing and printinglist elements
	int i=1;
	printf("\n Circular linked list formed is:\n");
	do {
		printf("\nNode Present at position %d = %d\n", i, cll -> data);
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
	
	printf("\n Circular Linked list Before Insertion\n"); // printing cll before insertion
	display(head);
	
	printf("\nEnter Data of Node to be inserted at front:"); //taking input necessary and calling func
	scanf("%d",&value);
	
	InsertAtBeginning(value);
	
	//printing after insertion
	printf("\nCircular Linked List  After Insertion in the beginning :\n");
	display(head);
	
	return 0;
}
