#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

void binary_search(int arr[], int element, int low, int high)
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
			binary_search(arr,element,low,mid-1);
		}
		else
		{
			binary_search(arr,element,mid+1,high);
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
	int element;
	cout<<"Enter value to search --> ";
	cin>>element;
	int low = 0;
	int high = n;
	binary_search(arr, element, low , high);
	return 0;
}
