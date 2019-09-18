#include <iostream>

using namespace std;

int main() {

  bool pal = true;
  int lim = 80;
  char input[lim + 1];

  //Get input
  cin.get(input, lim + 1);

  //Note to self: delete punctuation
  
  for (int i = 0; i < lim + 1; i++) {
    cout << input[i] << endl;
  }

}
