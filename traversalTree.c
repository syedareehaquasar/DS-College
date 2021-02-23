#include <stdio.h> 
#include <stdlib.h> 

// A binary tree node containing data, left pointer and right pointer
struct bNode { 
	int data; 
	struct bNode* left; 
	struct bNode* right; 
};

// newNode creator for tree nodes
struct bNode* bNewNode(int data) { 
	struct bNode* bNode = (struct bNode*) malloc(sizeof(struct bNode)); 
	bNode -> data = data; 
	bNode -> left = NULL; 
	bNode -> right = NULL; 
	
	return (bNode); 
} 

// function for post order traversal
void printPostorder(struct bNode* bNode) { 
	if (bNode == NULL) //empty tree
		return; 

	printPostorder(bNode -> left); // first recur on left subtree 

	printPostorder(bNode -> right); // then recur on right subtree 

	printf("%d ", bNode -> data); //printing each node data
} 

// function for inorder traversal
void printInorder(struct bNode* bNode) { 
	if (bNode == NULL)  // tree empty
		return; 

	printInorder(bNode -> left); // first recur on left child

	printf("%d ", bNode -> data); // then print the data of nod

	printInorder(bNode -> right); // now recur on right child
} 

// preorder traversal function
void printPreorder(struct bNode* bNode) { 
	if (bNode == NULL) // empty tree case
		return; 

	printf("%d ", bNode -> data); // first print data of node

	printPreorder(bNode -> left); // then recur on left sutree

	printPreorder(bNode -> right); // now recur on right subtree
}	 


int main() { 
	struct bNode *root = bNewNode(1); 
	root -> left = bNewNode(2); 
	root -> right	= bNewNode(3); 
	root -> left -> left = bNewNode(4); 
	root -> left -> right = bNewNode(5); 

	printf("\nPreorder traversal of binary tree is \n"); 
	printPreorder(root); 

	printf("\nInorder traversal of binary tree is \n"); 
	printInorder(root); 

	printf("\nPostorder traversal of binary tree is \n"); 
	printPostorder(root); 

	getchar(); 
	return 0; 
} 

