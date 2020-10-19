#include <iostream>

using namespace std;

float meters;

float inch(float i);

float yard(float y);

void foot(float f);


int main()
{
    cout << "Enter how many meters:" << endl;
    cin>>meters;

    cout<<"Inch: "<<inch(meters)<<endl;
    cout<<"Yard: "<<yard(meters)<<endl;
    foot(meters);

    return 0;
}


float inch(float i){// naglowek funkcji
    return i*39.3701; // cialo funkcji
}

float yard(float y){// naglowek funkcji
    return y*1.0936; // cialo funkcji
}

void foot(float f){// naglowek funkcji
    cout<<"Foot: "<<f*3.2808<<endl; // cialo funkcji
}
