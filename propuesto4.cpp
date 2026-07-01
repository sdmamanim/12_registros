#include<iostream>
#include<string>
using namespace std;

struct Atleta{
    string nombres;
    string pais;
    string disciplina;
    int medallas;
};

int main(){
    int n;
    cout<<"Ingrese la cantidad de Atletas: ";
    cin>>n;
    cin.ignore();

    Atleta atletas[1000];

    for(int i=0; i<n; i++){
        cout<<" Atleta"<< i+1<<endl;
        cout<<"Nombres: ";
        getline(cin,atletas[i].nombres);
        cout<<"Pais: ";
        getline(cin,atletas[i].pais);
        cout<<"Disciplina: ";
        getline(cin,atletas[i].disciplina);
        cout<<" Numero de medallas: ";
        cin>>atletas[i].medallas;

        cin.ignore();
    }

    string buscado;
    cout<< " Ingrese el pais que desea buscar: "<<endl;
    getline(cin,buscado);

    cout<<" ATLETAS REGISTRADOS DE "<< buscado <<endl;

    int mayor = 0;
    int contadorpais = 0;

    for( int i=0; i<n; i++){
        if( atletas[i].pais == buscado ){
            cout<<"-"<<atletas[i].nombres<<endl;
            cout<<"Disciplina: "<<atletas[i].disciplina<<endl;
            cout<<"Medallas: "<<atletas[i].medallas<<endl;
            contadorpais++;

            if( atletas[i].medallas > atletas[mayor].medallas){
                mayor = i;
            }

        }
    }

    if( contadorpais > 0){
        cout<< "ATLETA DEL PAIS CON MAS MEDALLAS:"<<endl;
        cout<<"Nombre: "<<atletas[mayor].nombres<<endl;
        cout<<"Disciplina: "<<atletas[mayor].disciplina<<endl;
        cout<<"Total de medallas: "<<atletas[mayor].medallas<<endl;
    }else{
        cout<<" no se registraron atletas para el pais: "<<buscado<<endl;

    }

    return 0;
}