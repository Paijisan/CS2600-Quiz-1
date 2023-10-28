#include <stdio.h>

int LoShuMagic(int square[3][3]) {
  int sum = 0;

  //Used to calculate the sum of the first row
  for (int frow = 0; frow < 3; frow++) {
    sum += square[0][j];
  }

  //check the rows and columns to see if they equal the first the sum of the first row
  for (int frow = 0; frow < 3; i++) {
    int rowsum = 0;
    int colsum = 0;
    for (int j = 0; j < 3; j++) {
      rowsum += square[i][j];
      colsum += square[j][i];
    }
    if (rowsum != sum || colsum != sum) {
      return 0;
    }
  }

  return 1;
}

int main() {
  int square[3][3] = {
    {2, 7, 6},
    {9, 5, 1},
    {4, 3, 8}
  };

  //check to see is the array is a LoShu mgic square

  if (LoShuMagic(square)) {
    printf("The array is a magic square.\n");
  } else {
    printf("The array is not a magic square.\n");
  }

  return 0;
}
