#include <iostream>
using namespace std;

class Pojazd{
    public:
        string marka, model;
        int rok_produkcji;
    Pojazd(){};
    Pojazd(string temp_marka, string temp_model, int temp_rok_produkcji){
        marka = temp_marka;
        model = temp_model;
        rok_produkcji = temp_rok_produkcji;
    }
};

class Autobus:public Pojazd{
    public:
        int miejsca_stojace, miejsca_siedzace;


    Autobus(string temp_marka,string temp_model,int temp_rok_produkcji,int temp_miejsca_stojace, int temp_miejsca_siedzace){
        marka=temp_marka;
        model=temp_model;
        rok_produkcji=temp_rok_produkcji;
        miejsca_stojace = temp_miejsca_stojace;
        miejsca_siedzace = temp_miejsca_siedzace;
    }

    Autobus(string temp_marka,string temp_model,int temp_rok_produkcji):Pojazd( temp_marka, temp_model, temp_rok_produkcji){}

    void wyswietl_dane_autobusu(){
        cout<<"---"<<endl;
        cout << "Marka: "<<marka<<endl;
        cout << "Model: "<<model<<endl;
        cout << "Rok produkcji: "<<rok_produkcji<<endl;
        cout << "Miejsca stojace: "<<miejsca_stojace<<endl;
        cout << "Miejsca siedzace: "<<miejsca_siedzace<<endl;
    }
};

int main()
{
    string marka, model;
    int rok_produkcji,miejsca_stojace, miejsca_siedzace;

    cout<<"Wprowadz marke: ";
    cin>>marka;

    cout<<"Wprowadz model: ";
    cin>>model;

    cout<<"Wprowadz rok produkcji: ";
    cin>>rok_produkcji;

    cout<<"Wprowadz liczbe miejsc stojacych: ";
    cin>>miejsca_stojace;

    cout<<"Wprowadz liczbe miejsc siedzacych: ";
    cin>>miejsca_siedzace;


    Autobus autobus1(marka,model,rok_produkcji,miejsca_stojace,miejsca_siedzace);
    autobus1.wyswietl_dane_autobusu();
    system("pause");
}
