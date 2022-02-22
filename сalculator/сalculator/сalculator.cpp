#include <iostream>
using namespace std;
#include <math.h>

int main() 
{
    double firstNumber, secondNumber, resultOfCalculation;
    char mathSign{};

    cout << "Enter the first number for calculations: ";
    cin >> firstNumber;

    cout << "Enter the sign for the mathematical operation: ";
    cin >> mathSign;

    cout <<"Enter the second number for calculations: "; 
    cin >> secondNumber;

    switch (mathSign){
    case '*':  
       resultOfCalculation = firstNumber * secondNumber;
       cout << "Result of multiplication: " << resultOfCalculation << endl;
       break;
    case '-' :
        resultOfCalculation = firstNumber - secondNumber;
        cout << "Result of subtracting numbers: " << resultOfCalculation << endl;
        break;
    case '+' : 
        resultOfCalculation = firstNumber + secondNumber;
        cout << "Result of adding numbers: " << resultOfCalculation << endl;
        break;
    case '/' : 
        if (secondNumber != 0) {
            resultOfCalculation = firstNumber / secondNumber;
            cout << "Result of adding numbers: " << resultOfCalculation << endl;
        }
        else {
            cout << "You cannot divide by zero, try again" << endl;
        }
        break;
    default:
        cout << "Please enter the correct mathematical sign."; 
    }

    return 0;


}
