#include "cliente.h"
#include "cliente.cpp"

int main()
{
  Cliente marcos;
  Cliente* vet[3];
  vet[0] = new Cliente("Marcos", 20, "Joao Nunes de Oliveira");
  vet[1] = new Conta(marcos, 997515503, 500, 300);
  vet[2] = new ContaEspecial(marcos, 997515503, 23761273, 300, 200);

  for(auto x : vet)
  {
    x->imprime();
  }
  marcos.deposito(200);
  for(auto x : vet)
  {
    x->imprime();
  }
  marcos.deposito(200);
  for(auto x : vet)
  {
    x->imprime();
  }
}
