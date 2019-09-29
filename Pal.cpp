#include <iostream>

using namespace std;

int main() {

  bool pal = true;
  int lim = 80;
  char input[lim];

  //Clear RAM data
  for (int i = 0; i <= sizeof(input); i++)
    input[i] = 32;
  
  //Get input
  cin.getline(input, lim);

  //Convert to lowercase and then destroy all other data
  for (int i = 0; i <= sizeof(input); i++) {
    //Convert to lowercase
    if (input[i] >= 65 && input[i] <= 90)
      input[i] += 32;
    //Expel non-letters
    if (input[i] < 97 || input[i] > 122)
      input[i] = (char)32;
    //Expel spacing (very inefficiently)
    if (input[i] == 32) {
      if (input[i + 1] == 32) {
	for (int j = i; i < sizeof(input) - i; j++) {
	  //If the next space is also a space, keep looking until it isnt
	}
      }
    }
  }
  
  for (int i = 0; i < sizeof(input); i++) {
    cout << input[i] << ", ";
  }

}
