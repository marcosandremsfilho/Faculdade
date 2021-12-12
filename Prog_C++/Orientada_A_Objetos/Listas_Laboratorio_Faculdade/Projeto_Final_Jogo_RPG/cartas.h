#include <iostream>

using namespace std;

#ifndef CARTAS_H
#define CARTAS_H

class cartas {
protected:
  int  _escolha;
public:
  cartas(int escolha) : _escolha{escolha} { }
  ~cartas() { }
};

#endif
