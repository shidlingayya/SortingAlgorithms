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
       //find minimum element
        int min = i;
        for (auto j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        //swap smallest element with a[i];
        swap(arr[min], arr[i]);
    }

    cout << "After swap" << endl;
    for (auto i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
