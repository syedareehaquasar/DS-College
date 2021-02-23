#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
struct Node* head = NULL;
struct Node* rear = NULL;

void enqueue(int d){
	struct Node* toAdd = NULL;
	toAdd =  (struct Node*)malloc(sizeof(struct Node));
	toAdd -> data = d;
	toAdd -> next = NULL;
	if(!head){
		head = rear = toAdd;
		return;
	}
	rear -> next = toAdd;
	rear = toAdd;
}
void dequeue(){
	if (head == NULL){
		printf("\nEmpty Queue\n");
		return;
	}
	struct Node* temp = head;
	printf("\nDeleted Element: %d\n", temp->data);
	head = (head)->next;
	if (head == NULL){
		rear = NULL;
	} 
}
void display(){ //Function for printing the Queue
	printf("\n");
	struct Node* n = head;
	if(n == NULL){
		printf("Empty Queue\n");
		return;
	}
//	printf(n->next);
	printf("Queue elements are: \n");
	while (n != NULL) {
		printf("%d\t",n->data);
		n = n->next;
	}
	printf("\n");
}
int main(){
	int d = 0, ch = 0;
	char choice = 'y';
	
	while (choice == 'y' ) { //Menu driven program
		printf("\nMenu\n1. Add an element(Enqueue)\n2. Delete an element(Dequeue)\n3. Display the Queue\nEnter choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("Enter the element to add: ");
				scanf("%d",&d);
				enqueue(d); //Function Calling
				break;
			case 2:
				dequeue(); //Function Calling
				break;
			case 3:
				display(); //Function Calling
				break;
			default:
				printf("\nYou have entered an incorrect value\n");
				break;
		}
		printf("\nPress 'y' to continue\n");
		scanf(" %c",&choice);
	}
	return 0;
}
