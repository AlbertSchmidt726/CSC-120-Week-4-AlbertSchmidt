// This code is functional. In a comment below, explaine the differences between postincrementing and preincrementing
// Prefix increment and postfix increment operators.
#include <iostream>
using namespace std;

int main() {
   // demonstrate postfix increment operator
   unsigned int c{5}; // initializes c with the value 5
   cout << "c before postincrement: " << c << endl; // prints 5
   cout << "    postincrementing c: " << c++ << endl; // prints 5
   cout << " c after postincrement: " << c << endl; // prints 6                     

   cout << endl; // skip a line

   // demonstrate prefix increment operator
   c = 5; // assigns 5 to c  
   cout << " c before preincrement: " << c << endl; // prints 5
   cout << "     preincrementing c: " << ++c << endl; // prints 6
   cout << "  c after preincrement: " << c << endl; // prints 6                     
}

// With postincrementing the current value of c is used within the line or expression
// then before it moves onto the next line it is incremented 1 creating a new value for c.
// Preincrementing increments the current value of c by 1 before using the new value of c
// within that line or expression.
