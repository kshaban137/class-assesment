// move zeros to right
// sample input: 12, 0, 13, 0, 15
// sample output: 12, 13, 15, 0, 0

#include <iostream>
using namespace std;

void moveZerosToRight(int arr[], int n)
{
    int writeIndex = 0;

    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[writeIndex++] = arr[i];
        }
    }

    
    for (int i = writeIndex; i < n; i++)
    {
        arr[i] = 0;
    }
}

int main()
{
    int arr[] = {12, 0, 13, 0, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveZerosToRight(arr, n);

    cout << "Array after moving zeros to the right: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}