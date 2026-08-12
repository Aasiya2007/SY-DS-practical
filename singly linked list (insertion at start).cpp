#include<iostream>
using namespace std;

struct Node
{ 
    
    int data;
    Node *next;
  
};

int main()
{
	Node *head = new Node;

	head -> data = 20;
	head -> next = NULL;
	
    Node *newNode = new Node;
    newNode->data = 10;

    newNode->next = head;
    head = newNode;


	cout << head->data << " -> " << head->next->data << " -> NULL";
	
	
   return 0;
	
}