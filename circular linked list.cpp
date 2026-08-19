#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
};

int main()
{
   
    Node *newNode = new Node;
    
    newNode = (struct Node*) 
	malloc(sizeof(struct Node));
	
    newNode->data = 10;
    newNode->prev = newNode;
    newNode->next = newNode;

    
    cout << "Data = " << newNode->data << endl;
    cout << "Previous node data = " << newNode->prev->data << endl;
    cout << "Next node data = " << newNode->next->data << endl;

   

    return 0;
}