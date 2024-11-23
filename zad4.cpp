#include <iostream>
using namespace std;

class Dane{
    private:
        string imie, nazwisko;
        int wiek;
        float wynagrodzenie;
    public:
        string getImie(){
            return imie;
        }

        void setImie(string temp_imie){
            temp_imie = imie;
        }

        string getNazwisko(){
            return nazwisko;
        }

        void setNazwisko(string temp_nazwisko){
            temp_nazwisko = nazwisko;
        }

        int getWiek(){
            return wiek;
        }

        void setWiek(int temp_wiek){
            temp_wiek = wiek;
        }

        float getWynagrodzenie(){
            return wynagrodzenie;
        }

        void setWynagrodzenie(string temp_wynagrodzenie){
            temp_wynagrodzenie = wynagrodzenie;
        }
};

class Dyrektor:public Dane{};

class Nauczyciel:public Dane{
    public:
        string przedmiot;
};

class Wychowawca:public Dane{
    public:
        string klasa;
        Dane Dane1;
        string imie = Dane1.getImie();
        string nazwisko = Dane1.getNazwisko();
        int wiek = Dane1.getWiek();
        float wynagrodzenie = Dane1.getWynagrodzenie();

    Wychowawca(string input_imie, string input_nazwisko, int input_wiek, float input_wynagrodzenie,string input_klasa){
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

    Wychowawca wychowawca1(imie,nazwisko,wiek,wynagrodzenie,klasa);

    wychowawca1.wyswietl_dane_wychowawca();
    system("pause");
}
