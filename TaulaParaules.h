#ifndef TAULAPARAULES_H
#define TAULAPARAULES_H
#include "Paraula.h"
using namespace std;

class TaulaParaules{
    public:
    // CONSTANTS DE LA CLASSE:
        static const int MAX_PARAULES=100;

    // CONSTRUCTORS:
        TaulaParaules();
            // Pre:-- Pos: a_nParaules=0;

    // CONSULTORS
        int retornaNombreParaules();
            // Pre:-- Pos: Retorna a_nParaules.

    // MODIFICADORS:
        void llegeixText();
            // Pre:-- Pos: Llegeix el text fins a llegir "#"
        void llegeixFitxer(ifstream& text, TaulaParaules p);
            // Pre:-- Pos: Llegeix el fitxer fins a fi EOF;
    private:
    // METODES DE CLASSE:
        static bool esLletra (char c);
            // Pre:-- Pos: cert si c es una lletra.
        static void passaSeparadors(ifstream& text, char& c);
            // Pre:-- Pos: Retorna la sequencia llegida fins la primera lletra de la seguent paraula;

    // ATRIBUTS:
        Paraula a_p[MAX_PARAULES];  // Vector de Paraules del text
        int a_nParaules;            // Nombre de paraules que conte el vector
};

#endif // TAULAPARAULES_H
