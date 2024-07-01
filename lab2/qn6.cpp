/*Create a class named Student with data member id and marks. Create a default constructor to
initialize value for id and marks, create a parameterized constructor to initialize the objects,
create copy constructor to copy the content of one object to another and create function to
display student information.*/
#include<iostream>
using namespace std;
class Student{
	int id;
	int marks;
	 public:
	 	//default constructor
	 	Student(){
	 		id=0;
	 		marks=0;
		 }
		 //parameterized constructor
		 Student(int i, int m){
		 	id=i;
		 	marks=m;
		 }
		 void display(){
		 	cout<<"id:"<<id<<endl;
		 	cout<<"marks:"<<marks<<endl;
		 }
};
int main(){
	Student s1(80117729,100);
	
		s1.display();
		//using copy constructor
		 Student s2(s1);
		s2.display();
	
}
