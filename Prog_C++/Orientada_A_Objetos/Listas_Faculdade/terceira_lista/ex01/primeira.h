#include <iostream>

using namespace std;

#ifndef PRIMEIRA_H
#define PRIMEIRA_H

class PrimeiraClasse
{
private:
  int num1, num2, s;

public:
  PrimeiraClasse ();
  PrimeiraClasse (int, int);
  void imprimeSoma();
  ~PrimeiraClasse();
};

#endif
