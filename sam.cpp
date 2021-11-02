
#include <iostream> 
#include <cstring> 
#include <string> 
 
using namespace std; 
 
 
// person class Base class
 class Person 
{ 
 	private : 
 	 	string name;  	 	int age; 
 	 	string gender;  	 	string address;  	 	string phone; 
 	public : 
 	 	// Default constructor of Person class 
 	 	Person() 
 	 	 	{ 
 	 	 	 	 
 	 	 	} 	 
 	 	// setter functions for data members of person class 
 	 	void set_name(string n) 
 	 	{ 
 	 	 	name=n; 
 	 	} 
void set_age(int a) 
{ 
 	 	 	age=a; 
 	 	} 
 	 	void set_gender(string g) 
 	 	{ 
 	 	 	gender=g; 
 	 	} 
 	 	void set_address(string ad) 
 	 	{ 
 	 	 	address=ad; 
 	 	} 
 	 	void set_phone(string p) 
 	 	{ 
 	 	 	phone=p; 
 	 	} 
 	 	// getter functions for data members of person class 
 	 	string get_name() 
 	 	{ 
 	 	 	return name; 
 	 	} 
 	 	int get_age() 
 	 	{ 
 	 	 	return age; 
 	 	} 
 	 	string get_gender() 
 	 	{ 
 	 	 	return gender; 
} 
string get_address() 
{
return address; 
}
string get_phone() 
 	 	{ 
 	 	 	return phone; 
 	 	} 
 	 	 
 	 	 
 	 	// save info function for person class 
 	 	 
 	 	virtual void save_info() 
 	 	{ 
 	 	 	cin.ignore(); 
 	 	 	cout << "Enter Name : ";  	 	 	getline(std::cin, name);  	 	 	cout << "Enter Gender : "; 
 	 	 	cin >> gender; 
 	 	 	cout << "Enter Age : "; 
 	 	 	cin >> age;  	 	 	cin.ignore(); 
 	 	 	cout << "Enter Address : ";  	 	 	getline(cin, address);  	 	 	cout << "Enter Phone No : "; 
 	 	 	cin >> phone; 
 	 	}  
 	 	virtual void display_info() 
 	 	{ 
 	 	 	cout << " Name : "<<name; 
	 	cout << " \nGender : "<<gender; 
	 	cout << " \nAge : "<<age; 
cout << " \nAddress : "<<address; 
cout << " Phone No : "<<phone; 
}
}; 
// Patient class
 class Patient : public Person 
{ 
 	// data members of patient class 
 	private : 
 	 	string sickness;  	 	string prescription;  	public : 
 	 	// default constructor of patient class 
 	 	Patient () 
 	 	{ 
 	 	 	 
 	 	} 
 	 	// override save info method 
 	 	void save_info() 
 	 	{ 
 	 	 	cout << "\nEnter the following data for patient\n\n"; 
 	 	 	Person::save_info();  	 	 	cout << "Enter Sickness : "; 
 	 	 	cin >> sickness; 
 	 	 	cout << "Enter Prescription : "; 
 	 	 	cin >> prescription; 
 	 	} 
 	 	// override display info method 
 	 	void display_info() 
{ 
	 	cout << "\nDisplaying Patient's Information:"; 
cout << "\n--------------------------------"; 
cout << "\nPatient's Name : "<<get_name(); 
cout << "\nPatient's Gender : "<<get_gender();  	cout << "\nPatient's Age : "<<get_age(); 
 	 	 	cout << "\nPatient's Address : "<<get_address();  	 	 	cout << "\nPatient's Phone No : "<<get_phone();  	 	 	cout << "\nPatient's Sickness : "<<sickness;  	 	 	cout << "\nPatient's Prescription : "<<prescription; 	 
 	 	} 
}; 
 
// Staff class 
 
class Staff : public Person 
{ 
 	private : 
 	 	string education;  	 	long salary; 
 	public :  
 	 	staff () 
 	 	{ 
 	 	 	 
 	 	} 
 	 	void save_info() 
 	 	{ 
 	 	 	cout << "\nEnter the following data for Staff\n\n"; 
 	 	 	Person::save_info(); 
 	 	 	cout <<"Enter Education : "; 
 	 	 	cin >> education; 
 	cout <<"Enter Salary : ";  	cin >> salary; 
}
void display_info() 
{ 
	 	cout << "\nDisplaying Staff's Information:"; 
 	 	 	cout << "\n--------------------------------";  	 	 	cout << "\nStaff's Name : "<<get_name();  	 	 	cout << "\nStaff's Gender : "<<get_gender();  	 	 	cout << "\nStaff's Age : "<<get_age();  	 	 	cout << "\nStaff's Address : "<<get_address();  	 	 	cout << "\nStaff's Phone No : "<<get_phone();  	 	 	cout << "\nStaff's Education : "<<education;  	 	 	cout << "\nStaff's Salary : "<<salary; 	 
 	 	} 
}; 
void showinfo() 
 	{ 
 	} 
main() 
{ 
 	showinfo(); 
 	int number=0, i=0; 
 	char type='\0', option='\0';  	cout << "How many Person's information you want to enter?"; 
 	cin >> number;  	Person * persons[number]; 
 	do  	{ 
 	 	again: 
 	 	 	cout << "\nEnter Choice: P for patient, S for staff : "; 
	 	cin >> type; 
	 	if (type == 'p' || type =='P') 
{ 
 	 	persons[i]= new Patient();  	 	persons[i]-> save_info(); 
	 	 	i++; 
 	 	 	} 
 	 	 	else if (type == 's' || type =='S') 
 	 	 	{ 
 	 	 	 	persons[i]= new Staff();  	 	 	 	persons[i]-> save_info(); 
 	 	 	 	i++;  	 	 	} 
 	 	 	else 
 	 	 	{ 
 	 	 	 	cout << "\n Sorry Invalid Choice, Try Again\n"; 
 	 	 	 	goto again; 
 	 	 	} 
 	 	 	cout << "Do you want to enter more data (Y for Yes N for No) : "; 
 	 	 	cin >> option; 
 	} 
 	while ((option == 'Y'  || option == 'y') && i<number);  	for (int j = 0; j<i; j++) 
 	{ 
 	 	cout << "\n"; 
  persons[j]-> display_info();   cout << "\n-------------------------"; 
 	}  
 	cout << "\n";  	showinfo();  	cout <<"\n\n"; 
 
}

