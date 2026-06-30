#include<iostream>
#include<string>
using namespace std;

struct Persona{
    string nombres;
    string DNI;
    int edad;
};

int main(){
    int n;
    cout<<"Ingrese la cantidad de personas: ";
    cin>>n;
    cin.ignore;

    Persona personas[1000];

    int mayores = 0;
    int suma = 0;

    for(int i=0; i<n; i++){
        cout<<" Datos de la persona: "<<i+1<<endl;
        cout<<"Nombres: ";
        getline(cin,personas[i].nombres);
        cout<<"DNI: ";
        cin>>personas[i].DNI;
        cout<<"Edad: ";
        cin>>personas[i].edad;

        cin.ignore();

        suma = suma + personas[i].edad;

        if(personas[i].edad > 50){
            mayores++;
        }
    }




}