#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
	//array
	int n;
	cout<<"Enter size --> ";
	cin>>n;
	int arr[n];
	cout<<"Enter values in array\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	//wave sort
	for(int i=0;i<n-1;i++)
	{
		if(i!=0)
		{
			if(arr[i]<arr[i-1])
			{
				swap(arr[i],arr[i-1]);
			}
		}
		if(arr[i]<arr[i+1])
		{
			swap(arr[i],arr[i+1]);
		}
		
		i++;
	}



	//display
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"--";
	}
	return 0;
}
