//Vehicle Inheritance:
//Problem Statement: Develop a class hierarchy for vehicles. Start with a base class 
//Vehicle and create derived classes like Car, Motorcycle, and Truck. Each derived class should have
// unique properties like the number of wheels and specific methods like start_engine().

#include<iostream>
#include<string.h>
using namespace std;
 class Vehicle 
 {
 	protected:
 		string name;
 		int wheels;
 		
 		public:
 		Vehicle()
 		{
 		name="abc";
		wheels=10;	
		}
	
		Vehicle(string name,int wheels)
		{
			this->name=name;
			this->wheels=wheels;
		}
	virtual	void display()
		{
			cout<<"Name:"<<name<<" Wheels:"<<wheels<<endl;
		}
		
	virtual	void speed()
		{
			cout<<"Speed of the vehicle"<<endl;
		}
	};
	class Car: public Vehicle
	{
		private:
			string colour;
			
			public:
		Car()
 		{
 		colour="white";	
		}
	
		Car(string name,int wheels, string colour):Vehicle(name,wheels)
		{
			this->colour=colour;
		}
		void display()
		{   
		    Vehicle::display();
			cout<<"Colour of car is: "<<colour<<endl;
		}
		
		void speed()
		{
			cout<<"Speed of the car is: 100km/hr"<<endl;
		}
				
	};
	
class Truck: public Vehicle
	{
		private:
			string size;
			
			public:
		Truck()
 		{
 		size="xguy";	
		}
	
		Truck(string name,int wheels, string si):Vehicle(name,wheels)
		{
			this->size=si;
		}
		void display()
		{   
		    Vehicle::display();
			cout<<"size of Truck is: "<<size<<endl;
		}
		
		void speed()
		{
			cout<<"Speed of the Truck is: 80km/hr"<<endl;
		}
				
	};
	
	int main2()
	{
	   Vehicle v("Bus",4);
	   v.display();
	   cout<<"------------"<<endl;
	   Car c("Audi",4,"white");
	   c.display();
	   c.speed();
	   cout<<"---------------"<<endl;
	   Truck t("Truck",6,"large size");
	   t.display();
	   t.speed();	
	}
	
