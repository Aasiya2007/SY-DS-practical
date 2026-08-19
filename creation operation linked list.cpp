#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    
    Node *newNode = new Node;

    newNode->data = 10;
    newNode->next = NULL;

    cout << "Data = " << newNode->data << endl;
    cout << "Next = " << newNode->next << endl;


    return 0;
}