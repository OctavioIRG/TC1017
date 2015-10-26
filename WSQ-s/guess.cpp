#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main ()
{
  int res, c, r;
  srand (time(NULL));//Inicializador
  r = rand() % 100 + 1; //Generador del 1 al 100
      for (c=0;r!=res;c++)
     {
      cout << "Adivina el número que escogí" <<endl;
      cout <<"Escoge un número del 1 al 100" << endl;
      scanf ("%d",&res);
      if (res < r)
      {
        cout << "El número que escogiste es muy bajo, intenta otra vez."<< endl;
      }
      else if (res > r)
      {
        cout << "El número que escogiste es muy alto, intenta otra vez." << endl;
      }
      cout << endl;
    }
  cout << "Le atinaste!"<< endl;
  if (c == 1)
  cout << "Lo intestaste 1 vez.";
  else
  cout << "Lo intentaste  "<< c << "  veces.";
  return 0;
}
