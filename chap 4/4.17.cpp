#include<iostream>    
#include<string>
using namespace std;
 main(){
 	
 	int counter = 1;  
	 int units;  
 	int max= 0;
 	while(counter <=10){
 		cout<<"please Enter unites for salesman # "<<counter<<" ";
 		cin>> units;
 		if(max< units){
 			max = units;
		 }
		 counter++;
	 }
	 
	 cout<<"The maximum Units Selled are "<< max <<"\n";
}
