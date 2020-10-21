#include<stdio.h>
#include<stdlib.h>
struct Node{
	
	int data;			
	struct Node* next;	
};
void print(struct Node*n)		
{
	while(n!=NULL)
	{	printf(" %d",n->data);
		n=n->next;
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
	struct Node* temp = NULL;
	
	// allocating dynamic memory using malloc
	head=(struct Node*)malloc(sizeof(struct Node));	
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	fourth=(struct Node*)malloc(sizeof(struct Node));
	fifth=(struct Node*)malloc(sizeof(struct Node));
	temp =(struct Node*)malloc(sizeof(struct Node));
	
	// giving the data value in each node and assigning the next to another node in order to link
	// head data value 1 and pointing to second
	head->data = 1;
	head->next = second;
	
	// second data value 2 and pointing to third
	second->data = 2;
	second->next = third;
	
	//third data value 3 and pointing to fourth
	third->data = 3;
	third->next = fourth;
	
	//fourth data value 4 and pointing to fifth
	fourth->data = 4;
	fourth->next = fifth;
	
	//fifth data value 5 and pointing to null i.e. is the end of the linked list
	fifth->data = 5;
	fifth->next = NULL;
	
	// printing the linked list
	print(head);
	
	
	int num;
	//deletion of node at desired node
	
	//taking value of node to be deleted
	printf("\nEnter node to be deleted at any other position\n");
	scanf("%d", &num);	
	//deleting the node	
	struct Node *current = head;  
	while(current->next!=NULL)    
	{
		if(current->next->data==num)	
		{
			temp=current->next;			
			current->next=current->next->next; 
			free(temp); 		
			break;
		}
		else
			current=current->next;	
	}
	
	// printing the desired linked list with deleted node
	printf("\n\nUpdated link list \n\n");
	print(head);					
	
	
	
	//deletion at beginning	
	temp=head;		
	head=head->next;	
	free(temp);
	
	// printing the node after deleting first node			
	printf("\n\nUpdated link list after deletion at start\n\n");
	print(head);		
	
	
	
	//deletion of the last node
	
	while(current->next!=NULL)		
	{	if(current->next->next==NULL)	
		{	temp=current->next;		
			current->next=NULL;		
			free(temp);				
			break;
		}
		current=current->next;		
	}
	
	// printing linked list after deleting end node
	printf("\n\nUpdated link list after deletion at end \n");
	print(head);	
				
	return 0;
}

