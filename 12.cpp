#include<iostream>
using namespace std;

main ()
{
	bool liceo;
	
	cout<<"Sei iscritto al Liceo Scientifico? ";
	cin>>liceo;
	
	cout<<endl<<"Hai risposto "<<(liceo ? "si'" : "no");
} 
