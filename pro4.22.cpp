#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n,a,b;
	cout<<" Enter the Three number for revers"<<endl;
	cin>>n;
	a=n/100;
	n=n%100;
	b=n/10;
	n=n%10;
	cout<<" The Revers Values is "<<n<<b<<a<<endl;
	return 0;
}
