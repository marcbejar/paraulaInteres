#include <iostream>
#include <fstream>
#include "TaulaParaules.h"
using namespace std;

// CONSTRUCTORS:
TaulaParaules::TaulaParaules(){
    a_nParaules=0;
    for (int i=0; i<a_nParaules; i++) a_p[i]=Paraula();
}

// CONSULTORS:
int TaulaParaules::retornaNombreParaules(){
    return a_nParaules;
}

// MODIFICADORS:
void TaulaParaules::llegeixText(){
    bool fi=a_p[a_nParaules].llegeixParaula();
    while(!fi){
        a_nParaules++;
        fi=a_p[a_nParaules].llegeixParaula();
    }
}
void TaulaParaules::llegeixFitxer(ifstream& text, TaulaParaules p){
    Paraula aux;
    char c;
    text.get(c);
    while(!text.eof()){
        aux=Paraula();
        aux.llegeixParaula(text, c);
        passaSeparadors(text, c);
    }
}

// METODES DE CLASSE:
bool TaulaParaules::esLletra(char c){
    return ((c>='A' and c<='Z') or (c>='a' and c<='z'));
}
void TaulaParaules::passaSeparadors(ifstream& text, char& c){
    while(!esLletra(c) and !text.eof()){
        c=text.get();
    }
}
