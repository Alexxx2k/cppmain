#include <iostream>

void outArray(int arr[], int& len);

int main()
{
  int len = 0;
  std::cin >> len;
  int* arr = new int[len];
  for (int i = 0; i < len; i++)
  {
    arr[i] = rand() % 10;
  }
  outArray(arr, len);
  delete[] arr;
}

void outArray(int arr[], int& len)
{
  int count = 0;
  std::cout << "Random array:" << "\n";
  for (int i = 0; i < len; i++) {
    if (arr[i] > arr[i - 1]) {
      std::cout << arr[i] << "\n";
      count++;
    }
    else {
      std::cout << "error" << "\n";
    }
  }
  if (count == len) {
    std::cout << "True" << "\n";
  }
  else {
    std::cout << "False" << "\n";
  }
}