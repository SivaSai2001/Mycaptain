#include<iostream>
using namespace std;

bool isPrime(int x){
	for(int i=2;i<=x/2;i++){
		if(x%i==0)
			return false;
	}
	return (true);
}


int main(){
	int a,b;
	cout<<"Enter a positive number:";
	cin>>a;
	for(int i=2;i<=a/2;i++){
		if(isPrime(i) && isPrime(a-i)){
			cout<<a<<" = "<<i<<" + "<<a-i<<endl;
		}
	}
}

