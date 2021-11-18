#include "cliente.h"
#include "cliente.cpp"

int main()
{
  Cliente marcos("Marcos", 20, "Joao Nunes de Oliveira");
  Conta contaDoMarcos(marcos, 997515503, 500, 300);
  ContaEspecial contaEspecialDoMarcos(marcos, 997515503, 23761273, 300, 200);

  marcos.imprime();
  contaDoMarcos.imprime();
  contaDoMarcos.saque(300);
  contaDoMarcos.imprime();
  contaDoMarcos.deposito(200);
  contaDoMarcos.imprime();
}
