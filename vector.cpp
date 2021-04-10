#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
	vector<int> v;
	v.reserve(100);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		v.push_back(temp);
	}
	sort(v.begin(),v.end());
	v.clear();
	cout<<v.size()<<"\n";
	cout<<v.capacity()<<"\n";
	cout<<v.max_size();
	return 0;
}
