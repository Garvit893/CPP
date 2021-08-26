#include <iostream>
using namespace std;
int main()
{
	int age[6];
	for (int i=1; i<6; i++)
	{
	  cout<<"Enter the marks of "<<i<<"th age."<<endl;
	  cin>>age[i];
	}	
	for(int i=1; i<6; i++)
	{
	  cout<<"Ages of "<<i<<"th the student is "<<age[i]<<"."<<endl;
	}	
    return 0;
}
