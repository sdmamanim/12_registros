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
    
}