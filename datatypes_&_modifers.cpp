// Finding out the size of all Possible Combination of "Primitive Datatypes and Modifiers".

// Including header file "Input/Output Stream" using a Preprocessor Directive.
#include <iostream>

// Declaring a 'namespace' called 'std'.
using namespace std;

// main() function.
int main()
{
    
    // Printing the size of all possible combination of datatypes and modifiers using unary operator 'sizeof()'.
    cout<<"Size of Character(char): "<<sizeof(char)<<" byte"<<endl;
    cout<<"Size of Signed Character(signed char): "<<sizeof(signed char)<<" byte"<<endl;
    cout<<"Size of Unsigned Character(unsigned char): "<<sizeof(unsigned char)<<" byte"<<endl;
    cout<<endl;
    cout<<"Size of Integer(int): "<<sizeof(int)<<" bytes"<<endl;
    cout<<"Size of Signed Integer(signed int): "<<sizeof(signed int)<<" bytes"<<endl;
    cout<<"Size of Unsigned Integer(unsigned int): "<<sizeof(unsigned int)<<" bytes"<<endl;
    cout<<endl;
    cout<<"Size of Short Integer(short int): "<<sizeof(short int)<<" bytes"<<endl;
    cout<<"Size of Signed Short Integer(signed short int): "<<sizeof(signed short int)<<" bytes"<<endl;
    cout<<"Size of Unsigned Short Integer(unsigned short int): "<<sizeof(unsigned short int)<<" bytes"<<endl;
    cout<<endl;
    cout<<"Size of Long Integer(long int): "<<sizeof(long int)<<" bytes"<<endl;
    cout<<"Size of Signed Long Integer(signed long int): "<<sizeof(signed long int)<<" bytes"<<endl;
    cout<<"Size of Unsigned Long Integer(unsigned long int): "<<sizeof(unsigned long int)<<" bytes"<<endl;
    cout<<endl;
    cout<<"Size of Long Long Integer(long long int): "<<sizeof(long long int)<<" bytes"<<endl;
    cout<<"Size of Signed Long Long Integer(signed long int): "<<sizeof(signed long long int)<<" bytes"<<endl;
    cout<<"Size of Unsigned Long Long Integer(unsigned long int): "<<sizeof(unsigned long long int)<<" bytes"<<endl;
    cout<<endl;
    cout<<"Size of Floating Point(float): "<<sizeof(float)<<" bytes"<<endl;
    cout<<endl;
    cout<<"Size of Double Floating Point(double): "<< sizeof(double)<<" bytes"<<endl;
    cout<<"Size of Long Double Floating Point(long double): "<< sizeof(long double)<<" bytes"<<endl;
    cout<<endl;
    cout <<"Size of Variable Character(wchar_t): "<<sizeof(wchar_t)<<" bytes"<<endl;
    cout<<endl;
    cout <<"Size of Boolean(bool): "<<sizeof(bool)<<" byte"<<endl;
    
    // Returning 0 to signify that the program executed successfully.
    return 0;
}

/*
Sample OUTPUT:
Size of Character(char): 1 byte
Size of Signed Character(signed char): 1 byte
Size of Unsigned Character(unsigned char): 1 byte

Size of Integer(int): 4 bytes
Size of Signed Integer(signed int): 4 bytes
Size of Unsigned Integer(unsigned int): 4 bytes

Size of Short Integer(short int): 2 bytes
Size of Signed Short Integer(signed short int): 2 bytes
Size of Unsigned Short Integer(unsigned short int): 2 bytes

Size of Long Integer(long int): 8 bytes
Size of Signed Long Integer(signed long int): 8 bytes
Size of Unsigned Long Integer(unsigned long int): 8 bytes

Size of Long Long Integer(long long int): 8 bytes
Size of Signed Long Long Integer(signed long int): 8 bytes
Size of Unsigned Long Long Integer(unsigned long int): 8 bytes

Size of Floating Point(float): 4 bytes

Size of Double Floating Point(double): 8 bytes
Size of Long Double Floating Point(long double): 16 bytes

Size of Variable Character(wchar_t): 4 bytes

Size of Boolean(bool): 1 byte
*/