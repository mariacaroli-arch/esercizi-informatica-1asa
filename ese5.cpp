#include <iostream>
#include <string>
using namespace std;

int main()
{
  float prezzoPartenza = 100;
  string continente;
  bool TravelCard;
  int posto;

  cout << "Hai la Travel Card? (1 = si, 0 = no) ";
  cin>>TravelCard;
  if(TravelCard)
  {
    prezzoPartenza *= 0.80;
  }

  cout << "Da quale continente provieni? ";
  cin >> continente;
  if(continente == "Europa")
  {
    prezzoPartenza *= 0.97;
  }

  cout << "Che tipo di posto vuoi? (1 = business class, 2 = prima classe, 3 = economy): ";
  cin >> posto;
  if(posto == 1)
  {
    prezzoPartenza *= 0.90;
  }

  cout << "Il prezzo finale del viaggio e': " << prezzoPartenza << endl;
  return 0;
}
