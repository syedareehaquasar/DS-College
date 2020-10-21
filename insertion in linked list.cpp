#include<stdio.h>
#include<stdlib.h>

struct Node{
	
	int data;
	struct Node* next;
};

void print(struct Node*n)
{
	while(n!=NULL)
	{
		printf(" %d",n->data);
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
	struct Node* newNode = NULL;
	struct Node* startNode = NULL;
	struct Node* midNode = NULL;
	
	// allocating dynamic memory using malloc
	head=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	fourth=(struct Node*)malloc(sizeof(struct Node));
	fifth=(struct Node*)malloc(sizeof(struct Node));
	newNode =(struct Node*)malloc(sizeof(struct Node));
	startNode=(struct Node*)malloc(sizeof(struct Node));
	midNode=(struct Node*)malloc(sizeof(struct Node));
	
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
	
	
	
	// insertion in the middle
	printf("\nEnter node to be inserted at the middle \n");
	int n3,pos;
	scanf("%d", &n3);
	printf("Enter the position \n");
	scanf("%d", &pos);
	midNode->data =n3;
	
	// temp node declaration and storing value of head in it.
	struct Node *temp=head;
	// travelling untill position in temp
	for(int i=2;i<pos;i++)
	{
		if(temp->next!=NULL)
		temp=temp->next; 
	}
	// linking the midnode
	midNode->next=temp->next;
	temp->next=midNode;
	
	// printing the mid node inseted list
	printf("Updated link list \n");
	print(head);
	printf("\n \n");
	
	
	
	
	// insertion at the end
	printf("\nEnter node to be inserted at last \n");
	int num;
	scanf("%d", &num);
	
	//linking
	newNode-> data =num;
	newNode->next = NULL;
	fifth-> next = newNode;
	
	// printing new linked list with new node inserted at the end
	printf("Updated link list \n");
	print(head);
	printf("\n\n");
	
	
	// insertion at the beginning
	printf("\nEnter node to be inserted at start \n");
	int n2;
	scanf("%d", &n2);
	
	//linking
	startNode-> data =n2;
	startNode->next = head;
	head = startNode;
	
	// printing the new linked list with new node in the beginning
	printf("Updated link list \n");
	print(head);
	
	return 0;
}
