#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int studenti;
    int giorni;
    float prezzoAlbergo;
    float prezzoAutobus = 200;
    float prezzoCibo;
    float totale;
    float prezzoMedio;

    cout << "Quanti studenti parteciperanno?";
    cin >> studenti;
    cout << "Quanti giorni sarà il viaggio d'instruzione?";
    cin >> giorni;

    // Il viaggio è previsto per gruppi composti da 20 a 80 studenti.
    if (studenti < 20 || studenti > 80) {
        return 0;
    }

    // Calcola le spese dell'albergo e del cibo per tutto il gruppo.
    prezzoAlbergo = studenti * 50;
    prezzoCibo = 30 * studenti * giorni;
    totale = prezzoAlbergo + prezzoAutobus + prezzoCibo;

    // Applica uno sconto del 10% se la spesa complessiva supera 900 euro.
    if (totale > 900) {
        totale *= 0.90;
    }

    prezzoMedio = totale / studenti;

    cout << fixed << setprecision(3)
         << "Il totale da pagare è:" << totale << endl
         << "ogni studente dovrà pagare:" << prezzoMedio;
}