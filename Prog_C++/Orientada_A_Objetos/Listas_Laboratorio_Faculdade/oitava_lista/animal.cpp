#include "animal.h"

void animal :: nome()
{
  cout << "\nEntre com o nome do animal: ";
  cin >> _nome;
}
void cavalo :: nome()
{
  cout << "\nEntre com o nome do cavalo: ";
  cin >> _nome;
}
void baleia :: nome()
{
  cout << "\nEntre com o nome da baleia: ";
  cin >> _nome;
}
void girafa :: nome()
{
  cout << "\nEntre com o nome da girafa: ";
  cin >> _nome;
}

void animal :: carrega_detalhes()
{
  cout << "\n\nCarregando detalhes do animal.";
  cout << "\nNome do animal: " << _nome;
}

void cavalo :: carrega_detalhes()
{
  cout << "\n\nCarregando detalhes do cavalo.";
  cout << "\nNome do cavalo: " << _nome;
}

void baleia :: carrega_detalhes()
{
  cout << "\n\nCarregando detalhes da baleia.";
  cout << "\nNome da baleia: " << _nome;
}

void girafa :: carrega_detalhes()
{
  cout << "\n\nCarregando detalhes da girafa.";
  cout << "\nNome da girafa: " << _nome;
}
