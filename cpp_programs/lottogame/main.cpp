#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;
int number;
int main()
{
    cout << "Hi! The draw will start in 3 seconds" << endl;
    Sleep(3000); //funkcja usypia program na wartoœæ ms

    srand(time(NULL));

    for(int i=0;i<6;i++){
        number=rand()%49+1;
        Sleep(1000);
        cout<<number<<"\a"<<endl;
    }
    return 0;
}
