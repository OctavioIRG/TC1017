#include <iostream>
#include <iomanip>
using namespace std;

double factorial(int x)
{
  double resultado = 1.0;
  for (int i = 1; i <= x; i++)
      {
      if (x == 0)
      return resultado;
      else
      resultado = resultado * i;
      }
  return resultado;
}

double calculate_e(int precision)
{
  double  resultado1 = 0.0, resultado2 = 1.0;
  for(int i= 1; i<1000 ; i++)
    {
      resultado1 = resultado2;
      resultado2 = resultado1 + (1/factorial(i));   //euler = (1+(1/factorial of i));
    }
    cout << fixed << setprecision(precision) << resultado2 << endl;
    return resultado1;
}

int x = 0;

int main()
{
  cin>> x;
  cout << calculate_e(x);
  return 0;
}
