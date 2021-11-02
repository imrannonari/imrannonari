#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int b=6, c=5;
	if(b++==4 || ++c==4){
	//	b*=c;
		cout<<"the value of in b"<<++b<<" "<<c<<endl;
	}
	else{
		cout<<c<<endl;
		cout<<"use b  "<<b;
	}
	
	return 0;
	getch();

}
