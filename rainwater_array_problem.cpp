#include "iostream"
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	//left most max value
	int left[n];
	int base = 0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>base)
		{
			left[i] = arr[i];
			base = arr[i];
		}
		else
		{
			left[i] = base;
		}
	}
	//right most max value
	base = 0;
	int right[n];
	for(int i=n-1;i>=0;i--)
	{
		if(arr[i] > base)
		{
			right[i] = arr[i];
			base = arr[i];
		}
		else
		{
			right[i] = base;
		}
	}
	int water[n];
	for(int i=0;i<n;i++)
	{
		water[i] = min(left[i],right[i]) - arr[i];
	}
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		sum = sum + water[i];
	}
	cout<<sum;
	return 0;
}
