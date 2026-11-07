#include<iostream>
using namespace std;

int main()
{
 float num1;
 float num2;
 float num3;

 cout<<"Inserisci il primo numero";
 cin>>num1;

 cout<<"Inserisci il secondo numero";
 cin>>num2;

 cout<<"Inserisci il terzo numero";
 cin>>num3;

 if(num1<num2 && num3<num2)
 {
    cout<<num2<<" è il numero più grande";
    return 0;
 }
 if(num1>num2 && num1>num3)
 {
    cout<<num1<<" è il numero più grande";
    return 0;
 }
 if(num2<num3 && num1<num3)
 {
  cout<<num3<<" é il numero più grande";
  return 0;
 }
}