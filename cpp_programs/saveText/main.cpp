#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

string name, surname;
int phone;

int main()
{
    cout << "Please name:";
    cin>>name;
    cout << "Please surname:";
    cin>>surname;
    cout << "Please phone number:";
    cin>>phone;

    fstream plik; //tworzymy zmienn¹ plik
    plik.open("businessCard.txt", ios::out | ios::app); //jeśli dany plik nie istnieje program automatycznie go tworzy podczas zapisywania zmiennej
                                           // >>out - zapis do pliku<< a jeśli istniał to automatycznie go zastępuje
                                           //ios::app >> dopisywanie do pliku
    plik<<name<<endl;
    plik<<surname<<endl;
    plik<<phone<<endl;

    plik.close(); //zamykanie pliku obowiązkowe by zwolnić bufor

    //>>>>>>>>>> Odczyt z pliku <<<<<<<<<<

    plik.open("businessCard.txt", ios::in);

    if(plik.good() == false){ // sprawdzamy cy dany plik istnieje
                    cout<<"File does not exist!";
        exit(0); // koczymy program
    }

    string line;
    int line_number=1;
    while(getline(plik, line)){ //petla po to ze jesli jest linia w tekscie to zwraca true

            switch(line_number){
                case 1: name = line;
                    break;
                case 2: surname = line;
                    break;
                case 3: phone = atoi(line.c_str());
                    break;
            }
            line_number++;

    }
    plik.close();

    cout<<name<<endl;
    cout<<surname<<endl;
    cout<<phone<<endl;




    return 0;
}
