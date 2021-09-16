#include<iostream>
using namespace std;
int main(){
	int x[3][2]={{1,2},{3,4},{5,6}};
	cout<<x;
	int your,others;
	cout<<"Enter your age:";
	cin>>your;
	cout<<"Enter other's age:";
	cin>>others;
	if(your>others){
		cout<<"You are older";
	}
	else{
		cout<<"You are younger";
	}
}
