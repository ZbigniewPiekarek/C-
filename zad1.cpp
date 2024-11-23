#include <iostream>
using namespace std;

class Komputer{
    public:
        string marka, model;
};

class PC:public Komputer{
    public:
        string rodzaj_obudowy;
};

class Laptop:public Komputer{
    public:
        string kolor_obudowy;
        float przekatna_ekranu;

    void laptop_wpisz_dane(string temp_kolor_obudowy,float temp_przekatna_ekranu){
        kolor_obudowy = temp_kolor_obudowy;
        przekatna_ekranu = temp_przekatna_ekranu;
    }

    void laptop_wyswietl_dane(){
	cout<<"---"<<endl;
        cout << "Kolor obudowy: "<<kolor_obudowy<<endl;
        cout << "Przekatna ekranu: "<<przekatna_ekranu<<endl;
    }
};



int main()
{
    string input_kolor_obudowy;
    float input_przekatna_ekranu;

    cout <<"Podaj kolor obudowy laptopu: ";
    cin >> input_kolor_obudowy;

    cout <<"Podaj przekatna ekranu laptopu: ";
    cin >> input_przekatna_ekranu;

    Laptop laptop1;

    laptop1.laptop_wpisz_dane(input_kolor_obudowy,input_przekatna_ekranu);
    laptop1.laptop_wyswietl_dane();
    system("pause");
}
