#include<iostream>
#include<iomanip> 
using namespace std;

int main ()
{
 int eta;
 int nBiglietti;
 int fila;
float prezzoFinale;
float prezzoInizio = 50;

 cout<<"Quanti anni hai?";
 cin>>eta;
 cout<<"Ok,quanti biglietti desideri acquistare?";
 cin>>nBiglietti;
 cout<<"In quale fila desideri essere? Ricorda che c'e ne sono 10.";
 cin>>fila;

 if(eta<=10) 
    {cout<<"Biglietto gratuito. Grazie";
    return 0;} 
    else 
    {
        if(eta>=16 && eta<=30)
        {
            prezzoInizio *= 0.97;
        } 
        if(fila==1 || fila==2)
        {
            prezzoInizio *= 1.3;
        }else if(fila==3 || fila==4)
        {
            prezzoInizio *= 1.1;
        }

        cout<<prezzoInizio;
        prezzoFinale = prezzoInizio * nBiglietti;
        if(nBiglietti>=10)
        {
            prezzoFinale *= 0.9;
        }

    }

    cout<<"Prezzo totale finale: "<<prezzoFinale;

}  

