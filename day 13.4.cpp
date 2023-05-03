#include<iostream>

using namespace std;

class A{
	
	private :
		
		int id;
		int age;
	
	public :
	
	    void set1(int i){
	    	
	    	id = i;	    	
		}
		
		void set2(int a){	    	
	    	
	    	age = a;
		}	
			
		
		void get1(){
			
			cout<<"Id : "<<id<<endl;
			
		}
		
			void get2(){
			
			cout<<"Age : "<<age<<endl;
			
		}
		
		A operator ++ (){
			
			A temp1;
			
			temp1.id = ++id;
		 
			return temp1;
		}
		
			A operator -- (){
			
			A temp2;
			
			temp2.age = --age;
			
			return temp2;
		}	
};
int main(){
	
	A obj1,obj2,obj3,obj4;
	
   obj1.set1(2);
   
   obj2 = ++obj1;
   obj2.get1();
   
   obj3.set2(20);
   
   obj4 = --obj3;
   obj4.get2();
   
	return 0;
}
