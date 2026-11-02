#include<iostream>
using namespace std;

int main ()
{
	bool liceo;
	
	cout<<"Sei iscritto al Liceo Scientifico? ";
	cin>>liceo;
	
	cout<<endl<<"Hai risposto "<<(liceo ? "si'" : "no");
} 
