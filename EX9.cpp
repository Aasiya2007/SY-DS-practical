#include <iostream>
using namespace std;

int main()
{
    int marks[5], i, j, temp;

    cout << "Enter marks of 5 students: ";
    for (i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }


    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            if (marks[j] > marks[j + 1])
            {
                temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }

    cout << "Ascending order: ";
    for (i = 0; i < 5; i++)
    {
        cout << marks[i] << " ";
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            if (marks[j] < marks[j + 1])
            {
                temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }

    cout << "\nDescending order: ";
    for (i = 0; i < 5; i++)
    {
        cout << marks[i] << " ";
    }

    return 0;
}
