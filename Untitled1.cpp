#include <stdio.h>
#include <stdlib.h>

struct Node {							 //Node for Doubly Linked List
	int data;
	struct Node* previous;
	struct Node* next;
};

void insertNode (struct Node** head, int n, int m) { 		//Function for Insertion
	struct Node* newNode = NULL;
	struct Node* current = *head; 
	newNode = (struct Node*)malloc(sizeof(struct Node));	
	newNode->data = n;
	if(m == 1){ 						//Insertion at beginning
		newNode->previous = NULL;
		newNode->next = *head;
		current->previous = newNode; 
		*head = newNode;
	}else{ 							//Insertion at end or desired position
		int i=1;
		while (i<(m-1)){ 				//Searching the element
			current = current->next;
			i++;				
		}
		if(m == 4){
			newNode->next = NULL;
		}else{
			newNode->next = current->next;
			current->next->previous = newNode;
		}
		newNode->previous = current;
		current->next = newNode;
	}
}
void printFront(struct Node* n){			 //Function for printing the Linked List using NEXT
	printf("Printing DLL\n");
	while (n != NULL) {
		printf("%d\t",n->data);
		n = n->next;
	}
	printf("\n");
}
void printBack(struct Node* n){ 			//Function for printing the Linked List using PREVIOUS
	while (n->next != NULL) {
		n = n->next;
	}
	printf("Printing reverse DLL\n");
	while (n != NULL){
		printf("%d\t",n->data);
		n = n->previous;
	}
	printf("\n");
}

int main(){
	printf("Roll No: 14114802719\nName: Syeda Reeha Quasar\nGroup: C6\n");
	int n,m;	
	struct Node* first =NULL; 					//Linked List
	struct Node* second = NULL;
	struct Node* third = NULL;
	first = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	first->data = 1;
	first->previous = NULL;
	first->next = second;
	
	second->data = 2;
	second->previous = first;
	second->next = third;
	
	third->data = 3;
	third->previous = second; 
	third->next = NULL;
	
	struct Node* head = first;
	
	printf("Enter the data you want to insert:\n");			 //Input element to be inserted
	scanf("%d", &n);
	printf("Enter the position you want to insert the data at:\n"); 	//Input position to insert at
	scanf("%d", &m);
	
	insertNode(&head,n,m); 					//Function calling
	
	printFront(head); 						//Output new Linked List from front
	printBack(head);  						//Output new Linked List from back
	return 0;
}

