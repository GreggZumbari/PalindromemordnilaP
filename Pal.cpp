/**
 * This program takes a user input, then tests if it is a palindrome.
 * @author Greggory Hickman, September 2019
 * @version alpha 1.0
 */
#include <iostream>
#include <cstring>

using namespace std;

int main() {

  //Variable detects if the input is a palindrome
  bool pal = true;

  //Max char limit
  int lim = 81;
  //Offset between input and pInput in a given array
  int offs = 0;
  //CString length because strlen() doesn't work
  int pLen = 0;

  //User input
  char input[lim];
  //Parsed user input
  char pInput[lim];

  //Clear RAM data
  for (int i = 0; i <= sizeof(input); i++)
    input[i] = (char)32;
  for (int i = 0; i <= sizeof(pInput); i++)
    pInput[i] = (char)32;
  
  //Get input
  cout << "Greetings traveller! You have happened upon your local Whole Foods." << endl
       << "Enter a phrase and our trademark skinny white boy will tell you if it\'s a palindrome." << endl
       << "Phrase: ";
  cin.getline(input, lim);

  /*
  for (int i = 0; i < lim; i++) {
    cout << input[i];
  }
  cout << endl;
  */

  //Convert to lowercase and then destroy all other data
  for (int i = 0; i <= sizeof(input); i++) {
    //Convert to lowercase
    if (input[i] >= 65 && input[i] <= 90)
      input[i] += (char)32;
    //Expel non-letters
    if (input[i] < 97 || input[i] > 122)
      input[i] = (char)32;
    //Expel spaces (by moving all of the data over to another char[])
    if (input[i] != 32) {
      pInput[i - offs] = input[i];
      pLen++;
    }
    else offs++;
  }

  //Test for palindrome, finally
  for (int i = 0; i < (pLen / 2) + 1; i++) {
    /*//Uncomment to see the process through which the program tests if the phrase is a palindrome
      cout << (int)pInput[i] << "(" << (char)pInput[i] << "), " << (int)pInput[pLen - 1 - i] << "(" << (char)pInput[pLen - 1 - i] << ")" << endl;
    */
    if ((int)pInput[i] != (int)pInput[pLen - 1 - i])
      pal = false;
  }

  //Return the results!
  if (pal == true)
    cout << "Palindrome." << endl;
  else
    cout << "Not a palindrome." << endl;
}
