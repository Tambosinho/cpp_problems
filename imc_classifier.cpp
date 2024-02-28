#include <cmath>
#include <iostream>
using namespace std;

int main() {
  float f_mass, f_heigth;
  float f_cmi;

  cout << "Insira a massa em kg:" << endl;
  cin >> f_mass;

  cout << "Insira a altura em metros:" << endl;
  cin >> f_heigth;

  f_cmi = f_mass / pow(f_heigth, 2);

  if (f_cmi < 17) {
    cout << "Muito abaixo do peso";
  } else if (f_cmi < 18.5) {
    cout << "Abaixo do peso";
  } else if (f_cmi < 25) {
    cout << "Peso normal";
  }

  else if (f_cmi < 30) {
    cout << "Acima do peso";
  } else if (f_cmi < 35) {
    cout << "Obesidade";
  } else if (f_cmi < 40) {
    cout << "Obesidade severa";
  } else {
    cout << "Obesidade mórbida";
  }
}
