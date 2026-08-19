#include<iostream>
using namespace std;

int main()
{
    int marks;
    int *ptr;
   
    ptr = &marks;
   
    cout << "Enter the student's marks: " << endl;
    cin >> marks;
    
    

    cout << "Student's marks: " << *ptr << endl;

    return 0;
}