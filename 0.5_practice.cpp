//Determining name length
#include <iostream>
using namespace std;
int main()
{
	string firstname,lastname;
	cout<<"Enter Your name:\n";
	cin>>firstname;
	cin>>lastname;
	string name=firstname+lastname;
	cout<<"Your name has "<<name.length()<<" number of letters.\n";
	return 0;
}

