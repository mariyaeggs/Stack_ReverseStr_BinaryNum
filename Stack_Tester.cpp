//----- Stack.cpp -----
#include <iostream>
using namespace std;

#include "Stack.h"
/**
 * Title: Lab 2 Submission : Stacks
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2 on 1/15/2017
 *
 * Driver file for a stacks program.
 *
 * @author Mariya Eggensperger
*/
void input_user_str(string input, Stack & s);
int main() {

   /*Lab Exercise Part a)
    * The program can read a sequence of characters
    * and reverse it using the stack.*/

   Stack s;
   cout << "\nStack created. Empty? " << boolalpha << s.empty() << endl;

   string user_str;
   string reverse_str = ""; // Stores user string input

   cout << "\nEnter a string of characters => ";
   getline(cin, user_str);
   cout << endl;
   cout << "You entered " + user_str << endl;

   // Call on input_user_str function to store new input
   input_user_str(user_str, s);

   while (!s.empty()) {
      reverse_str += s.top();
      s.pop();
   }
   cout << "Reverse is " << reverse_str;
   cout << endl;

   /*Lab Exercise Part b)
    * The program can read a sequence of characters
    * and reverse it using the stack.*/

}
void input_user_str(string input, Stack & s) {
   for (char user_char : input) {
      s.push(user_char);
   }

}