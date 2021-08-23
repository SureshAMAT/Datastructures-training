
#include<iostream>
using namespace std;
void leftRotatebyOne(int arr[], int n)
{
	int temp = arr[0], i;
	for (i = 0; i < n - 1; i++)
		arr[i] = arr[i + 1];

	arr[n - 1] = temp;
}

void leftRotate(int arr[], int d, int n)
{
	for (int i = 0; i < d; i++)
		leftRotatebyOne(arr, n);
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

int main()
{
	int d;
	cout << "enter no.of rotations";
	cin >> d;
	int arr[7];
	cout << "enter array elements";
	for (int i = 0; i < 7; i++) {
		cin>>arr[i];
	}
	int n = sizeof(arr);
	leftRotate(arr, d, n);
	printArray(arr, n);
	return 0;
}
