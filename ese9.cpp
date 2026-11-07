#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
 float prezzo;
 float totale;

 cout<<"Quale è il prezzo netto del prodotto?";
 cin>>prezzo;

 prezzo *= 0.95;
 if(prezzo>100)
 {
    totale=prezzo * 1.22;
    cout<<"il prezzo é:"<<totale;
    return 0;
 }
 else
 {
  cout<<"il prezzo è:"<<prezzo;
  return 0;
 }
}