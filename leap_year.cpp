#include <cmath>
#include <iostream>
using namespace std;

int main() {

  int i_y;

  cout << "Insira o ano:" << endl;

  cin >> i_y;

  if ((i_y % 4 == 0 && i_y % 100 != 0) || i_y % 400 == 0) {
    cout << "Ano bissexto.";
  } else {
    cout << "Ano não bissexto.";
  }
}
