#include "iostream"
#include <algorithm>
#include <cstring>
using namespace std;

//rotate a [3][3] matrix 90 degree
void transpose(int arr[][3])
{
	int i=0;
		for(int j=0;j<3;j++)
		{
			if(i!=j)
			{
				swap(arr[i][j],arr[j][i]);
			}
		}
		swap(arr[1][2],arr[2][1]);
}
void rowmirror(int arr[][3])
{
	for(int i=0;i<3;i++)
	{
		int j=0;
		swap(arr[i][j],arr[i][j+2]);
	}
}

int main()
{
	int arr[3][3];
	cout<<"enter values\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	transpose(arr);
	rowmirror(arr);
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr[i][j];
		}
		cout<<"\n";
	}
	return 0;
}
