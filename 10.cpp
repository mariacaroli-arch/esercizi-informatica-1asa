#include<iostream>
using namespace std;

int main ()
{
	string residenza;
	
	cout<<"Inserisci la regione di residenza: ";
	cin>>residenza;
	
	if(residenza!="Trentino")	//trentino o TRENTINO non vengono accettati
		cout<<endl<<"Non puoi acquistare l'abbonamento a Trentino Trasporti";
}
