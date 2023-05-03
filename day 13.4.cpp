#include<iostream>

using namespace std;

class A{
	
	private :
		
		int id;
		int age;
	
	public :
	
	    void set(int i , int a){
	    	
	    	id = i;
	    	age = a;
		}	
		
		void get(){
			
			cout<<"Id : "<<id<<endl;
			cout<<"Age : "<<age<<endl;
		}
		
		A operator ++ (int){
			
			A temp1;
			
			temp1.id = id++;
		 
			return temp1;
		}
		
			A operator -- (int){
			
			A temp2;
			
			temp2.age = age--;
			
			return temp2;
		}	
};
int main(){
	
	A obj1,obj2,obj3,obj4;
	
   obj1.operator ++(1);
   obj1.set(1);
   obj1.get();
   
   obj2 = obj1++;
   obj2.get();
   
   obj3.operator --(10);
   obj3.set(10);
   obj3.get();
   
   obj4 = obj3--;
   obj4.get();
   
	return 0;
}
