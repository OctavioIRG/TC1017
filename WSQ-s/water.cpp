#include <iostream>
#include <cmath>
using namespace std;
int tempf;
double tempc;
int main ()
{
  cout << "Ingresa la temperatura en Farenheit" << endl;
  cin >> tempf;
  tempc = 5*((tempf-32)/9);
  cout << "La temperatura de  " << tempf;
  cout << "  grados Farenheit es  "<< tempc;
  cout << "  en grados celsius"<< endl;
  if (tempc >= 100)
  {
    cout << "El agua hierve a esta temperatura.";
  }
  else
  {
    cout << "El agua no hierve a esta temperatura.";
  }

  return 0;
}
