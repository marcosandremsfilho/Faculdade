#include "investimento.h"

float investimento :: retorno(int meses)
{
  return 0;
}

float PapelBolsa :: retorno(int meses)
{
  float PapelBolsaP = 0, PapelBolsaN = 0;
  float valor = _valor;
  for(int i = 1 ; i <= meses; i++)
  {
    if(i%2 == 0)
    {
      PapelBolsaP = valor + valor * _taxa;
      valor = PapelBolsaP;
    }
    else
    {
      PapelBolsaN = valor - valor * _taxa;
      valor = PapelBolsaN;
    }
  }
  return valor;
}

float RendaFixa :: retorno(int meses)
{
  float valor = _valor;

  for (int i = 0; i <= meses - 1; i++)
  {
    valor = valor + valor*(_taxa - _taxa * 0.15);
  }
  return valor;
}

float Imobiliario :: retorno(int meses)
{
  float valor = _valor;

  for (int i = 0; i <= meses - 1; i++)
  {

    valor = valor + valor*0.75*_taxa;
  }

  return valor;
}

void PapelBolsa :: nome()
{
  
}

void RendaFixa :: nome()
{

}

void Imobiliario :: nome()
{

}
