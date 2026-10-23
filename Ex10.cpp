#include <iostream>
using namespace std;

void merge(int a[], int left, int mid, int right)
{
    int i = left, j = mid + 1, k = 0;
    int temp[100];

    while (i <= mid && j <= right)
    {
        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= mid)
        temp[k++] = a[i++];

    while (j <= right)
        temp[k++] = a[j++];

    for (i = left, k = 0; i <= right; i++, k++)
        a[i] = temp[k];
}

void mergeSort(int a[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;

        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);

        merge(a, left, mid, right);
    }
}

int main()
{
    int n, salary[100];

    cout << "Enter number of employees: ";
    cin >> n;

    cout << "Enter employee salaries: ";
    for (int i = 0; i < n; i++)
        cin >> salary[i];

    mergeSort(salary, 0, n - 1);

    cout << "Salaries in ascending order: ";
    for (int i = 0; i < n; i++)
        cout << salary[i] << " ";

    return 0;
}
