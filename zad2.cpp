#include <iostream>
using namespace std;

class Komputer{
    public:
        string marka, model;
};

class PC:public Komputer{
    private:
        string rodzaj_obudowy;
};

class Laptop:public Komputer{
    private:
        string kolor_obudowy;
        float przekatna_ekranu;

    public:

    string get_kolor_obudowy(){
        return kolor_obudowy;
    }

    float get_przekatna_ekranu(){
        return przekatna_ekranu;
    }

    void set_kolor_obudowy(string temp_kolor_obudowy){
        temp_kolor_obudowy = kolor_obudowy;
    }

    void set_przekatna_ekranu(float temp_przekatna_ekranu){
        temp_przekatna_ekranu = przekatna_ekranu;
    }

    Laptop(string temp_kolor_obudowy,float temp_przekatna_ekranu){
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

    Laptop laptop1(input_kolor_obudowy,input_przekatna_ekranu);

    laptop1.laptop_wyswietl_dane();
    system("pause");
}
