#include<iostream>
#include<string>
using namespace std;

struct Empleado{
    string nombres;
    char sexo;
    double sueldo;
};

int main(){
    int n;
    cout<<"Ingrese la cantidad de trbajadores: ";
    cin>>n;

    cin.ignore();
    Empleado empleados[1000];

    for(int i=0; i<n; i++){
        cout<<"Trabajador "<<i+1<<endl;

        cout<<"Nombres: ";
        getline(cin.empleados[i].nombres);
        cout<<"Sexo: ";
        cin>>empleados[i].sexo;
        cout<<"Sueldo: ";
        cin>>empleados[i].sueldo;
        cin.ignore();
    }

}

