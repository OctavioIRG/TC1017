#include <iostream>
#include <cmath>
using namespace std;
int uno, dos, suma, resta, multiplicacion, division;
int main ()
{
  cout << "ingresa el primer número"<< endl;
  cin >> uno;
  cout << "ingresa el segundo número"<< endl;
  cin >> dos;
  suma = uno+dos;
  resta=uno-dos;
  multiplicacion = uno*dos;
  division = uno/dos;
  cout << "Suma:  " <<  suma <<endl;
  cout << "Resta:  " <<  resta<< endl;
  cout << "Multiplicación:  " <<  multiplicacion<< endl;
  cout << "División:  " <<  division<< endl;
  return 0;
}
