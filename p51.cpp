#include <iostream>
using namespace std;
int main(){
	int salary=0;
	cout<<"enter the salary(tomans):"<<endl;
	cin>>salary;
	double tax=0;
	if (salary<6000000){
		tax=0;
	}else if (salary<8000000){
		tax=0.05*salary;
	}else if(salary<10000000){
		tax=0.10*salary;
	}else if(salary<14000000){
		tax=0.15*salary;
	}else if(salary<18000000){
		tax=0.20*salary;
	}else{tax=0.35*salary;
	}
	double final_salary=salary-tax;
	cout<<("final salary=%f",
	final_salary);
	
	
	
	
	
	
	
	
	}
	