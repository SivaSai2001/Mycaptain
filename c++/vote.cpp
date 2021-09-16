#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter Your Age: ";
	cin>>age;
	if(age>=18)
		cout<<"You are eligible to vote !!.";
	else
		cout<<"Don/'t worry . Just wait for "<<18-age<<" years more to vote.";
}
