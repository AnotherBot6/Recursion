#include <iostream>
using namespace std;

// 

int sumaDigitosNaturales(int n) {
  if (n == 0) {
    return 0;
  } else {
    return n + sumaDigitosNaturales(n - 1);
  }
}
int Challege3(int n) {
  int i = 1;
  if (i > n) {
    cout << "end" << endl;
  } else {

    cout << n << endl;

    return n = Challege3(n - 1);
  }
}
int aux(int n, int c) {
  int x = n - 1;
  int a = c - x;
  if (a > c) {
    cout << "end" << endl;
  } else {
    cout << a << endl;
    return n = aux(n - 1, c);
  }
};

int Challege2(int n) { aux(n, n); }



int main() {
  cout << "Suma de digitos del 7 al 1: " << endl;
  cout<<sumaDigitosNaturales(7)<<endl;
  cout << "Conteo de del 9 a 1: " << endl;
  Challege3(9);
  cout << "Conteo de del 1 a 8: " << endl;
  Challege2(8);
  return 0;
}
