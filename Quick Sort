#include <iostream>
using namespace std;

int partition(int A[], int lb, int ub)
{
    int pivot = A[lb];
    int start = lb;
    int end = ub;
    int temp;

    while(start < end)
    {
        while(A[start] <= pivot)
            start++;

        while(A[end] > pivot)
            end--;

        if(start < end)
        {
            temp = A[start];
            A[start] = A[end];
            A[end] = temp;
        }
    }

    temp = A[lb];
    A[lb] = A[end];
    A[end] = temp;

    return end;
}

void quickSort(int A[], int lb, int ub)
{
    if(lb < ub)
    {
        int loc = partition(A, lb, ub);

        quickSort(A, lb, loc - 1);
        quickSort(A, loc + 1, ub);
    }
}

int main()
{
    int A[100], n, i;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(i = 0; i < n; i++)
        cin >> A[i];

    quickSort(A, 0, n - 1);

    cout << "Sorted Array: ";
    for(i = 0; i < n; i++)
        cout << A[i] << " ";

    return 0;
}
