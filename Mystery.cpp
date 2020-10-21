// Exercise 4.12: Mystery.cpp Adds squares from 1-10
#include <iostream>
using namespace std;

int main() {
   unsigned int x{1};// Initializes x to 1
   unsigned int total{0};// Initializes total to 0

   while (x <= 10) {// while x is less than or equal to 10
      total += (x * x); // adds total to the square of x
      ++x; //increments x

   } 

   cout << "Total is " << total << endl;
} 