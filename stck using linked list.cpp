//stack implementation using linked list

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//node structure
struct node{
	int data;
	struct node *next;
}

*top = NULL;

//push for stack
void push (int x){
	struct node*t;
	t = (struct node*)malloc(sizeof(struct node));
	t->data=x;
    if (top == NULL) {
  	t->next=NULL;
	}	
	else{
		t->next=top;
	}
	top=t;
}

// pop for stack
void pop(){
	if (top == NULL) {
		printf("\nStack is Empty\n");
	}
	else {
		struct node*temp=top;
		printf("\nDeleted element : %d\n",temp->data);
		top=top->next;
		free(temp);
	}
}

//function for printing stack elements
void display(){
	if (top == NULL) {
		printf("\nStack is  Empty\n");
	}
	else {
		struct node*t;
		t=top;
		printf("Starting from top element in stack to last element \n");
		while(t->next!=NULL) {
			printf("%d--> ",t->data);
			t=t->next;
		}
		printf("%d-->NULL",t->data);
	}
}
int main(){
	// my info
	printf("\n\n Name - Syeda Reeha Quasar \n Roll No. - 14114802719 \n Group - 3C7 \n\n");
	
	int n,x;
	// entering data
	printf("\nEnter No. Elements in stack: ");
	scanf("%d",&n);
	printf("\nEnter Elements:\n");
	
	//insertion
	for(int i=1;i<=n;i++){
		printf("\n %dst element:",i);
		scanf("%d",&x);
		push(x);
	}
	
	display(); // orignal stack
	
	//deletion
	printf("\nAfter Deletion\n:");
	pop();
	
	//display after deletion
	display();
	
	return 0;
}
