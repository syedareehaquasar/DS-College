#include <iostream>
using namespace std;

// Node for LL declaration -> node for storing Queue elements
struct node {
	int data;
	node *next;
};
// front and rear pointers declaration
node *front = NULL;
node *rear = NULL;

// function for inserting the value into linked list
void enqueue(int value){
	node *ptr; //ptr for traversal in LL for queue
	ptr = new node;
	//checking whether queue is full
	if (ptr == NULL) {
		cout<<"Queue is full!"<<endl;
		return;
	}
	//inserting queue elements
	else {
		ptr -> data = value; // putting value of data as value given
		// if no front elements then insert ptr as front
		if (front == NULL) {
			front = ptr; // making front as ptr
			rear = ptr; // making rear as ptr
			front -> next = NULL; // pointing to null as only 1 element
			rear -> next = NULL;
		}
		// insertion at rear end... elements already in linked list
		else {
			rear -> next = ptr; // changing rear next to ptr
			rear = ptr; // inserting ptr containing the new node to the rear
			rear -> next = NULL; // making the next of rear as null
		}
	}
}

// function to dequeue or delete elemets from queue
void dequeue(){
	node *ptr; //ptr for traversal
	
	// condition when queue is empty
	if (front == NULL) {
		cout<<"queue is empty!"<<endl;
		return;
	}
	
	// removing front from queue
	else {
		ptr = front; // placing ptr aat front as front to be deleted
		front = front -> next; //changing front to front next to make second first element inserted as front
		delete ptr; // deleting the ptr
	}
}

// function to display the LL
void display(){
	struct node *ptr; //ptr for traversal
	ptr = front; // starting point of current ptr to front
	
	// condition if list is empty
	if (front == NULL) {
		cout<<"Queue is Empty!"<<endl; // checking if front exists
	}
	
	// traversing and printing list
	else {
		// traversing till we reach end of the linked list i.e. reaches rear
		while (ptr != NULL) {
			cout << ptr -> data << " "; // diplaying current node data
			cout << "-> "; // decorating the output
			ptr = ptr -> next; // moving to next
		}
	}
	cout << "NULL"; // adding null to the LL
}

int main(){
	int input; // variable for taking menu input
	cout << "Syeda Reeha Quasar \n 14114802719 \n C7"; // my info
	// menu for operation can be performed
	// do while used to execute the program atleast once
	do{
		cout<<endl;
		cout<<"1.Enqueue"<<endl; // 1st option for inserting elements
		cout<<"2.Dequeue"<<endl; // 2nd for deleting the elements from queue -> front is deleted
		cout<<"3.Display"<<endl; // 3 for displaying the queue
		cout<<"0.Exit"<<endl;    // exiting the menu
		
		cin >> input; // taking input from user
		
		//checking what the input is and executing the desired operation
		if (input == 1) {
			cout<<"Enter Value to be inserted:"<<endl;
			int value;
			cin >> value; // taking value to be inserted from the user
			enqueue(value);
		}
		
		if (input == 2) {
			dequeue();
		}
		
		if (input == 3) {
			display();
		}
		
	} while (input != 0);
	return 0;
}
