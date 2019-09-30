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
  int lim = 80;
  //Offset between input and pInput in a given array
  int offs = 0;

  //User input (it's really big in the hopes that nobody will type in anything higher)
  char input[2000];
  //Parsed user input, will only take the first 80 characters
  char pInput[lim];

  //Clear RAM data
  for (int i = 0; i <= sizeof(input); i++)
    input[i] = (char)32;
  for (int i = 0; i <= sizeof(pInput); i++)
    pInput[i] = (char)32;
  
  //Get input
  cout << "Greetings traveller! You have happened upon your local Whole Foods." << endl
       << "Enter a phrase and our trademark skinny white boy will tell you if it\'s a palindrome." << endl;
  cin.getline(input, 2000);

  //Convert to lowercase and then destroy all other data
  for (int i = 0; i <= sizeof(input); i++) {
    //Convert to lowercase
    if (input[i] >= 65 && input[i] <= 90)
      input[i] += 32;
    //Expel non-letters
    if (input[i] < 97 && input[i] > 122)
      input[i] = (char)32;
    //Expel spaces (by moving all of the data over to another char[])
    if (input[i] != 32)
      pInput[i - offs] = input[i];
    else offs++;
  }

  cout << strlen(pInput) << endl;

  //Test for palindrome, finally
  for (int i = 0; i < strlen(pInput); i++) {
    cout << (int)pInput[i] << ", " << (int)pInput[strlen(pInput)] << endl;
    if ((int)pInput[i] != (int)pInput[strlen(pInput) - i])
      pal = false;
    else
      cout << "Same" << endl;
  }

  //Return the results!
  if (pal == false)
    cout << "This phrase is not a palindrome." << endl;
  else
    cout << "This phrase indeed is a palindrome." << endl;
}
