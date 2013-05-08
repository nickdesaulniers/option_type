#include <iostream> // cout, endl
#include <stdlib.h> // rand
#include <time.h> // time
using namespace std;

// If there is a 'random error' returns NULL
const int* const may_return_null () {
  srand(time(NULL));
  return rand() % 2 > 0 ? new int(666) : NULL;
}

int main () {
  // if else
  const int* const x = may_return_null();
  if (x) {
    // switch
    switch (*x) {
      case 777: cout << "Lucky Sevens"        << endl; break;
      case 666: cout << "Number of the Beast" << endl; break;
      case 42: cout  << "Meaning of Life"     << endl; break;
      default: cout  << "Nothing special"     << endl; break;
    }
  } else {
    cout << "No value" << endl;
  }
  
  // single if
  if (*x == 666) {
    cout << "Did I mention that Iron Maiden is my favorite band?" << endl;
  }
}
