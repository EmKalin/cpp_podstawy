#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int number, numberOfUser; //liczba losowa, próba, liczba podana przez u¿ytkownika
int attempt = 0;
int main()
{
    cout << "Hi! I thought about a number in the field from 1 to 100" << endl;
    srand(time(NULL));  //funkcja srand przekazuje liczbê sekund fukcji rand
    number = rand()%100 + 1;

    cout<<number<<endl;

    while(number!=numberOfUser){
        attempt++;
        cout<<"Try to guess ("<<attempt<<" attempt):";
        cin>>numberOfUser;

        if(numberOfUser==number){
            cout<<"Great! You are winner! Win in attempt "<<attempt<<endl;
        }

        else if(numberOfUser<number){
            cout<<"Not enough. Try again"<<endl;
        }
        else if(numberOfUser>number){
            cout<<"Too much. Try again"<<endl;
        }
    }

    getchar();getchar(); //gdy otwieramy za pomoc¹ pliku exe to po zakoñczeniu nie zamyka siê odrazu
    return 0;
}
