#include <iostream>
using namespace std;

int main()
{
    int A[100], n, i, j, key;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(i = 0; i < n; i++)
        cin >> A[i];

    for(i = 1; i < n; i++)
    {
        key = A[i];
        j = i - 1;

        while(j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }

        A[j + 1] = key;
    }

    cout << "Sorted Array: ";
    for(i = 0; i < n; i++)
        cout << A[i] << " ";

    return 0;
}
