// Exercise 4.21: Mystery2.cpp
#include <iostream>
using namespace std;

int main() {
   unsigned int count{1};// Initializes count at 1

   while (count <= 10) {// while count is less than or equal to 10
      cout << (count % 2 == 1 ? "****" : "++++++++") << endl;//displays **** +++++++++ when count is odd
      ++count;
   }
}