#include<iostream>
using namespace std;
int main(){
	int ary[2][2];
	for(int i=0; i<2;i++){
		for(int j=0;j<2;j++){
			cout<<"Enter the values of index["<<i+1<<"]"<<"["<<j<<"]";
			cin>>ary[i][j];
		}
		
	}
	for(int i=0; i<2;i++){
		for(int j=0;j<2;j++){
			cout<<" "<<ary[i][j];
		}
		cout<<endl;
	}
	
}
