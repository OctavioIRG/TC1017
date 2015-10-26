#include <iostream>
using namespace std;

int uno, dos;

int suma (int a, int b)
{
  return (a)+(b);
}
int resta (int a, int b)
{
  return (a)+(b);
}
int div (int a, int b)
{
  return (a)/(b);
}
int mult (int a, int b)
{
  return (a)*(b);
}

int main()
{
  cout << "Ingrese dos números enteros positivos" <<endl;
  cout << "Número 1" << endl;
  cin>> uno;
  cout << "Número 2" << endl;
  cin>> dos;
  if (uno < 0 || dos < 0)
  cout <<"Sólo números enteros positivos.";
cout<< suma (uno, dos);
  return 0;
}
