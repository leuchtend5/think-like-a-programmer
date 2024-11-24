/*
 *
 * #            #
    ##        ##
     ###    ###
      ########
      ########
     ###    ###
    ##        ##
   #            #
*/

#include <iostream>

using std::cout;

int main() {
  for (int row = 1; row <= 8; row++) {
    int pivotV = 4;
    int emptySpaceV = (row > pivotV) ? row - 1 : row;

    for (int hasNum = 1; hasNum <= abs(abs(pivotV - emptySpaceV) - 3);
         hasNum++) {
      cout << " ";
    }

    for (int hasNum = 1; hasNum <= (8 - (abs(pivotV - emptySpaceV))) - pivotV;
         hasNum++) {
      cout << "#";
    }

    for (int hasNum = 1; hasNum <= abs(14 - ((emptySpaceV * 4) - 2));
         hasNum++) {
      cout << " ";
    }

    for (int hasNum = 1; hasNum <= (8 - (abs(pivotV - emptySpaceV))) - pivotV;
         hasNum++) {
      cout << "#";
    }

    cout << "\n";
  }
}
