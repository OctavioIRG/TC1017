#include <iostream>
using namespace std;

double babilonia(int x)
{
  long N = x;
  float r, k, guess = 1.0, NsG;
  //for(int i=1; i<8; i++) //OTRA VEZ, CUANTAS VECES SI ESO DEPENDE DE UNA VARIABLE AL FINAL. Yo creo que voy a terminar usando un while.
  while (true)
  {
    NsG = (N/guess);
    cout << NsG << endl;
    k = (guess+(N/guess));
    r = (1.0/2.0)*k; //POR QUÉ MOTIVO, RAZÓN O CIRCUNSTANCIA ME DA CERO!?... Ya supe.
    cout <<endl;
    guess = r;
    if (r==NsG)
    {
      break;
    }
  }
  return r;
}

int x;

int main(){
cout << "Introduce un número para saber su raíz cuadrada." << endl;
cout << "Número: ";
cin >> x;
cout << endl;
cout << babilonia(x) <<endl;
  return 0;
}
