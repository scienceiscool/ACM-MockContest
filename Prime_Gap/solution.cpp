// February 13, 2015
// Team members: Kathy Saad, Eric Abbott, Austin Greene
// Status: Successful

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime (int input) {
  if (input == 2 || input == 3) {
    return true;
  }

  bool p = false;
  int n = 2;

  while (n <= sqrt(input) && p == false){
    if (input % n == 0) {
      return false;
    }
    n++;
  }
  return true;
}

int main () {
  int given;

  while (cin >> given) {
    if (given == 0) {
      return 0;
    }
    // cout << "given" << given << endl;
    if isPrime(given) {
      cout << 0 << endl;
    }
    else {
      int lower,
        higher;

      lower = given - 1;
      while (! isPrime(lower)) {
        lower--;
      }
      higher = given + 1;
      while (! isPrime(higher)) {
        higher++;
      }
      cout << higher - lower << endl;
    }
  }
  return 0;
}
