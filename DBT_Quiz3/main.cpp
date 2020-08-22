#include <iostream>
#include <algorithm>
using namespace std;
//function prototypes
void reverse(int arr[], int n); // please note that "reverse" is a primitive data-type
void print(int arr[], int n);

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 }; // instantiating an array initializer
	int n = sizeof(arr)/sizeof(arr[0]); // code to find the size of the array before instantiating it to the variable n;

	reverse(arr, n); // invoke the function defined below to reverse the array elements
	print(arr, n); // function to print the reversed array in their reversed order

	return 0;
}

//function to reverse the elements of the array passed
void reverse(int arr[], int n)
{
	reverse(arr, arr + n);
}

// function to print the elements of the array
void print(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}
