#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
string Read;
string Banana = "banana";
char Myfile[50];
int z = 0;
int y = 0;
int x = 0;
cout << "Escribe el documento";
cin >> Myfile;

ifstream read_file (Myfile);
if (read_file.is_open()){
while (getline(read_file , Read)){
z = 0;
while (n < Read.length()) {
char letra = Read[n];
if ( letra == 'B' || letra== 'b'){
y = z + 1;
char letra = Read[y];
if (letra == 'A' || letra== 'a'){
y++;
char letra = Read[y];
if (letra == 'N' || letra== 'n'){
y++;
char letra = Read[y];
if (letra == 'A' || letra== 'a'){
y++;
char letra = Read[y];
if (letra == 'N' || letra== 'n'){
y++;
char letra = Read[y];
if (letra == 'A' || letra== 'a') {
x++;
} } } } } }
n = n + 1;
} }
read_file.close();
}
else{
cout << "error, no hay archivo" << endl;
}
cout << "Se ecnocntraron " << x << " veces la palabra banana" << endl;
return 0;
}
