#include <bits/stdc++.h>
using namespace std;

int main() {

  int a = 14, b = 3;

  // Floor
  cout << "Floor of " << a << "/" << b << " is: " << floor((double)a / b) << endl;
  cout << "Floor of " << a << "/" << b << " is: " << (a / b) << endl; // C++ automatically floors when dividing positive integers

  // Ceil
  cout << "Ceil of " << a << "/" << b << " is: " << ceil((double)a / b) << endl;
  cout << "Ceil of " << a << "/" << b << " is: " << (a + b - 1) / b << endl; // another way to ceil when dividing positive integers

  // Round
  cout << "Round of " << a << "/" << b << " is: " << round((double)a / b) << endl;
  return 0;
}
