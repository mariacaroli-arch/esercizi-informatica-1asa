#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
 int studenti;
 int giorni;
 float prezzoalbergo;
 float prezzoautobus = 200;
 float prezzocibo;
 float totale;
 float prezzomedio;

 cout<<"Quanti studenti parteciperanno?";
 cin>>studenti;
 cout<<"Quanti giorni sarà il viaggio d'instruzione?";
 cin>>giorni;

 if(studenti<20 || studenti>80)
 {
    return 0;
 }
 prezzoalbergo= studenti * 50;
 prezzocibo= 30 * studenti * giorni;
 totale= prezzoalbergo+ prezzoautobus + prezzocibo;
 
 if(totale>900)
 {
    totale*= 0.90;
 }
 prezzomedio=totale/studenti;
 cout<<fixed<<setprecision(3)<<"Il totale da pagare è:"<<totale<<endl<<"ogni studente dovrà pagare:"<<prezzomedio;
}