#include <iostream>
#include<string>
using namespace std;
int main()
{
	cout<<"Enter Your name: "<<endl;
	string name1;
	cin>>name1;
	string name2;
	cin>>name2;
	string name=name1 + name2;
	cout <<name1 + name2<<", Thank You!"<<endl;
	int age;
	cout<<"Enter Your age: "<<endl;
	cin>>age;
	cout<<"Hello! "<<name<<" Nice to meet You!"<<endl;
	cout<<"You are "<<age<<" years old."<<endl;
    cout<<"Your name has "<<name.length()<<" number of letters.\n";
    cout<<"Your name in reverse order is: ";
	cout << name[5];
	cout << name[4];
	cout << name[3];
	cout << name[2];
	cout << name[1];
	cout << name[0]<<endl;
	if(age>80){cout<<"You aren't allowed to drive."<<endl;}
	else if(age>=18){cout<<"You can drive."<<endl;}
	else{cout<<"You can't drive."<<endl;}
	switch(age)
	{
		case (16):
			cout<<"You are not allowed to drink.\n";
			break;
		case (17):
			cout<<"You are not capable for drinking.\n";
			break;
		case (18):
			cout<<"Not not enough age to drink.\n";
			break;	
		case (19):
			cout<<"Not enough age.\n";
			break;
		case (20):
			cout<<"You can drink low alcohol concenteration drinks.\n";
			break;
		case (21):
			cout<<"You are allowed to drink.\n";
			break;			
	default:
		cout<<"Invalid age!\n";
		break;
}
       while(age<=25) 
	{
		cout<<"Next year your age will be:"<<age<<endl;
		age = age+1;			
}

	return 0;
}
