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
	
	int hole = 0;
	int value = 0;
	for(int i=1;i<n;i++)
	{
		value = arr[i];
		hole = i;
		while(hole>0 && arr[hole-1]>value)
		{
			arr[hole] = arr[hole-1];
			hole = hole - 1;
		}
		arr[hole] = value;
	}
	//display
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"--";
	}
	return 0;
}
