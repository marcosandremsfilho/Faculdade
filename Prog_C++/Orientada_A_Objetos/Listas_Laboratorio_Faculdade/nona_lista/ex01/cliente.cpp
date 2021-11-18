#include "cliente.h"

void Cliente :: imprime()
{
  cout << "\nNome do cliente: " << _nome;
  cout << "\nIdade do cliente: " << _idade;
  cout << "\nEndereco do cliente: " << _endereco;
}

float Conta :: saque (float saque)
{
  float novoSaldo;
  if (_saldo < saque )
    cout << "\nSaldo insuficiente";
  else
  {
    novoSaldo = _saldo - saque;
    _saldo = novoSaldo;
  }
  return _saldo;
}

float Conta :: deposito (float deposito)
{
  float novoSaldo;
  novoSaldo = _saldo + deposito;
  _saldo = novoSaldo;
  return _saldo;
}

void Conta :: imprime()
{
  cout << "\nNumero da conta: " << _numero;
  cout << "\nAgencia: " << _agencia;
  cout << "\nSaldo (R$): " << _saldo;
}

float ContaEspecial :: saque (float saque)
{
  if ((_saldo + _limite) < saque )
    cout << "\nSaldo insuficiente";
  else
    return _saldo - saque;
}

float ContaEspecial :: deposito (float deposito)
{
  return _saldo + deposito;
}

void ContaEspecial :: imprime()
{
  cout << "Limite: " << _limite << "\n\n";
  Conta :: imprime();

}
