#include <iostream>
using namespace std;
#include <cmath>

int main () {
	int number1, number2 ,choice, value ;
	cout<< "1.Add\n2.Subtract\n3.Multiply\n4.Division\n5.Modulo\n6.Power\n";
	cout<<"Which calculation you want(1-6)? ";
	cin >> choice;
	
	switch (choice)
    {
      case 1:
          cout << "Enter first integer: ";
	      cin >> number1;
	      cout << "Enter second integer: ";
	      cin >> number2;
          value = number1 + number2 ;
	      cout << "\nThe sum is " << value << ".";
	      break;
      case 2:
          cout << "Enter first integer: ";
	      cin >> number1;
	      cout << "Enter second integer: ";
	      cin >> number2;
          value = number1 - number2 ;
	      cout << "\nThe subtract is " << value << ".";
	      break;
      case 3:
          cout << "Enter first integer: ";
	      cin >> number1;
	      cout << "Enter second integer: ";
	      cin >> number2;
          value = number1 * number2 ;
	      cout << "\nThe multiplication is " << value << ".";
	      break;
	    case 4:
	      cout << "Enter first integer: ";
	      cin >> number1;
	      cout << "Enter second integer: ";
	      cin >> number2;
          value = number1 / number2 ;
	      cout << "\nThe division is " << value << ".";
	      break;
	    case 5:
	      cout << "Enter first integer: ";
	      cin >> number1;
	      cout << "Enter second integer: ";
	      cin >> number2;
          value = number1 % number2 ;
	      cout << "\nThe Modulo is " << value << ".";
	      break;
	    case 6:
	      cout << "Enter first integer(base): ";
	      cin >> number1;
	      cout << "Enter second integer(exponent): ";
	      cin >> number2;
          value = pow(number1, number2); ;
	      cout << "\nThe power is " << value << ".";
	      break;
      default:
        cout<<"Wrong choice!!";
         
    }
	
}


