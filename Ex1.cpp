#include<iostream>
using namespace std;

struct Student
{
	char name[50];
	int rollno;
	char collegename[50];
	char coursename[50];
	int marks;
	
};
   
void input (Student s[],int n)
{
	for( int i = 0 ; i < n ; i++)
	{
		cout <<"\n Enter Student Details:"<< i+1 <<endl;
		
		cout<<" Enter Name : ";
		cin >> s[i].name;
		
		cout<< " Enter Roll No : ";
		cin >> s[i]. rollno;
		
		cout<<" Enter College Name : ";
		cin >> s[i]. collegename;
		
		cout<<" Enter Course Name : " ;
		cin >> s[i]. coursename;
		
		cout<<" Enter Marks : ";
		cin >> s[i]. marks;
			
	}
 
}
void display(Student*s,int n)

{
	cout<<" \n Student Detail \n";
	
	for(int i = 0; i < n ; i++)
	{
	
	 cout<<" Name:" << s[i]. name << endl;
	 cout<<" Roll No:" << s[i]. rollno << endl;
	 cout<<" College Name:" << s[i]. collegename << endl;
	 cout<<" Course Name:" << s[i]. coursename << endl;
	 cout<<" Marks:" << s[i]. marks << endl;	
		
	}		
}

int main()
{
	int n;
	
	cout << " Enter  Number of Students :";
	cin >> n;
	
	Student s [n];

    input(s, n);
    display(s, n);

    return 0;
	
}