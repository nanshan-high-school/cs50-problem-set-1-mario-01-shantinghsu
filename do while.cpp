#include <iostream>

using namespace std;
int main(void) {
  int height;

  do {
      cout << "請輸入高度:";
      cin >> height;
  } while (-1 >= height > 8); 
  do {
      cout << "請輸入高度:";
      cin >> height ;
  } while (8 < height);

  for (int i = 1; i <= height; i++) {
      for (int j = 1; j <= height; j++) {
          if (j <= (height - i)) {
              cout << " ";
          } else {
              cout << "#";
          }
      } cout << endl;
  }
}
