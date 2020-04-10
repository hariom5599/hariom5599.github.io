/*
CONSTRUCTORS:-
these r the special member function of the class which :-
1)has same name as a class name
2)used to initialise the data member of the class.

Properties:-
1)Same name as class name.
2)Does not have return type , but may have arguments.
3)Should be declared in public section.
4)It is called automatically by the compiler at the time of object declaration.
5)If there is no CONSTRUCTOR for the Class , compiler provides default CONSTRUCTOR.
6)There can many CONSTRUCTOR in the class.

Type:-
1)default(Non-Parameterized) CONSTRUCTOR.
2)Parameterized CONSTRUCTOR.
3)Copy CONSTRUCTOR.
4)Dynamic CONSTRUCTOR.
5)CONSTRUCTORwith default arguments.
*/
#include <iostream>
using namespace std;

class stud{
	int roll,marks;
	public:
	stud(){
		roll=0;
		marks=0;
	}
	/*stud(int x){
		roll=x;
		marks=0;
	}*/
	stud(int x,int m=100){
		roll=x;
		marks=m;
	}
	stud(stud &x){
		roll=x.roll+10;
		marks=x.marks+20;
	}
	void putData(){
		cout<<"Roll:"<<roll<<endl<<"Marks:"<<marks<<endl;
	}
};

int main() {
	stud s1,s2(3),s3(4,95),s4(s2);
	s1.putData();
	s2.putData();
	s3.putData();
	s4.putData();
  return 0;
}