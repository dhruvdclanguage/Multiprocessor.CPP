#include<iostream>

using namespace std;

class Distance{
	
	private :
		
		int feet; 
		int inches;
	
	public :
		
		void setter(int a , int b){
			
			feet = a;
			inches = b;
		}
		
		void getter(){
			
			cout<<"Feet : "<<feet<<"\t\t"<<"Inches : "<<inches<<endl;
		}
		
		Distance operator + (Distance n1){
			
			Distance temp;
			
			temp.inches = inches + n1.inches;
			temp.feet = feet + n1.feet + (temp.inches / 12);
			temp.inches = temp.inches %12;
					
			   return temp;
		}
};

int main(){
	
	Distance obj1,obj2,obj3;
	
	obj1.setter(22,10);
	obj1.getter();
	
	obj2.setter(23,11);
	obj2.getter();
	
	obj3 = obj1+obj2;
	obj3.getter();
		
	return 0;
}
