#include<iostream>
#include<string>
using namespace std;

struct Persona{
    string nombres;
    int dia;
    int mes;
    int anio;
};
int main(){
    int n;
    cout<<"Ingrese la cantidad de personas ";
    cin>>n;
    cin.ignore();

    Persona personas[1000];

    for(int i=0; i<n; i++){
        cout<<"Persona "<<i+1<<endl;
        cout<<"Nombres: ";
        getline(cin,personas[i].nombres);
        cout<<"Dia de nacimiento: ";
        cin>>personas[i].dia;
        cout<<"Mes de nacimiento: ";
        cin>> personas[i].mes;
        cout<<"Anio de nacimiento: ";
        cin>> personas[i].anio;

        cin.ignore();
    }
    
    int mesbuscado;

    do{
        cout<<"Ingrese mes a buscar (1-12) o [0] para saltar: ";
        cin>>mesbuscado;
        if(mesbuscado==0){
            break;
        }
        cout<<" Cumpleaneros del mes "<<mesbuscado<<endl;
        int encontrados = 0;

        for(int i=0; i<n; i++){
            if(personas[i].mes == mesbuscado){
                cout<<"- "<<personas[i].nombres<<endl;
                encontrados++;
            }
        }

        if(encontrados == 0){
            cout<<" Nadie cumple anos en este mes"<<endl;
        }

    } while ( mesbuscado != 0);

    cout<<" Programa terminado"<<endl;
    return 0;

}
