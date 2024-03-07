//Generatore di password in c++
//Developer: The_mantux

#include <iostream>

using namespace std;

int main(){

    string password;//password generata
    int lunghezza;//lunghezza della password

    //caratteri che formano la password
    string caratteri="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";

    cout<<"Inserisci la lunghezza della password: ";
    cin>>lunghezza;

    for(int i=0;i<lunghezza;i++){
        password+=caratteri[rand()%caratteri.length()];
    }

    cout<<endl;

    cout<<"Password generata: "<<password<<endl;
    cout<<"Non condividere la tua password con nessuno ;)"<<endl;

    system("pause");
    return 0;
}