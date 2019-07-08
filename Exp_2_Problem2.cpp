#include <iostream>
using namespace std;
int main ()
{
 cout<<endl<<endl<<"*************** WATER BILL CALCULATION ***************"<<endl<<endl;
 char ch;
 do
 {
  int previous_meter_reading;               
  int current_meter_reading;       
  int demand_charge=35;        
  int charge_per_gallon=1.10;       
  int surcharge=20;         
  int gallons;           
  int bill;          
   char unpaid_balance;       
  cout<<"Please Enter Previous Meter Reading: "<<endl;
  cin>>previous_meter_reading;     
  cout<<"Please Enter Current Meter Reading: "<<endl;
  cin>>current_meter_reading;       
  cout<<"Did Customer Paid The Previous Bill? (Press 'Y' or 'N'): "<<endl;
  cin>>unpaid_balance;        
  gallons=current_meter_reading-previous_meter_reading;
  if (unpaid_balance== 'Y')    
  {
   bill=(charge_per_gallon*gallons)+demand_charge;
  }
  else
  {
   bill=(charge_per_gallon*gallons)+demand_charge+surcharge; 
  }
  cout<<endl<<"Water Bill="<<bill<<"P."<<endl;    
  cout<<endl<<"=============================================================="<<endl;
  cout<<"Do you Want More (Y / N) : ";    
  cin>>ch;
 }while(ch=='y--');
return 0;
}


