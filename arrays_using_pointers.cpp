// Accessing the elements of an "Array using Pointers".

// Including header file "Input/Output Stream" using a Preprocessor Directive.
#include <iostream>

// Declaring a 'namespace' called 'std'.
using namespace std;

// main() function.
int main()
{
    // Declaring the two variables of datatype 'integer' to store the size of an array
    // and to be used as an iterator by for-loop.
    int size, i = 0;
    
    // Prompting the user to enter the size of the array.
    cout<<"Enter the size of the Array: ";
    cin>>size;
    
    // Declaring an array of datatype 'integer' to store the elements of the array.
    int array[size];
    
    // Declaring a pointer of datatype 'integer' to access the elements of the array.
    int *pointer = array;
    
    // Prompting the user to enter the array.
    cout<<endl<<"Enter the Elements of the Array~\n";
    for(i = 0; i < size; i++)
    {
        cout<<"Element "<<i + 1<<" at index "<<i<<": ";
        cin>>*pointer++;
    }
    
    pointer = array;
    // Displaying the elements of the array.
    cout<<endl<<"The Elements of the Array are: ";
    for(i = 0; i < size; i++)
        cout<<*pointer++<<" ";
    
    
    // Returning 0 to signify that the program executed successfully.
    return 0;
}

/*
Sample OUTPUT:
Enter the size of the Array: 5

Enter the Elements of the Array~
Element 1 at index 0: 1
Element 2 at index 1: 2
Element 3 at index 2: 3
Element 4 at index 3: 4
Element 5 at index 4: 5

The Elements of the Array are: 1 2 3 4 5 
*/