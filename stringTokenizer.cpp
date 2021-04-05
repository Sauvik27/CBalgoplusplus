#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

//using inbuilt strtok (string tokenizer function)
int main()
{
	char str[] = "Hi i am studying c++";

	char *ptr;
	//inbuilt function
	ptr = strtok(str," ");
	cout<<ptr<<endl;
	while(ptr!=NULL)
	{
		cout<<ptr<<endl;
		ptr = strtok(NULL," ");
	}
}
