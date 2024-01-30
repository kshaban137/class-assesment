// wave array
// sample input: 2, 4, 7, 8, 9, 10
// sampleoutput: 4, 2, 8, 7, 10, 9

#include <iostream>
#include <vector>

using namespace std;

void wave_array(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i += 2)
    {
        if (arr[i] < arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    vector<int> arr = {2, 4, 7, 8, 9, 10};

    wave_array(arr);

    cout << "Wave array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
