#include <algorithm>
#include <iostream>
int main() {
  int arr[] = {1, 3, 5, 2, 1};
  int x;
  std::cin >> x;
  int arr1[x];
  int n =
      sizeof(arr) / sizeof(arr[0]); // sizeof(arr) will give total byte size of
                                    // array, divide by 4 to get total elements
  std::sort(arr, arr + n);
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << "\n" << sizeof(arr) << "\n";
  std::cout << sizeof(arr[0]) << "\n";

  std::cout << sizeof(arr1) << "\n";

  return 0;
}
