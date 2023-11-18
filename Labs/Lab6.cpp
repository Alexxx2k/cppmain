#include <iostream>
#include <iomanip>

void outArray(int* arrMatrix, int& rows, int& cols);
void printArray(int* arrMatrix, int& rows, int& cols);

int main()
{
  int rows = 0;
  int cols = 0;

  if (!(std::cin >> rows >> cols))
  {
    std::cerr << ("Wrong Input");
  }
  else if(rows < 1 || cols < 1)
  {
    std::cerr << ("Rows or columns of the matrix cannot be less than 1");
  }
  int* arr = new int[rows * cols];

  outArray(arr, rows, cols);
  printArray(arr, rows, cols);

  delete[] arr;
}

void outArray(int *arrMatrix, int& rows, int& cols)
{
  for (int i = 0; i < rows * cols; i++) {
    if (!(std::cin >> arrMatrix[i]))
    {
      std::cerr << ("Wrong Input");
      exit(0);
    }
  }
}
void printArray(int* arrMatrix, int& rows, int& cols){
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      std::cout << std::setw(4) << arrMatrix[i * rows + j];
    }
    std::cout << "\n";
  }
}