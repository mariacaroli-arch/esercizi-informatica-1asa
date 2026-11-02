#include<iostream>
#include<iomanip>
using namespace std;

int main()
{ float prezzoMensile=50;
  float prezzoAnnuale;
  int eta;
  bool societaSportiva;

  cout<<"Quani anni hai?";
  cin>>eta;
  if(eta<=12 || eta>=85)
  {
    return 0;
  }
  if(eta>=18 && eta<=30)
  {
    prezzoMensile *= 0.97;
    cout<<prezzoMensile;
  }
  cout<<"Fai parte di una societa sportiva?";
  cin>>societaSportiva;
  if(societaSportiva==true)
  {
    prezzoMensile *= 0.85;  }
prezzoAnnuale = prezzoMensile *12;    
cout<<prezzoAnnuale;

}