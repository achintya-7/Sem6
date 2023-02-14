#include <iostream>

using namespace std;

int main() {
  string pan;

  cin >> pan;

  if (pan.length() != 10) {
    cout << "Test Case Failed \n";
    return 0;
  }

  cout << "Test Case Passed \n";
  return 0;
}