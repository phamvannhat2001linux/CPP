#include <iostream>
#include <string>
using namespace std;

class vehicle{
	private:
		int speed;
		string color;
	protected:
		int  kmh_to_ms();
	public:
		vehicle(int sp, string cl) : speed(sp), color(cl){};
		void display();
};

int vehicle::kmh_to_ms(){
	speed = speed * 10 ;
	return speed;
}

void vehicle::display(){
	cout << "Speed : "<< speed <<" Color : " << color << endl;
	cout << "Tranfer: " << kmh_to_ms() << endl;
} 

class car : public vehicle{
	private:
		string brand;
	public:
		car(string br, int sp, string cl): brand(br), vehicle(sp,cl){};
		void display();
};

void car::display(){
	cout << "Brand : " << brand << endl;
	vehicle::display();

}

int main(){
	car obj("ToyoTa",180,"Red");
	obj.display();
}
