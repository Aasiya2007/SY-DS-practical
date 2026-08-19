#include <iostream>
using namespace std;

struct Node
{
    string song;
    Node *prev;
    Node *next;
};

int main()
{
   
    Node *song1 = new Node;
    Node *song2 = new Node;
    Node *song3 = new Node;

   
    song1->song = "Heeriye";
    song2->song = "O Maahi";
    song3->song = "Sajni";
    
    song1->prev = NULL;
    song1->next = song2;

    song2->prev = song1;
    song2->next = song3;

    song3->prev = song2;
    song3->next = NULL;


    cout << "Forward Navigation:" << endl;

    Node *temp = song1;

    while (temp != NULL)
    {
        cout << temp->song << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
    
    cout << "backward Navigation:" << endl;

    temp = song3;

    while (temp != NULL)
    {
        cout << temp->song << " -> ";
        temp = temp->prev;
    }

    cout << "NULL" << endl;

    return 0;
}