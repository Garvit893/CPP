#include <iostream>
using namespace std;
int main()
{
	int ram;
	cout<<"Enter your ram : "<<endl;
	cin>>ram;
	switch(ram)
	{
		case (16):
			cout<<"You have 16 gb of ram.";
			break;
		case (32):
			cout<<"You have 32 gb of ram.";
			break;
			
	default:
		cout<<"You have no sufficient ram.";
		break;
}
	return 0;
}

