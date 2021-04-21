//every number in 3 times in an array except one number, find that one(unique) number using bits
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;

void bitAdditionOfAllElements(int arr[], int n)
{
	int element = 0;
	int a[4] = {0,0,0,0};
	for(int i=0;i<n;i++)
	{
		element = arr[i];
		int j=3;
		while(element>0)    
		{    
			a[j]=a[j] + element%2;
			element= element/2; 
			j--;
		}
	}
	for(int i = 0;i<4;i++)
	{
		a[i] = a[i]%3;
	}
	int decimal = 0;
	int k = 3;
	for(int i = 0;i<4;i++)
	{
		decimal = decimal + a[i]*pow(2,k);
		k--;
	}
	cout<<"non repeated value is --> " <<decimal;
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
	bitAdditionOfAllElements(arr, n);
}
