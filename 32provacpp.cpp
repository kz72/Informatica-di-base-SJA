#include <iostream>
#include <string>
using namespace std;
class Persona {
protected:
    string nome;
    int eta;
public:
    void leggi() {
        cout << "nome: ";
        getline(cin, nome);
        cout << "eta: ";
        cin >> eta;
        cin.ignore();
    }
    void stampa() const {
        cout << "nome = " << nome << "\n";
        cout << "eta = " << eta << "\n";
    }
};
class Lavoratore : public Persona {
    double soldi;
public:
    void leggi2() {
        leggi();
        cout << "stipendio: ";
        cin >> soldi;
    }
    void stampa2() const {
        stampa();
        cout << "stipendio = " << soldi << "\n";
    }
};
int main() {
    Lavoratore x;
    x.leggi2();
    cout << "--- dati ---\n";
    x.stampa2();
    return 0;
}