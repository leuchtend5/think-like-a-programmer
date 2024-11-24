/*
 *    ##
 *   ####
 *  ######
 * ########
 * ########
 *  #####
 *   ##
 * */

#include <iostream>

using std::cout;

int main() {
  for (int row = 1; row <= 8; row++) {
    int pivot = 4;
    int emptySpace = (row > pivot) ? row - 1 : row;

    for (int hasNum = 1; hasNum <= abs(pivot - emptySpace); hasNum++) {
      cout << " ";
    }

    for (int hasNum = 1; hasNum <= 8 - (abs(pivot - emptySpace) * 2);
         hasNum++) {
      cout << "#";
    }

    cout << "\n";
  }
}
