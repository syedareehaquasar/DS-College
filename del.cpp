#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
};

void print(struct node* p){
	int i=1;
	while(p!=NULL) {
		printf("ELEMENT PRESENT AT POSITION %d = %d\n",i,p->data);
		p=p->next;
		i++;
	}
}
int deletion(int pos,struct node *head){
	struct node*p;
	struct node*q;
	int x = -1;
	if(pos == 1){
		x = head -> data;
	    head -> data = (head -> next) -> data;
	    head -> next = head -> next;
	    for(int i = 1; i < 4; i++){
			head = head -> next;
		}
	}
	else{
		p = head;
		q = NULL;
		for(int i = 0; i < pos - 1 && p; i++){
			q = p;
			p = p -> next;
		}
		if(p){
			q -> next = p ->  next;
			x = p -> data;
		}
	}
	return x;
	print(head);
}

int main()
{
	int n;
	struct node *head=NULL;
	struct node *second=NULL;
	struct node *third=NULL;
	struct node *fourth=NULL;
	struct node *fifth=NULL;
	
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	fourth=(struct node*)malloc(sizeof(struct node));
	fifth=(struct node*)malloc(sizeof(struct node));
	
	head->data=25;
	head->next=second;
	
	second->data=35;
	second->next=third;
	
	third->data=45;
	third->next=fourth;
	
	fourth->data=55;
	fourth->next=fifth;
	
	fifth->data=65;
	fifth->next=NULL;
	
	printf("LINKED LIST BEFORE :\n");
	print(head);
	
	printf("ENTER POSITION WHICH IS TO BE DELETED :");
	scanf("%d",&n);

	printf("ELEMENT DELETED WITH DATA :%d\n",deletion(n,head));
	
	printf("LINKED LIST AFTER DELETION :\n");
	print(head);
	
	
	return 0;
}
