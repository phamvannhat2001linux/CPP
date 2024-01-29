#include <iostream>
using namespace std;

class student {
	protected:
  		char name[20];
  		int roll;
  		int marks;
  		char grade;
  		virtual void compute_grade();
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

class change_student : public student {
	protected:
		void compute_grade();
};

void change_student::compute_grade(){
        if ( marks >= 80 ){
                grade = 'A';}

        else if ( marks >= 70 ){
                grade = 'B';}

        else if ( marks >= 60 ){
                grade = 'C';}
        else {
                grade = 'E';}
}


int main(){
	student *ptr;
	change_student dob;
	ptr = & dob;
	ptr->read_data();
	ptr->display_grade();

}
