#ifndef PARAULA_H
#define PARAULA_H
using namespace std;

class Paraula{
    public:
    // CONSTRUCTORS:
        Paraula();
            // Pre:-- Pos: paraula=0 i aparicions=0;
    // CONSULTORS:
        string retornaParaula() const;
            // Pre:-- Pos: retonra a_paraula;
        int retornaAparicions() const;
            // Pre:-- Pos: retorna el nombre d'paricions de a_paraula
        void mostraParaula() const;
            // Pre:-- Pos: mostra la paraula per pantalla
        bool paraulaCoincident(string p) const;
            // Pre:-- Pos: retorna cert si la paraula coincideix amb alguna de la taulaParaules.
    // MODIFICADORS:
        bool llegeixParaula();
            // Pre:-- Pos: retorna cert si llegeix "#" en cas contrari guarda la paraula;
        void llegeixParaula(ifstream &text, char& c);
            // Pre:-- Pos: retorna cert si llegeix EOF en cas contrari guarda la paraula;
        void incrementaAparicions();
            // Pre:-- Pos: incrementa +1 a_aparicions;
    // OPERADORS:
        bool operator > (const Paraula &p) const;
            // Pre:-- Pos: cert si la paraula actual es > que p.
        bool operator < (const Paraula &p) const;
            // Pre:-- Pos: cert si la paraula actual es < que p.
        bool operator == (const Paraula &p) const;
            // Pre:-- Pos: cert si la paraula actual es = que p.
        bool operator != (const Paraula &p) const;
            // Pre:-- Pos: cert si la paraula actual es != que p.
        bool operator <= (const Paraula &p) const;
            // Pre:-- Pos: cert si la paraula actual es <= que p.
        bool operator >= (const Paraula &p) const;
            // Pre:-- Pos: cert si la paraula actual es >= que p.
    private:
    // METODES PRIVATS DE CLASSE
        static bool esLletra (char c);
            // Pre:-- Pos: cert si c es una lletra.
        static void majusculaAminuscula (char& c);
            // Pre:c  Pos: si c es majuscula el converrteix a minuscula.

    // ATRIBUTS:
        string a_paraula;   // Paraula
        int a_aparicions;   // Aparicions de la paraula
};

#endif // PARAULA_H
