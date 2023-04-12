#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int counter,option,Exit;
	float amount,balance=1000.00;
	string ref,phone,pin,main_pin="0000";
	char confirm;
	
	cout<<"Welcome mobile money service\n";
	cout<<"select option 1-3\n";
	cout<<"1. Authentication\n";
	cout<<"2. Check balance\n";
	cout<<"3. Reset your pin\n";
	cout<<"4. Transfer money\n";
	cout<<"5. Exit";
	cin>>option;
	switch(option){
		case 2:
			cout<<"verify your pin :\n";
			cin>>pin;
			if(pin!=main_pin){
				cout<<"Wrong input,please try again\n";
				
				if (counter==3){
					cout<<"Too many attempts\n\n";
					return 0;
				}
				
			}
			else{
				cout<<"Account balance is "<<" "<<balance;
			}
			break;
				case 3:
			cout<<"Reset/Change your pin code\n";
			cout<<"Enter your old pin";
			cin>>pin;
			//"Enter [Y||N] to confirm:\n";
			cout<<"Enter your new pin code\n";
				cin>>pin;
			if(confirm=='0000'||confirm!='0000'){
			
				cout<<"Your pin code reset succesful from old to"<<" "<<pin;
			}
			else {
			
				cout<<"Canceled!!\n";
			
			
			}
				
				
				
					
				
				
	
		break;
		
		
		case 4:
		cout<<endl;
		cout<<"select option\n";	
			cout<<"1. Pay bills\n";
			cout<<"2. Momo\n";
			cout<<"3. Exit\n";
			
			cin>>option;
			switch (option)
			case 2:
				cout<<"Enter number\n";
				cin>>phone;
				
				cout<<"Enter amount\n";
				cin>>amount;
				
				cout<<"reference:\n";
				cin>>ref;
				
				cout<<"Enter pin to send "<<" "<<amount<<" "<<"to"<<phone<<":\n";
				
				cin>>pin;
				
				if(pin!=main_pin){
					cout<<"Wrong pin, please try again\n";
					
					if(counter==3){
						cout<<"too many attemps\n\n";
						return 0;
					}
					
				}
				else{
					cout<<"An amout of"<<" "<<amount<<" "<<"have bee sent "<<" "<<phone<<" "<<"with reference"<<" "<<ref<<endl;
					cout<<endl;
					cout<<" Your current balance is "<<" "<<balance-amount<<endl;
				}
				
				
					
					
				break;
				
		
	return 0;}
}
