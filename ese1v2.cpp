#include<iostream>
#include<iomanip> 
using namespace std;

int main ()
{ 
   int annonascita;
   cout<<"In quale anno sei nato?" ;
   cin>>annonascita;

   if (annonascita>1965) 
   { 
     if (annonascita>1997)
     { 
        if (annonascita>2026)
        { 
           cout<<"non e possibile che sei nato in queso anno";
           return 0;
        }
        else if (annonascita>2013)
        { 
           cout<<"sei nato nella generazione alpha \n";
           return 0;
        } 
        else if (annonascita>1997)
        { 
           cout<<"sei nato nella generazione z \n";
           return 0;
        }
     } 
       else if (annonascita>1981 )
       {
         cout<<"sei nato nella generazione y \n";
           return 0;
         
       } else { cout<<"sei nato nella generazione x \n";
           return 0;
      }
       
} else if (annonascita>1946)
   {
      cout<<"sei nato nella generazione boomer \n";
      return 0;
   } else if (annonascita>1928)
   {
      cout<<"sei nato nella genrazione silenziosa \n";
      return 0;
   } else if (annonascita>1901)
   {
      cout<<"sei nato nella greatest generation \n";
      return 0;
   } else if (annonascita>1882)
   {
      cout<<"sei nato nella genrazione perduta \n";
      return 0;
   } else 
   { 
      cout<<"non e possibile che sei nato in queso anno";
      return 0;
   }













}