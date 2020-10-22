// insertion in the beginning of circular linked list

//required libraries
#include <stdio.h>
#include <stdlib.h>

//node declaration
struct Node { 
    int data; 
    struct Node* next; // Pointer to next node 
};

//function for insertion at the beginning
void insertAtBeginning(struct Node* head_ref, int newHeadData) 
{ 
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); // new node
    
    // assigning value to the new node and assigning values to its pointers
    new_node->data = newHeadData; //storing given data into new node
    new_node->next = head_ref; //dll next of node to head
  
    if (!head_ref) // checking if head is present or not
    {
    	head_ref = new_node;
	}
    
	else {
		struct Node* current = head_ref;
		while (current -> next != head_ref) 
		{
			current = current -> next;
		}
		current -> next = new_node;
		head_ref = new_node;
	}   
}

// printing the DLL
void printList(struct Node* node)  
{
	struct Node* stop = node;
	
	printf(" %d ", node->data);  
    node = node->next;  
    
    // traversal
    printf("\n The circular list elements are:\n");  
    while (node != stop) {  
        printf(" %d ", node->data);  
        node = node->next;  
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
	
	printf("\n circular linked list: \n");
	printList(head); // printing circular linked list
	
	return 0;
}

