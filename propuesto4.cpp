#include<iostream>
#include<string>
using namespace std;

struct Atleta{
    string nombres;
    string pais;
    string disciplina;
    int medallas;
}

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
    
}