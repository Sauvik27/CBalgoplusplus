//staircase search for 2d array whose elements are sorted in row and column

#include "iostream"
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
	 int arr[4][4];
	 for(int i=0;i<4;i++)
	 {
	 	for(int j=0;j<4;j++)
	 	{
	 		cin>>arr[i][j];
	 	}
	 	cout<<endl;
	 }
	 int value = 5;
	 int found = 0;
	 int j=4,i=0;
	 while(found!=value)
	 {
	 	if(arr[i][j] == value)
	 	{
	 		found = value;
	 		cout<<"found the element";
	 	}
	 	else if(arr[i][j]>value)
	 	{
	 		j--;
	 	}
	 	else
	 	{
	 		i++;
	 	}
	 	if(i==4 && j==0)
	 	{
	 		cout<<"not found";
	 	}
	 }
}
