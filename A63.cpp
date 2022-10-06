#include <iostream>
using namespace std;

int getSum(int N);

int main () {
  int n;
  cout << "Enter the total amount of numbers\n";
  cin >> n;
  if (n <= 0) {
    exit(0);
  }
  
  cout << getSum(n) << endl;
  return 0;
}

int getSum(int N) {
  int i, num, sum; 
  int min, max = 0;
  for (i = 0; i < N; i++) {
      cout << "Enter a number\n";
      cin >> num;
      sum += num;
      if (num > max) {
          max = num;
      }
      if (num < min) {
          min = num;
      }
  }
  sum = sum - max - min;
  return sum;
}