// Finding the "Product of Two Numbers" entered by the User.

// Including header file "Input/Output Stream" using a Preprocessor Directive.
#include <iostream>

// Declaring a 'namespace' called 'std'.
using namespace std;

// main() function.
int main()
{
    // Declaring the three variables of datatype 'double' to store the numbers entered by the user
    // and to store the Product of these two numbers.
    double num1, num2, product;
    
    // Prompting the user to enter the first number.
    cout<<"Enter the 1st Number: ";
    cin>>num1;
    
    // Prompting the user to enter the second number.
    cout<<"Enter the 2nd Number: ";
    cin>>num2;
    
    // Calculating the product of the two numbers and storing it inside the third variable.
    product = num1*num2;
    
    // Displaying the product of the two number entered by the user.
    cout<<"The Product of "<<num1<<" and "<<num2<<" is: "<<product;
    
    // Returning 0 to signify that the program executed successfully.
    return 0;
}

/*
Sample OUTPUT 1:
Enter the 1st Number: 123.46
Enter the 2nd Number: 98.75
The Product of 123.46 and 98.75 is: 12191.7

Sample OUTPUT 2:
Enter the 1st Number: 12.56
Enter the 2nd Number: 87.34
The Product of 12.56 and 87.34 is: 1096.99
*/