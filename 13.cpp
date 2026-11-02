#include<iostream>
using namespace std;

int main ()
{
	int anni;
	string residenza;
	
	cout<<"Inserisci la regione di residenza: ";
	cin>>residenza;
	
	if(residenza!="Trentino")
	{
		cout<<endl<<"Non puoi acquistare l'abbonamento a Trentino Trasporti";
		return 0;
	}
	
	cout<<"Quanti anni hai?";
	cin>>anni;
}
