#include <iostream>
#include <fstream>
#include "TaulaParaules.h"
using namespace std;

bool comprovaInformacioLlegida(int nParaules){
    // Pre: nParaules:enter>=0
    // Pos: retorna cert si nParaules!=0;
    bool continua=true;
    if (nParaules==0){
        cout << "NO HI HA PARAULES A CERCAR";
        continua=false;
    }
    return continua;
}
bool obraFitxer (ifstream& file){
    // Pre: File:ifstream buit.
    // Pos: File es el fitxer obert.
    bool obert=true;
    string file_name;   //Entrada
    cout << "INTRODUEIX EL NOM DEL FITXER A PROCESSAR:" << endl;
    cin >> file_name;
    file.open(file_name.c_str());
    if (!file.is_open()){
        cout << "NO S'HA POGUT OBRIR EL FITXER" << endl;
        obert=false;
    }
    return obert;
}
int main(){
    cout << "MOTS D'INTERES SEPARATS PER ESPAIS I ACABANT AMB #:" << endl;
    TaulaParaules interes;
    interes.llegeixText();
    if (comprovaInformacioLlegida(interes.retornaNombreParaules())){
        ifstream file;
        if (obraFitxer(file)){
            TaulaParaules text;
            text.llegeixFitxer(file, interes);
        }
    }
    return 0;
}
