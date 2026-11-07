#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
 float art1;
 float art2;
 float tot;

 cout<<"Quanto costa il primo articolo che hai comprato?";
 cin>>art1;
 cout<<"Quanto costa il secondo articolo che hai comprato?";
 cin>>art2;

 if(art1<art2)
 { 
    tot= art1 * 0.40 + art2;
 }
 if(art2<art1)
 {
    tot = art1 + art2 * 0.40; 
 }
 cout<<fixed<<setprecision(1)<<"questo è il prezzo finale:"<<tot;
    return 0;
}