#include <iostream>
#include <string>
#include <fstream>
#include "Paraula.h"
#include "TaulaParaules.h"
using namespace std;

// CONSTRUCTORS:
Paraula::Paraula(){
    a_paraula="";
    a_aparicions=0;
}

// CONSULTORS:
string Paraula::retornaParaula()const{
    return a_paraula;
}
int Paraula::retornaAparicions()const{
    return a_aparicions;
}
void Paraula::mostraParaula()const{
    cout << a_paraula;
}
bool Paraula::paraulaCoincident(string p)const{
    bool coin=false;
    return coin;
}

// MODIFICADORS:
bool Paraula::llegeixParaula(){
    string aux;
    cin >> aux;
    bool fi=false;
    fi=(aux=="#");
    if (!fi) a_paraula=aux;
    return fi;
}
void Paraula::llegeixParaula(ifstream& text, char& c){
    while (!text.eof() and esLletra(c)){
            majusculaAminuscula(c);
            a_paraula+=c;
            c=text.get();
    }
}
void Paraula::incrementaAparicions(){
    a_aparicions++;
}

// OPERADORS:
bool Paraula::operator>(const Paraula &p) const{
    return a_paraula > p.a_paraula;
}
bool Paraula::operator<(const Paraula &p) const{
    return not(*this > p or *this == p);
}
bool Paraula::operator==(const Paraula &p) const{
    return a_paraula==p.a_paraula;
}
bool Paraula::operator!=(const Paraula &p) const{
    return not(*this == p);
}
bool Paraula::operator<=(const Paraula &p) const{
    return not (*this > p or *this == p);
}
bool Paraula::operator>=(const Paraula &p) const{
    return (*this > p or *this == p);
}

// METODES PRIVATS DE CLASSE:
bool Paraula::esLletra(char c){
    return (((c>='a') and (c<='z')) or ((c>='A') and (c<='Z')));
}
void Paraula::majusculaAminuscula(char& c){
    if (c>='A' and c<='Z') c+=32;
}
