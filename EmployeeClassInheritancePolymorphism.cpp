 #include<iostream>
using namespace std;
class Employee
{  protected:
    int id;
    string name;
    int deptId;
    
	protected: double basicSalary;
    
    public:
    	Employee()
    	{
    		cout<<"Default employee constructor"<<endl;
    		id=10;
    		name="xyz";
    		deptId=20;
    		basicSalary=10000;
		}
		
		Employee(int id,string name,int deptId,double basicSalary)
		{   cout<<"parameterized employee constructor"<<endl;
			this->id=id;
			this->name=name;
			this->deptId=deptId;
			this->basicSalary=basicSalary;
			
		}
		
	virtual	double computeNetSalary()
		{
			return 0;
		}
		
		virtual void display()
		{
			cout<<"Id: "<<id<<"  Name: "<<name<<"  deptId: "<<deptId<<"  BasicSalary: "<<basicSalary<<endl;
		}
	
};

class Manager: public Employee
{
	private:
		int perBonus;
		double netsalary;
		
		public:
			Manager()
			{
				
			}
			Manager(int id,string name,int deptId,double basicSalary,int perBonus):Employee(id,name,deptId,basicSalary)
			{   cout<<"manager parameter constructor"<<endl;  
				this->perBonus=perBonus;
			} 
			
			
		double computeNetSalary()
		{
			double netsalary=basicSalary+perBonus;
			cout<<"NetSalary: "<<netsalary<<endl;
		
		}
	void display()
		{   Employee::display();
			cout<<"perBonus: "<<perBonus<<"  Netsalary:"<<netsalary<<endl;
		}
			
};

class Worker: public Employee
{
   private: int hoursWorked;
	        int hourlyRate;
	        //double netsalary;
	
	public:
		Worker()
		{
			
		}
		
		Worker(int id,string name,int deptId,double basicSalary,int hoursWorked,int hourlyRate):
		Employee(id,name,deptId,basicSalary)
		{
		 	this->hoursWorked=hoursWorked;
		 	this->hourlyRate=hourlyRate;
		}
		
		
	int GethourlyRate()
	{
	  return hourlyRate;	
	}
	
	double computeNetSalary()
		{ 
			cout<<"NetSalary: "<<basicSalary+(hoursWorked*hourlyRate)<<endl;
		 
		}
		void display()
		{   Employee::display();
			cout<<"hoursworked: "<<hoursWorked<<" HourlyRate:"<<hourlyRate<<"  Netsalary:"<<
			basicSalary+(hoursWorked*hourlyRate)<<endl;
		}
		
};


int main()
{
	Employee e;
	e.display();
	cout<<"------------------------------------"<<endl;
	Manager m(10,"Mahesh",20,80000,20000);
	m.computeNetSalary();
	m.display();
	cout<<"------------------------------------"<<endl;
	Worker w(11,"manish",23,5000,5,100);
	m.computeNetSalary();
	w.display();
	cout<<"--------------------------------------"<<endl;
    Employee *arr[3];
    arr[0]=&e;
    arr[1]=&m;
    arr[2]=&w;
    for(int i=0;i<3;i++)
    {
    	arr[i]->display();
	}
	
//	int ch,empId,wid;
//	do{ int ch;
//		cout<<"\n MENU \n";
//		cout<<"1.Hire manager \n 2.Hire worker\n 3.Display details \n 4.Exit"<<endl;
//		cout<<"Enter your choice"<<endl;
//		cin>>ch;
		 
//		switch(ch)
//		{
//			case 1:
//				cout<<"Enter employee id: "<<endl;
//				cin>>empId;
//				Employee *arr[3];
//                arr[0]=&e;
//                for(int i=0;i<3;i++)
//                {
//    	           arr[i]->display();
//               	}
//				
//				break;
//			case 2:
//				cout<<"Enter worker id: "<<endl;
//				cin>>wid;
//				Worker *ar[3];
//				arr[0]=&w;
//                for(int i=0;i<3;i++)
//                {
//    	           arr[i]->display();
//               	}
//				
//				break;
//				case 3:
//		        Employee *arr[3];
//                arr[0]=&e;
//                arr[1]=&m;
//                arr[2]=&w;
//                for(int i=0;i<3;i++)
//                {
//    	           arr[i]->display();
//					
//		        }
//	            break;
//	            case 4:
//	            	cout<<"Exitin program"<<endl;
//	           	default:
//	           		cout<<"Invalid choice"<<endl;
//		
//		
//	}while(ch!=4);
}
