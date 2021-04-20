#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

void displayArray(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"--";
	}
	cout<<"\n";
}

void rotate(int arr[], int n, int k)
{
	int tempElement = 0;
	while(k>0)
	{
		tempElement = arr[0];
		for(int i = 1;i<n;i++)
		{
			arr[i-1] = arr[i];
		}
		arr[n-1] = tempElement;
		k--;
	}
}

void rotatedBinarySearchLeftSide(int arr[], int element, int low, int high)
{
	if(low == high)
	{
		if(element == arr[low])
		{
			cout<<"element found";
			return;
		}
		else
		{
			cout<<"element not found";
			return;
		}
	}
	else
	{
		int mid = (high+low)/2;
		if(arr[mid] == element)
		{
			cout<<"element found";
			return;
		}
		if(arr[mid] > element)
		{
			rotatedBinarySearchLeftSide(arr,element,low,mid-1);
		}
		else
		{
			rotatedBinarySearchLeftSide(arr,element,mid+1,high);
		}
	}
}

void rotatedBinarySearchRightSide(int arr[], int element, int low, int high)
{
	if(low == high)
	{
		if(element == arr[low])
		{
			cout<<"element found";
			return;
		}
		else
		{
			cout<<"element not found";
			return;
		}
	}
	else
	{
		int mid = (high+low)/2;
		if(arr[mid] == element)
		{
			cout<<"element found";
			return;
		}
		if(arr[mid] > element)
		{
			rotatedBinarySearchRightSide(arr,element,low,mid-1);
		}
		else
		{
			rotatedBinarySearchRightSide(arr,element,mid+1,high);
		}
	}
}

int main()
{

	int n;
	cout<<"Enter size --> ";
	cin>>n;
	int arr[n];
	cout<<"Enter values in array\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr, arr+n);
	int k=0;
	cout<<"Enter how many times you want to rotate --> ";
	cin>>k;
	if(k<0 || k>n-1)
	{
		cout<<"index out of bound\n";
		cout<<"Enter again -->";
		cin>>k;
	}
	rotate(arr,n,k);
	displayArray(arr,n);
	int element;
	cout<<"Enter value to search --> ";
	cin>>element;
	if(element>arr[n-1])
		rotatedBinarySearchLeftSide(arr,element,0,n-k);
	else
		rotatedBinarySearchRightSide(arr, element,n-k,n);
	return 0;
}
