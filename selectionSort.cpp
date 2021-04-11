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
	//selection sort
	int min = arr[0];
	int k =0;
	int l=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(min>arr[j])
			{
				min = arr[j];
				k = j;
				l = 1;
			}
		}
		if(l == 1)
			swap(arr[i], arr[k]);
		min = arr[i+1];
		l = 0;
	}

	//display
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"--";
	}
	return 0;
}
