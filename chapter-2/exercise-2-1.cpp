/*
 * write a program that produces the following shape:
 * ########
 *  ######
 *   ####
 *    ##
 * */

#include <iostream>

using std::cout;

// first solution
int main() {
  for (int row = 1; row <= 4; row++) {
    int emptySpace = 2 * (row - 1);
    for (int hasNum = 1; hasNum <= 8 - emptySpace / 2; hasNum++) {
      if (hasNum < row) {
        cout << " ";
      } else {
        cout << "#";
      }
    }

    cout << "\n";
  }
}

// second solution
int main() {
  for (int row = 1; row <= 4; row++) {
    int emptySpace = 2 * (row - 1);

    for (int hasNum = 1; hasNum < row; hasNum++) {
      cout << " ";
    }

    for (int hasNum = 1; hasNum <= 8 - emptySpace; hasNum++) {
      cout << "#";
    }
    cout << "\n";
  }
}
