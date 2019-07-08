#include <iostream>
using namespace std;

int main()
{
  int package, hours;
  
  cout << "Please input the package you have and the hours used to calculate your monthly bill" << endl;
  cout << "Package 1 : For P995/mo 10 hrs of access are provided. Additional hours are P20/hr." << endl;
  cout << "Package 2 : For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr." << endl;
  cout << "Package 3 : For P1995/mo of unlimited access is provided." << endl;
  cin >> package;
  cin >> hours;
  switch (package)
  {
      case 1:
      if (hours <= 10)
      cout << " your monthly bill is 995 pesos" << endl;
      else
      cout << "your monthly bill is: " << 995 + (hours * 20) << endl;
      break;
      
      case 2:
      if (hours <= 20)
      cout << "your monthly bill is 1495 pesos" << endl;
      else
      cout << "your monthly bill is:" << 1495 + (hours * 10) << endl;
      break;
      
      case 3:
      cout << "your monthly bill is 1995 pesos" << endl;
      break;
      
      default:
      cout << "invalid input, please input a valid choice" << endl;
      break;
  }
  
  system ("pause");
  return 0;
 
}
