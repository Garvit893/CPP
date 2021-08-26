//Insert the missing parts to complete the following "short hand if...else statement" (ternary operator):
#include <iostream>
using namespace std;
int main()
{
	int time;
	cin>>time;
    string result = (time < 18)?"Good day.":"Good evening.";
    cout << result;
    return 0;
} 
