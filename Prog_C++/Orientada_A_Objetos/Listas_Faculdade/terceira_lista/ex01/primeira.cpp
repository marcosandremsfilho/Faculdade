#include "primeira.h"

PrimeiraClasse :: PrimeiraClasse(int x1, int x2)
{
  num1 = x1;
  num2 = x2;
}

void PrimeiraClasse :: imprimeSoma()
{
  s = num1 + num2;
  cout << "numeros inicializados! \n" << "O teste de adicao e: " << s;
}

PrimeiraClasse :: ~PrimeiraClasse()
{
  cout << "\nObjeto destruido!";
}
