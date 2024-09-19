#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    int roll;
    string name;

    virtual void getdata() = 0;
    virtual void displaydata() = 0;
};

class Test : virtual public Student {
public:
    int math;
    int eng;

    void getdata()  {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter the roll number: ";
        cin >> roll;
    }

    void displaydata()  {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
    }

    void getmarks() {
        cout << "Enter the marks in math and English: ";
        cin >> math >> eng;
    }
    void showmarks(){
    	cout<<"math:"<<math<<endl<<"english:"<<eng<<endl;
	}
};

class Sports : virtual public Student {
public:
    int shortput;
    int longjump;

    void getscore() {
        cout << "Enter the score in shortput: ";
        cin >> shortput;
        cout << "Enter the score in long jump: ";
        cin >> longjump;
    }
};

class Result : public Test, public Sports {
    int totalmarks;

public:
    void showtotal() {
        totalmarks = math + eng;
        cout << "Total Marks in Test: " << totalmarks << endl;
        cout << "Score in Shortput: " << shortput << endl;
        cout << "Score in Long Jump: " << longjump << endl;
    }
};

int main() {
    Result r;
    r.getdata();         // Get name and roll number from the student
    r.getmarks();    
   // Get marks from the test
    r.getscore();        // Get sports scores

    cout << "\nStudent Details:" << endl;
    r.displaydata();
	  	r.showmarks();    // Display student details
    r.showtotal();       // Display total marks and sports scores

    return 0;
}

