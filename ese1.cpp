#include<iostream>
#include<iomanip> 
using namespace std;

int main ()
{ 
   int annonascita;
   cout<<"In quale anno sei nato?" ;
   cin>>annonascita;
   
   if (annonascita <1883 || annonascita>2026) 
   { 
    cout<<"non e possibile che sei nato in queso anno";
    return 0;
}
  if( annonascita<=1900)
{ 
  cout<<"sei nato nella genrazione perduta \n";
  return 0;
}
  if(annonascita<=1927)
  {
    cout<<"sei nato nella greatest generation \n";
    return 0;
}
 if(annonascita<=1945)
 {
 cout<<"sei nato nella genrazione silenziosa \n";
 return 0;
 }

 if(annonascita<=1964)
 {
    cout<<"sei nato nella genrazione boomer \n";
    return 0;
 }
 if(annonascita<=1980)
 {
    cout<<"sei nato nella generazione x \n";
    return 0 ;
 }
 if(annonascita<=1996)
 {
    cout<<"sei nato nella generazione y \n";
    return 0;
 }
 if(annonascita<=2012)
 {
    cout<<"sei nato nella generazione z \n";
    return 0;
 }
 if(annonascita<=2026)
 {
    cout<<"sei nato nella generazione alpha \n";
    return 0;
   
}










}