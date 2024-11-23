#include <iostream>
using namespace std;

class Dane{
    public:
        string imie, nazwisko;
        int wiek;
        float wynagrodzenie;
};

class Dyrektor:public Dane{};

class Nauczyciel:public Dane{
    public:
        string przedmiot;
};

class Wychowawca:public Dane{
    public:
        string klasa;
    void wpisz_dane_wychowawca(string input_imie, string input_nazwisko, int input_wiek, float input_wynagrodzenie, string input_klasa){
        imie = input_imie;
        nazwisko = input_nazwisko;
        wiek = input_wiek;
        wynagrodzenie = input_wynagrodzenie;
        klasa = input_klasa;
    };

    void wyswietl_dane_wychowawca(){
	cout<<"---"<<endl;
        cout << "Imie: "<<imie<<endl;
        cout << "Nazwisko: "<<nazwisko<<endl;
        cout << "Wiek: "<<wiek<<endl;
        cout << "Wynagrodzenie: "<<wynagrodzenie<<" zł"<<endl;
        cout << "Klasa: "<<klasa<<endl;
    }
};



class Sekretarka:public Dane{};

int main()
{
    Wychowawca wychowawca1;
    string imie, nazwisko, klasa;
    int wiek;
    float wynagrodzenie;

    cout<<"Wprowadz imie: ";
    cin >> imie;

    cout<<"Wprowadz nazwisko: ";
    cin >> nazwisko;

    cout<<"Wprowadz wiek: ";
    cin >> wiek;

    cout<<"Wprowadz wynagrodzenie: ";
    cin >> wynagrodzenie;

    cout<<"Wprowadz klase: ";
    cin >> klasa;

    cout<<"\n---\n";

    wychowawca1.wpisz_dane_wychowawca(imie,nazwisko,wiek,wynagrodzenie,klasa);
    wychowawca1.wyswietl_dane_wychowawca();
    system("pause");
}
