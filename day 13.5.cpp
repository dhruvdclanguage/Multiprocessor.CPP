#include<iostream>

using namespace std;

class A{
	
	private :
		
		int year;
		int id;
	
	public :
		
		void setter(int a , int b){
			
			year = a;
			id = b;
		}
		
		void getter(){
			
			cout<<"Year : "<<year<<"\t\t"<<"Id : "<<id<<endl;
		}
		
		A operator + (A n1){
			
			A temp;
			
			temp.year = year + n1.year;
			temp.id = id + n1.id;
			
			return temp;
		}
};

int main(){
	
	A obj1,obj2,obj3;
	
	obj1.setter(100,200);
	obj1.getter();
	
	obj2.setter(300,400);
	obj2.getter();
	
	obj3 = obj1+obj2;
	obj3.getter();
		
	return 0;
}
