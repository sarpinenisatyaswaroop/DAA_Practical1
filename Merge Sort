#include <iostream>
using namespace std;

void merge(int A[], int lb, int mid, int ub)
{
    int i = lb, j = mid + 1, k = lb;
    int B[100];

    while(i <= mid && j <= ub)
    {
        if(A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }

    while(i <= mid)
        B[k++] = A[i++];

    while(j <= ub)
        B[k++] = A[j++];

    for(i = lb; i <= ub; i++)
        A[i] = B[i];
}

void mergeSort(int A[], int lb, int ub)
{
    if(lb < ub)
    {
        int mid = (lb + ub) / 2;

        mergeSort(A, lb, mid);
        mergeSort(A, mid + 1, ub);

        merge(A, lb, mid, ub);
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

    mergeSort(A, 0, n - 1);

    cout << "Sorted Array: ";
    for(i = 0; i < n; i++)
        cout << A[i] << " ";

    return 0;
}
