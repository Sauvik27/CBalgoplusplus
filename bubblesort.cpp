#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

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
	for(int k=0;k<n;k++)
	{
		for(int i=0;i<n-1;i++)
		{
			if(arr[i]>arr[i+1])
				swap(arr[i],arr[i+1]);
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"--";
	}
	return 0;
}
