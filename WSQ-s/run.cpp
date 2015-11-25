#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
void Calculate (string file)
{
  string Datos, name = file;
  string Ciudad, Carretera, Precio;
  ifstream Archivo("93cars.dat.txt");
  cout<< "yay";
    if(Archivo.is_open())
    {
          cout<< "El archivo se ha cargado correctamente" << endl;
          float city, highway, price;
          double PromCiu = 0.0, PromCarr = 0.0, PromPre = 0.0;
          for(int i= 0; i<93; i++)
          {
                getline(Archivo,Datos);
                Precio = Datos.substr(42, 4);
                istringstream Convertir(Precio);
                Convertir >> price;
                PromCiu= PromCiu + price;
                Carretera = Datos.substr(55, 2);
                istringstream ConvertirOtro(Carretera);
                ConvertirOtro >> highway;
                PromCarr = PromCarr + highway;
                Ciudad= Datos.substr(52, 2);
                istringstream ConvertirOtroMas(Ciudad);
                ConvertirOtroMas >> city;
                PromCiu= PromCiu + city;
                getline(Archivo,Datos);
          }
          PromCiu = PromCiu / 3;
          PromPre = PromPre / 3;
          PromCarr = PromCarr / 3;

    Archivo.close();

cout<< "El promedio de millas por galón de gasolina en ciudad es: " << PromCiu << endl;
cout<< "El promedio de millas por galón de gasolina en carretera es: " << PromCarr << endl;
cout<< "El promedio de millas por galón de precios de carros es: " << PromPre << endl;
    }

}

string name;
int main ()
{
cin >> name;
Calculate("93cars.dat.txt");
  return 0;
}
