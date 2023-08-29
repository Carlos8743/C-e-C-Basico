#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <iostream>

using namespace std;

class Conta
{
private:

   int id;
   string nome;
   double saldo;

public:
Conta(int _id, string _nome, double _saldo);
~Conta();
    void setid(int _id);
    int getid();

    void setnome( string _nome);
    string getnome();

    void setsaldo( double _saldo);
    double getsaldo();

};
Conta::Conta(int _id, string _nome, double _saldo){
    id = _id;
    nome = _nome;
    saldo = _saldo;

   }

Conta::~Conta(){
 cout << "Classe Destruida";
}

void Conta::setid(int _id){
    id = _id;
}
int Conta::getid(){
    cout << id << "\n"; 
    return id; 
}

void Conta::setnome(string _nome){
    nome = _nome;
}
string Conta::getnome(){
    cout << nome << "\n"; 
    return nome;  
}

void Conta::setsaldo(double _saldo){
    saldo = _saldo; 
}
double Conta::getsaldo(){
    cout << saldo << "\n"; 
    return saldo;  
}

int main(){
   Conta Conta_USU = Conta(100, "Carlos", 1200.5); 
   Conta_USU.getid();
   Conta_USU.getnome();
   Conta_USU.getsaldo();

   
   Conta_USU.~Conta();

}