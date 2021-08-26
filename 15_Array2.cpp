#include <iostream>
using namespace std;
int main()
{
	int age[6];
	for(int i=1; i<6; i++)
	{
		cout<<"Enter the age of no. "<<i<<"th student"<<endl;
		cin>>age[i];
	}
    return 0;
}
