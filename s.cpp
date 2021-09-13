/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){

   cout<<"1"<<"\t"<<"2"<<"\t"<<"3"<<"\t"<<"4"<<"\t5"<<"\n"<<"6"<<"\t"<<"7"<<"\t"<<"8"<<"\t"<<"9"<<"\t"<<"10"; //output using 1 " cout "*
      int n, r, r1;
   cout<<"Enter any 3-digit Number: ";
   cin>>n;
   r = n % 10;
   n = n / 10;
   r1 = n % 10;
   n = n / 10;
   cout<<endl<<n<<endl<<r1<<endl<<r;

   getch();
   

}*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    cout<<"Next two characters : ";
    ch++;
    cout<<ch<<"\t";
    ch++;
    cout<<ch<<"\t";
    getch();
}
