#include <iostream>
using namespace std;

int main()
{
    int A[100], n, i, j, min, temp;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(i = 0; i < n; i++)
        cin >> A[i];

    for(i = 0; i < n - 1; i++)
    {
        min = i;

        for(j = i + 1; j < n; j++)
        {
            if(A[j] < A[min])
                min = j;
        }

        temp = A[i];
        A[i] = A[min];
        A[min] = temp;
    }

    cout << "Sorted Array: ";
    for(i = 0; i < n; i++)
        cout << A[i] << " ";

    return 0;
}
