#include <iostream>
using namespace std;

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

int main(){
	student obj1;
	obj1.read_data();
	obj1.display_grade();

}
