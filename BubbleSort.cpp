#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[10] {1, 4, 5, 6, 3, 4, 3, 2, 1};
    int n = 10;

    cout << "Before swap" << endl;
    for (auto i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    for (auto i = 0; i < n - 1; i++) // to keep track of number of cycles
    {
        for (auto j = 0; j < n - i - 1; j++) // to compare the elements within the particular cycle
        {
            // swap if one element is greater than its adjacent element
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "After swap" << endl;
    for (auto i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
