#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

double music (vector<double> shu){
  double c;
  cout << "Enter 10 numbers:" <<endl;
  cin>> c;

    for (unsigned int i=1; i<=10; i++){

    shu.push_back(c);
    if(i!=10){
    cout << "Enter another number: ";
    cin >> c;}}

  cout<< "You entered the next numbers:" <<endl;
    for(unsigned int i = 0; i < shu.size(); i++){
      cout << shu.at(i);
      cout << "  ";}

  double sum = 0.0, ave = 0.0, xMinusAve, powOftwo, bigSum = 0.0, bigSumDivided, squarerootthebaby, half;

  for(unsigned int i = 0; i < shu.size(); i++){
    sum = sum + shu.at(i);
    ave = (sum/shu.size());}
  cout<< endl;
  cout<< "The average of this numbers is = " <<ave <<endl;
  cout<< endl;
  cout<< "Each number minus the average is =" <<endl;
  for(unsigned int i = 0; i < shu.size(); i++){
    xMinusAve = (shu.at(i) - ave);
    cout<< " |" <<xMinusAve <<"| ";}

    cout <<endl <<"Each of those numbers to the power of two =" <<endl;
  for(unsigned int i = 0; i < shu.size(); i++){
    powOftwo = ((shu.at(i) - ave)*(shu.at(i) - ave));
    cout<< " |" <<powOftwo <<"| ";
  }
  cout <<endl <<" bigSum is the sumatory of the numbers to the power of two..." <<endl;
  for(unsigned int i = 0; i < shu.size(); i++){
    bigSum = bigSum + ((shu.at(i) - ave)*(shu.at(i) - ave));
  }
  cout <<"The bigSum is equal to: " <<"|" <<bigSum <<"|" <<endl;
  cout <<"Now we divide that number by the total number of elements which is ten." <<endl;
  bigSumDivided = (bigSum / shu.size());
  cout <<bigSumDivided <<endl;
  cout <<"Now you take that number, square root the baby and you got your standard deviation." <<endl;
  squarerootthebaby = sqrt (bigSumDivided);
  cout << "Which is... " <<squarerootthebaby <<endl;

  return 0.0;
}
vector<double> shu;

  int main(){
music(shu);
    return 0;
  }
