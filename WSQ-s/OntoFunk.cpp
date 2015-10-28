#include <iostream>
using namespace std;
int numero, otro, temporal=1;
char yn = 's';
long long Big; //BigInteger

long long fatorialDe( int x){
  for (int i=x ; i>1; i--){
    temporal = temporal*x;
    /*
    cout<< x <<"   ";
    cout<< temporal <<endl;*/
    x--;}
  }
int main(){
  do
  {
cout << "Ingrese un númeor para factorializarlo" <<endl;
cout << "Pero que sea entero positivo, si no, no funciona esto..." <<endl;
cout <<endl;
cout << "Vas" <<endl;
cin >> numero;
cout << "El factorial de " <<numero <<" es:  " <<endl;
cout<<fatorialDe(numero) <<endl;
do
{
cout<< "Quieres intentarlo otravez?, responde s/n (sí o no)."<<endl;
	cin >> yn;
if(yn!='s'&& yn!='S'&&yn!='n'&&yn!='N')
	cout << endl << "Sí o no... 's' o 'n'" << endl << "Inténtalo otravez!!" << endl << endl;
}while(yn!='s' && yn!='S' && yn!='n' && yn!='N');
}while (yn=='s' || yn=='S');


	cout << "Okay, I'm outta here...." << endl << endl;

  return 0;
}
