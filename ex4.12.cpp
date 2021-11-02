#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n,a,b;
	cout<<" Enter the Three number "<<endl;
	cin>>n;
	a=n/100;
	n=n%100;
	b=n/10;
	n=n%10;
	cout<<a<<endl<<b<<endl<<n<<endl;
	
	
	return 0;
}
