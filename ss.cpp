#include<iostream>
using namespace std;
int main(){
	int temp;
	int s=0,e=7,m,val;
	int arr[]={3,5,7,9,13,15,17,19,21,23};
//	int arr[]={9,7,5,3,13};
//	cout<<" Berfore sorting array values ";
//	for(int i=0;i<5;i++){
//		cout<<" "<<arr[i];
//		
//	}
//	
//	for(int i=0;i<5;i++){
//		for(int j=0;j<5;j++){
//			if(arr[i]<arr[j]){
//				temp=arr[i];
//				arr[i]=arr[j];
//				arr[j]=temp;
//				
//			}
//		}
//	}
//	cout<<endl<<" values off array after sorting ";
//	for(int i=0;i<5;i++){
//		cout<<" "<<arr[i];
//	}
	// binary search
	//cout<<endl;
	m=(s+e)/2;
	//cout<<m;
	cout<<endl<<"Enter value for search "<<endl;
	cin>>val;
	//cout<<arr[m];
	if(val==arr[m]){
		cout<<"value find at index number"<<m<<endl;
		cout<<"value is"<<arr[m];
			}
	else if(val>arr[m]){
	
		while(s<=e){
				s=m+1;
			m=(s+e)/2;
			if(val==arr[m]){
				cout<<"value is find at index "<<m<<" "<<endl;
				cout<<"value is "<<arr[m];
				break;
			}
			
		}
	}
	else if (val<arr[m]){
	
		while(s<=e){
				e=m-1;
			m=(s+e)/2;
			if(val==arr[m]){
				cout<<"value is find at index "<<m<<" "<<endl;
				cout<<"value is "<<arr[m];
				break;
			}
			
		}
	}
	
	
}
