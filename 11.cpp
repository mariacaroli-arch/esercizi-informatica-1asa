#include<iostream>
using namespace std;

int main ()
{
	bool liceo;
	
	cout<<"Sei iscritto al Liceo Scientifico? ";
	cin>>liceo;
	
	if(liceo==true)		//in che altro modo posso scrivere?
		cout<<endl<<"Hai risposto si' \n";
	else
		cout<<endl<<"Hai risposto no \n";
}
