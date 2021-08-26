#include <iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your age"<<endl;
	cin>>age;
	if(age>90)
	{
		cout<<"You aren't allowed to drive."<<endl;
	}
	else if(age>=18)
	{
		cout<<"You can drive."<<endl;
	}
	else
	{
		cout<<"You can't drive."<<endl;
	}
	return 0;
}

