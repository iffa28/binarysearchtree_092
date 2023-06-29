#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
	string info;
	Node* leftchild;
	Node* rightchild; 

	//constructor for the node class
	Node(string i, Node* l, Node* r) 
	{
		info = i;
		leftchild = l;
		rightchild = r;
	}
};

class BinaryTree 
{
public:
	Node* ROOT;

	BinaryTree()
	{
		ROOT = NULL;    //initializing ROOT to NULL
	}
	void insert(string element)  //insert a node in the binary search tree
	{
		Node* newNode = new Node(element, NULL, NULL);  //Allocate for the new node
		newNode->info = element;  //assign value to the data field of the new node
		newNode->leftchild = NULL;   //make the left child of the new node point to NULL
		newNode->rightchild = NULL;  //make the right child of the new node point to NULL

		Node* parent = NULL;
		Node* currentNode = NULL;
		search(element, parent, currentNode);    //Locate the node which will be the parent of the node inserted

		if (parent == NULL)  //if parent is NULL(Tree is empty
		{
			ROOT = newNode;  //mark the ner node as ROOT
			return;          //exit
		}

		if (element < parent->info)   //if the value in data field of the new node is less than that of the parent
		{
			parent->leftchild = newNode;  //make the left child of the point to the new node
		}

		else if (element > parent->info)     //if the value in data field of the new node is greater than that of the parent
		{
			parent->rightchild = newNode;  //make the right child of the point to the new node
		}
	}

	void search(string element, Node*& parent, Node*& currentNode)
	{
		//this function searches the currentNode
	}
};