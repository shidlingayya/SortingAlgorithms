#include <iostream>
using namespace std;

int main() 
{
	int arr[10]{ 1, 4, 5, 3, 2, 9, 10, 8, 9, 0 };
	const int n = 10;
	int key = 0;
	cout << "Before sorting" << endl;
	for (auto x : arr)
	{
		cout << x << " ";
	}
	cout << endl;
	for (auto i = 1; i < n-1; i++) //Initialize outer loop to next element in array
	{
		key = arr[i]; //Current element always
		auto j = i; //Start inner loop with same as i
		while (j > 0 && arr[j - 1] > key) //If previous element is greater than current element 
		{
			arr[j] = arr[j-1];
			j--;
		}
		arr[j] = key;
	}

	cout << "After sorting" << endl;
	for (auto x : arr)
	{
		cout << x << " ";
	}
	return 0;
}
