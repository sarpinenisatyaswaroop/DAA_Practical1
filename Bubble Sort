#include <iostream>
using namespace std;

int main()
{
    int A[100], n, i, j, temp;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(i = 0; i < n; i++)
        cin >> A[i];

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    cout << "Sorted Array: ";
    for(i = 0; i < n; i++)
        cout << A[i] << " ";

    return 0;
}
