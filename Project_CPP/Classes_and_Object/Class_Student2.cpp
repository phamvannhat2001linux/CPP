// Using Friend function
// Friend function can be access all member function in class

#include <iostream>
using namespace std;
class student; // declaring first

class person {
	private:
		char name[20];
		int age;
		float height;

	public:
		void read_data();
		void display_data();
		friend void select(person pob, student sob);
};

class student {
	private:
  		char name[20];
  		int roll;
  		int marks;
  		char grade;
  		void compute_grade();
 	public:
  		void read_data();
  		void display_grade();
		friend void select(person pob, student sob);
 };

void student::compute_grade(){
	if ( marks >= 80 ){
		grade = 'A';}

	else if ( marks >= 70 ){
		grade = 'B';}
	
	else if ( marks >= 60 ){
		grade = 'C';}
	else {
		grade = 'D';}
}

void student::read_data(){
	cout <<"\nEnter Name :";
	cin >> name;

	cout <<"\nEnter Roll :";
	cin >> roll;

	cout <<"\nEnter Marks :";
	cin >> marks;
	
	compute_grade();
}

void student::display_grade(){
	cout <<"\nName : " << name ;
	cout <<"\nRoll : " << roll ;
	cout <<"\nGrade : " << grade <<endl;
}

void person::read_data(){
	cout <<"\nEnter name of the Person: ";
	cin >> name;

	cout <<"\nEnter age of the Person: ";
	cin >> age;

	cout <<"\nEnter height of the Person: ";
	cin >> height;
}

void person::display_data(){
	cout <<"\nName of the Person: " << name;
	cout <<"\nAge of the Person: " << age;
	cout <<"\nHeight of the Person: " << height;
}

void select(person pob, student sob){
	if( pob.height >=170 && sob.marks >=80 ){
		cout <<"\nYou are selected, become Chairman" << endl;}
	else{
		cout <<"\nThank you so much, Don't give up!" << endl;}
}

int main(){
	student sob;
	person pob;
	sob.read_data();
	pob.read_data();

	select(pob , sob);
	
}

