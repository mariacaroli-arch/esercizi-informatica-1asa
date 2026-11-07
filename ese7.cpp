#include<iostream>
using namespace std;
 
int main()
{
 string lettera;
 

  cout<<"inserisci una lettera -> ";
  cin>>lettera;
  
  if((lettera == "a") || (lettera == "e") ||(lettera == "i")||(lettera == "o")||(lettera == "u"))
  {
    cout<<lettera<<" è una vocale";
    return 1;
  }
  else
  {
   cout<<lettera<<" è una consonante";
   return 0;
  }
}