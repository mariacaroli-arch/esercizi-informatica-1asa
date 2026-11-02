#include<iostream>
#include<iomanip>
using namespace std;

int main()
{ float prezzoMensile;
  float prezzoAnnuale= prezzoMensile * 12;
  int eta;
  bool societaSportiva;

  cout<<"Quani anni hai?";
  if(eta<=12 && eta>=85)
  {
    return 0;
  }
  if(eta>=18 && eta<=30)
  {
    prezzoMensile *= 0.97;
    cout<<prezzoMensile;
  }
  if(societaSportiva==true)
  {
    prezzoMensile *= 0.85;  }
cout<<prezzoAnnuale;

}