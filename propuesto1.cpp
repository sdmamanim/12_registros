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
        getline(cin, empleados[i].nombres);
        cout<<"Sexo: ";
        cin>>empleados[i].sexo;
        cout<<"Sueldo: ";
        cin>>empleados[i].sueldo;
        cin.ignore();
    }
    int mayor = 0;
    int menor = 0;

    for( int i=1; i<n; i++){
        if(empleados[i].sueldo>empleados[mayor].sueldo){
            mayor = i;
        }
        if(empleados[i].sueldo < empleados[menor].sueldo){
            menor = i;
        }
        
    }

    cout<< "EMPLEADO CON MAYOR SUELDO:"<<endl;
    cout<<"Nombres: "<<empleados[mayor].nombres<<endl;
    cout<<"Sexo: "<<empleados[mayor].sexo<<endl;
    cout<<"Sueldo: "<<empleados[mayor].sueldo<<endl;

    cout<<" EMPLEADO CON EL MENOR SUELDO:"<<endl;
    cout<<"Nombres: "<<empleados[menor].nombres<<endl;
    cout<<"Sexo: "<<empleados[menor].sexo<<endl;
    cout<<"Sueldo: "<<empleados[menor].sueldo<<endl;

    return 0;
}

