#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int main()
{
	
	//Account arrays
	
	int account_no[100]={12345678,12253678,45788956,96584714,12345698};
	int account_balance[100] = {100000,100000,100000,100000,100000};
	int debit_card[100]={98765432,98465132,78945612,58423644,58964725};
	int pin[100]={1234,2345,3456,4567,5678};
	int rand_pin[5]={434,768,355,890,234};
	//
	
	int ch1,withdraw,deposit,withdraw_sum=0,deposit_sum=0;
	

	cout<<"--------------------------------------";
	cout<<"\nIs Your Card Activated   \nPress\n1.Yes    2.No";
	cout<<"\n--------------------------------------\n";
	int check_activ;
	cin>>check_activ;
	
if(check_activ==1)
{
	label2:
	cout<<"\n\nEnter Debit Card Number:";
	int debno;
	cin>>debno;

	for(int i=0;i<100;i++){
		if(debno==debit_card[i]){
			cout<<"---------------------------";
			cout<<"\nSuccess!! Account found\n";
			cout<<"---------------------------";
			cout<<"\nAccout Number: ";
			
			cout<<account_no[i],"\n";
			cout<<"\n---------------------------";
			int pin_input;
			cout<<"\nPlease enter debit card pin: ";
		
			cin>>pin_input;
				cout<<"\n---------------------------";
			
			for(int j=0;j<100;j++){
				if(pin_input==pin[i]){
					label1:
					
					cout<<"\n1.Withdraw\n2.Deposit\n";
					cout<<"Enter your choice: ";
					cin>>ch1;
					switch(ch1){
						case 1:
							cout<<"Enter amount to be withdrawn: ";
							cin>>withdraw;
							withdraw_sum+=withdraw;
							account_balance[i]-=withdraw;
							break;
						case 2:
							cout<<"Enter amount to be deposited: ";
							cin>>deposit;
							deposit_sum+=deposit;
							account_balance[i]+=deposit;
							break;
						default:
							cout<<"Wrong choice enter again";
							goto label1;	
					}
						cout<<"\n---------------------------";
					cout<<"\nSuccess!!";
					cout<<"\n\nWish to enter again? (Y/n)";
					char ch2;
					cin>>ch2;
					switch(ch2){
						case 'Y':
							goto label1;
							break;
						case 'n':
							break;
						default:
							break;
					}
				}
				
				break;
			}
			
		    cout<<"------------------------------------";	
			cout<<"\nMini Statement Generation: \n";    //Please format the mini statement as I have given the architecture only
			cout<<"\nAccount number: ";
			cout<<account_no[i],"\n";
			cout<<"\nDebit number: ";
			cout<<debit_card[i],"\n";
			cout<<"\nTotal money withdrawn: ";
			cout<<withdraw_sum,"\n";
			cout<<"\nTotal money Deposited: ";
			cout<<deposit_sum;
			cout<<"\nNet Account Balance:";
			cout<<account_balance[i];
			withdraw_sum=0;
			deposit_sum=0;
		    cout<<"\n------------------------------------";	
			break;
		}
	}
}

else{
	
	cout<<"\n\nWELCOME TO CARD ACTIVATION";
	cout<<"\n\nEnter Account Number:";
	cin>>account_no[6];
	cout<<"\nEnter the Account Balance:";
	cin>>account_balance[6];
	cout<<"\nEnter Debit Card Number:";
	cin>>debit_card[6];
	int a=rand()%5;
	pin[6]=rand_pin[a];
	cout<<"\nYour New Pin is:"<<pin[6];
		goto label2;
}

return 0;
}
