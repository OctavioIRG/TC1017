#include <iostream>
#include <vector>

using namespace std;

void meter (int x, vector<int> v){
  v.push_back(x);
}

int main (){
/*
  Format:
  vector<DataType> nameOfVector ===> creates a new vector
  myVector.push_back(value) ===> adds an element to the END of the vector (also resizes it)
  myVector.at(index) ===> returns the value AT the especified index number
  myVector.size() ===> returns an unsigned interger equal to the number of elements
  myVector.begin() ===> reads vector from first element (index 0)
  myVector.insert(myVector.begin() + interger, new value) ===> adds an element BEFORE specified index number
  myVector.erase(myVector.begin() + interger) ===> erase an element AT the specified index
  myVector.clear() ===> removes all values from the vector
  myVector.empty() ===> returns a boolean value if wether vector is empty
*/

  vector<int> myVector;

  myVector.push_back(1);
  myVector.push_back(1);
  myVector.push_back(1);
  myVector.push_back(1);
  myVector.push_back(1);

  cout<< "The vector's values are: " <<endl;

  for(unsigned int i = 0; i < myVector.size(); i++){
    cout << myVector.at(i);
    cout <<endl;
  }
  myVector.insert(myVector.begin()+4, 9);
  myVector.erase(myVector.begin());
  cout<< "The vector's values are: " <<endl;

  for(unsigned int i = 0; i < myVector.size(); i++){
    cout << myVector.at(i);
    cout <<endl;
  }
  if(myVector.empty())
    cout<< "It is true baby... it is empty."<<endl;
  else
    cout<< "No darling, it is full."<<endl;
  myVector.clear();
  cout <<"clearing here" <<endl;
  if(myVector.empty())
    cout<< "It is true baby... it is empty."<<endl;
  else
    cout<< "No darling, it is full."<<endl;

  return 0;
}
