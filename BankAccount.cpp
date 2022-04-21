#include<iostream>
using namespace std;
int count=0;
class bankacc
{
 char cust_name[50];
 char acc_type[30];
 float acc_no;
 float balance=0.0;
 public:
  void new_acc(void);
  void withdraw(void);
  void deposit(void);
  void balance_en(void);
  void acc_statement(void);
};
void bankacc::new_acc()
{
 acc_no=count;
 cout<<"Enter the name    : ";
 cin>>cust_name;
 cout<<"Enter account type: ";
 cin>>acc_type;
 cout<<"Enter the balance : ";
  cin>>balance;
cout<<"\n\tYour Bank Account is created successfully.\n";
 cout<<"Your Account number is : "<<acc_no<<"\nYour current balance is: "<<balance<<endl;

}
void bankacc:: acc_statement()
{
 cout<<"\n\tBank Account Details "<<endl;
 cout<<"Account number : "<<acc_no<<endl;
 cout<<"Holder name    : "<<cust_name<<endl;
 cout<<"Account type   : "<<acc_type <<endl;
 cout<<"Account balance: "<<balance<<endl;
}
void bankacc::balance_en()
{
 cout<<"\nYour current Balance in the account number "<<acc_no<<" is "<<balance<<endl;
}
void bankacc::deposit()
{
 float d;
 cout<<"Enter the amount to deposit: Rs.";
 cin>>d;
 balance=balance+d;
 cout<<"\n\tDeposited Successfully\nYour balance is Rs."<<balance<<endl;
}
void bankacc::withdraw()
{
 float w,temp;
  cout<<"Account Balance: "<<balance<<endl;
 cout<<"Enter the amount to withdraw: Rs.";
 cin>>w;

 temp=balance-w;
 if(temp>=500)
 {
  balance=temp;
  cout<<"\n\tWithdrawal Successfull\nYour Current balance is Rs."<<balance<<endl;
 }
 else
 {cout<<"\nYour current balance is not sufficient to withdraw Rs."<<w<<" with a minimum balance of Rs.500. \n";
 }
}

int main()
{
bankacc customer[100];     
int ch,accn,t;
do
{cout<<"\n------------------------------------------------------------------------------------"<<endl;
 cout<<"\t WELCOME TO THE BANK SERVICES \n";
 cout<<"------------------------------------------------------------------------------------"<<endl;
 cout<<"1.New account.\n2.Deposit Amount.\n3.Withdraw Amount.\n4.Balance enquiry.\n5.Account Statement.\n6.Exit.\n\nEnter your choice: ";
 cin>>ch;
 cout<<"\n************************************************************************************"<<endl;
 if(ch==1)
 {
  customer[count].new_acc();
  count=count+1;
  bankacc customer[count];
 }
 else if(ch>1&&ch<6)
 {
  cout<<"Enter the Account number :";
  cin>>accn;
  if(accn>(count-1))
    cout<<"Account number does not matches.\n";
  else
  {
   cout<<"Account number matches.\n";
   switch(ch)
   { 
    case 2:customer[accn].deposit();
     break;
    case 3:customer[accn].withdraw();
     break;
    case 4:customer[accn].balance_en();
     break;
    case 5:customer[accn].acc_statement();
     break;
    }
   }
  }
 else if(ch==6)
{ 
    break;
}
 else
    {cout<<"Your choice is wrong.\n";}
 cout<<"************************************************************************************"<<endl;
 if(ch!=6){
  cout<<"\nPlease enter '1' to Continue and '0' to Exit : ";
  cin>>t;
  if(t==0)
        {ch=6;}}   
}while(ch!=6);
cout<<"\tEND\n";
return 0;
}
