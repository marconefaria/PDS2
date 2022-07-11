#ifndef GET_MAX_H
#define GET_MAX_H

#include <iostream>
#include <bitset>

/**
  * \ brief Esta classe representa um conjunto de bits, ou seja, um conjunto representado como um mapa
  * de bits. O conjunto tem capacidade para armazenar 32 elementos. Por exemplo, o conjunto
  * <|||| ----------------------------> é a representação binária do número
  * 15, e significa que os elementos 1, 2, 3 e 4 estão no conjunto. Similarmente,
  * o conjunto <- || ----------------------------> é a representação binária de
  * o número 12, e significa que os elementos 3 e 4 estão no conjunto.
*/
struct BitSet {
    BitSet(unsigned value): _set(value) {}
    const unsigned _set;
    friend std::ostream & operator<<(std::ostream& os, const BitSet& i) {
        const int limit = sizeof(unsigned) * 8;
        os << '<';
        for (int aux = 0; aux < limit; aux++) {
        unsigned mask = 1 << aux;
        if (i._set & mask) {
            os << "|";
        } else {
            os << "-";
        }
        }
        os << '>';
        return os;
    }
/**
    * \ brief compara dois conjuntos de bits. Um conjunto de bits b1 é maior ou igual a
    * outro conjunto de bits b2 se b1 contiver todos os bits em b2. Por exemplo, o
    * conjunto de bits representado por 15 é maior que o conjunto de bits representado por 12.
    * No entanto, o conjunto de bits 6 não é maior do que o conjunto de bits 3, porque o
    * primeiro não contém o primeiro elemento, que está no último.
    * \ return true se bit_set1 for maior que bit_set2
    */
   // TODO: implemente este operador.
};

/**
  * \ brief A representação de um intervalo inteiro. Um intervalo inteiro tem um
  * limite inferior (lado esquerdo) e limite superior (lado direito). Por exemplo,
  * o intervalo (2, 6) contém todos os elementos de 2 a 6, incluindo estes
  * dois.
*/
struct Interval {
    Interval(int left, int right): _l(left), _r(right) {}
    const int _l;
    const int _r;
    friend std::ostream & operator<<(std::ostream& os, const Interval& i) {
        os << '(' << i._l << ", " << i._r << ')';
        return os;
    }
    /**
        * \ brief compara dois intervalos para ver se o primeiro é maior ou igual
        * o segundo. Um intervalo (a1, a2) é maior ou igual a outro intervalo
        * (b1, b2) se a1 <= b1 e a2> = b2.
        * \ return true se o intervalo1 for maior ou igual ao intervalo2
        */
    // TODO: implemente este operador.
};

/**
  * \ brief Retorna o maior de dois elementos, ou um padrão, se nenhum dos
  * eles é o maior.
  */
template <class T>
T GetMaxDefault (T a, T b, T dflt) {
    // TODO: implement this generic function.
    return (a >= b ? a : dflt);
};

template <> Interval GetMaxDefault<Interval>(Interval a, Interval b, Interval dflt) {
    int r, l;
    r = a._r >= b._r ? a._r : dflt._r;
    l = a._l >= b._l ? a._l : dflt._l;

    Interval i(r,l);
    return i;
}

template <> BitSet GetMaxDefault<BitSet>(BitSet a, BitSet b, BitSet dflt) {
    std::bitset<32>(a._set);
    std::bitset<32>(b._set);
    std::bitset<32>(dflt._set);

    return (a._set >= b._set ? a._set : dflt._set);
}

#endif