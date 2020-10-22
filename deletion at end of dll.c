// insertion in the beginning doubly linked list

//required libraries
#include <stdio.h>
#include <stdlib.h>

// doubly linked list declaration
struct Node { 
    int data; 
    struct Node* next; // Pointer to next node 
    struct Node* prev; // Pointer to previous node
};

//function for insertion at the beginning
void insertAtBeginning(struct Node** head_ref, int newHeadData) 
{ 
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); // new node
    
    // assigning value to the new node and assigning values to its pointers
    new_node->data = newHeadData; //storing given data into new node
    new_node->next = (*head_ref); //dll next of node to head
    new_node->prev = NULL;  // making new node head by pointing previous node to null
  
    if ((*head_ref) != NULL) // checking if head is present or not
        (*head_ref)->prev = new_node; // changing poiter of headnode from null to new node
  
    (*head_ref) = new_node; // changing head to new node
}

void deletionAtEnd(struct Node* node) 
{
	//traversing the list to find second lastnode
    while (node -> next -> next != NULL) {  
        node = node->next;  
    }
    
    node -> next = NULL; // changing second last node pointer to null
}

// printing the DLL
void printList(struct Node* node)  
{  
    struct Node* last;  // declaring a new node for reverse traversal
    
    // traversal in forward direction
    printf("\nTraversing in forward direction \n");  
    while (node != NULL) {  
        printf(" %d ", node->data);  
        last = node;  
        node = node->next;  
    }  
  
	//traversal in reverse direction  
    printf("\nTraversal in reverse direction \n");  
    while (last != NULL) {  
        printf(" %d ", last->data);  
        last = last->prev;  
    }  
} 

int main()
{
	// my info
	printf("\n\n Name - Syeda Reeha Quasar \n Roll No. - 14114802719 \n Group - 3C7 \n\n");
	
	struct Node* head = NULL; // declaring head as null
	
	// all these elements are inserted in the beginning
	insertAtBeginning(&head, 1); //inserting 1
	insertAtBeginning(&head, 2); //inserting 2
	insertAtBeginning(&head, 3); //inserting 3
	insertAtBeginning(&head, 4); //inserting 4
	
	printf("\n DLL before dletion: \n");
	printList(head); // printing DLL
	
	printf("\n\n\n\n DLL after deletion from the end: \n");
	deletionAtEnd(head);
	printList(head); // printing DLL
	
	return 0;
}

