#include <iostream>
using namespace std;
int n1, n2, sum = 0, temp;
void OrderPlease(int &a, int &b) //Order the numbers
{
    if(a>b)
    {
        temp = a;
        a = b;
        b = temp;
    }
}
int main()
{
  cout<< "Enter two numbers and I will calculate the sum of all the intergers from the lowest number to the highest number" <<endl;
  cout<< "First number: ";
  cin>> n1;
  cout<< endl;
  cout<< "Second number: ";
  cin>> n2;
  cout<< endl;

  int out1 = n1;
  int out2 = n2;
  OrderPlease( out1, out2);

  cout<< "The sum of intergers between " <<out1 << " and " <<out2 << " is ";

  while (out1 <= out2-1)
  {
    (sum=sum+out1);
    (out1=out1+1);
   }
  cout<<(n1+sum) <<endl;
  return 0;
}
