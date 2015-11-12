#include <iostream>
using namespace std;

void OrderPlease(int &a, int &b) //Ordenar los números de mayor a menor
{
    if(a>b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
}

int gdc(int x, int y)
{
  OrderPlease(x,y);
  cout<<x <<endl; //IMPRIME 10
  cout<<y <<endl; //IMPRIME 45
  cout<<"----------"<<endl;
  int q, r;//type int, forzosamente para que funcione el módulo.
  //for(int i=0; i<10; i++) //Cuántas veces?? hasta que r sea cero...
  while(true)
  {
    q = (y/x);
    //cout << q << endl; // IMPRIME COEFICIENTE.
    r = (y%x);//módulo
    //cout << r << endl; //IMPRIME MÓDULO.
    y = x;
    x = r;
    if((y%x)==0)
    {
        cout<<"GDC---  " <<x<<endl;
        break;
    }
  }
  return 0;
}

int x,y;

int main(){
  cout<< "Greatest Common Divisor Calculator 3000." <<endl;
  cout << "Type two numbers to display their GDC" <<endl;
  cout << "X--> ";
  cin >> x;
  cout << "Y--> ";
  cin >> y;

  cout<<gdc(x,y);
  return 0;
}
