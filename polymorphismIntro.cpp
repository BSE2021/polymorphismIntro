#include <iostream>
using namespace std;

class Student {
protected:
	
	string name;
public:
	static int id;
	Student(string n="") {
		name = n;		
	}

public:
	void getIdName() {
		
		cout << "\n\nEnter the name : ";
		cin >> name;
	}

	void getMarks(float sem1,float sem2) {
		cout << "\nThe id is : " << id++;
		cout << "\nThe name is :" << name;
		cout << "\nSemester1 mark : " << sem1;
		
		cout << "\nSemester2 mark : " << sem2;
		
	}
};

class SoftEng : public Student {
private:
	float lab1, lab2, lab3, lab4;


public:
	SoftEng(float la1=0, float la2=0, float la3=0, float la4=0){
		lab1 = la1;
		lab2 = la2;
		lab3 = la3;
		lab4 = la4;
	}


	void getMarks(float l1, float l2, float l3, float l4) {
		cout << "\nEnter Lab1 mark: ";
		cin >> l1;
		lab1 = l1;

		cout << "\nEnter Lab2 mark: ";
		cin >> l2;
		lab2 = l2;

		cout << "\nEnter Lab3 mark: ";
		cin >> l3;
		lab3 = l3;

		cout << "\nEnter Lab4 mark: ";
		cin >> l4;
		lab4 = l4;
	}

	void displayMarks() {
		cout << "\nThe id is : " << id++;
		cout << "\nThe name is : " << name;
		cout << "\nThe marks for lab1, lab2, lab3 and lab4 repectively : " << lab1 << " "<< lab2 << " " << lab3 << " "<< lab4;
	}

};

class WebUx : public Student {
private:
	float module1, module2, module3;

public:
	WebUx(float m1=0, float m2=0, float m3=0) {
		module1 = m1;
		module2 = m2;
		module3 = m3;
	}
	void getMarks(float m1, float m2, float m3) {
		cout << "\nEnter module1 mark: ";
		cin >> m1;
		cout << "\nEnter module2 mark: ";
		cin >> m2;
		cout << "\nEnter module3 mark: ";
		cin >> m3;
		
	}
};

int Student :: id = 101;

int main() {
	Student s;
	SoftEng se;
	WebUx wux;

	//parent Student
	s.getIdName();
	s.getMarks(45,60);
	s.getIdName();
	s.getMarks(80, 90);

	//child SoftwareEngineering
	se.getIdName();
	se.getMarks(50, 70, 45, 67);
	se.displayMarks();

	//child Web Ux
	se.getIdName();
	se.getMarks(68,75,96,77);
	se.displayMarks();
	
	cout << "\n\n\n";


}














////base class or super class or parent class
//class Employee {
//protected:
//	int x;
//public:
//
//	void amount() {
//		cout << "\nThe amount is : ";
//	}
//
//	/*void amount(int x, int y) {
//		cout << "\nThe calculated value is = " << x * y;
//	}*/
//	void amount(float x, float y){
//		cout <<"\nThe calculated value is = " << x * y;
//		}
//
//	void amount(string name, float p, float q) {
//		cout << "\nThe name is : " << name;
//		cout << "\nThe amount is : " << p * q;
//	}
//
//};
//
////derived class or sub class or child class
//class Wages : public Employee {
//private:
//	float hrs = 30;
//	float rate =20;
//	float amt=0;
//
//
//public:
//	//void amount() {
//	//	cout << "\n" << x; //x is accessed from the parent class
//	//	amt = hrs * rate;
//	//	cout << "\nThe amount is : " << amt;
//	//}
//
//};
//
////derived class or sub class or child class
//
//class Salary : public Employee {
//
//private:
//	float gross = 2000;
//	float tax = 400;
//	float net=0;
//
//public:
//	void amount() {
//		net = gross - tax;
//		cout << "\nThe amount is : " << net;
//	}
//
//
//};
//
//
//int main() {
//	Employee e;//e is an object declared as Employee class
//	Wages w; //w is an instance of object of Wages class
//	Salary s; //s is an instance of object of Salary class
//
//	e.amount();
//	w.amount();//Try calling this with the amount method inside Wages class 
//	w.amount(); //calls the amount method without parameters from parent class even when its own function is commented out
//	w.amount(50, 40); //calls the amount method from parent class with two parameters
//	//s.amount();
//	//e.amount(40, 40);//calling amount method with 2 parameters from Employee class 
//	//e.amount("David",37.5, 19.5);
//	//e.amount(37.5, 19.5);
//
//}