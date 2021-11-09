#include "investimento.h"

float PapelBolsa :: retorno(int meses)
{
  float papelBolsa = 0;
  float aux = 0;

  for(int i = 0 ; i < meses; i++)
  {
    if(meses%2 == 0)
    {
      aux = _valor * _taxa;
      papelBolsa = papelBolsa + aux;
    }
    else
    {
      aux = _valor * (-1*_taxa);
      papelBolsa = papelBolsa + aux;
    }
  }
  return papelBolsa;
}

float RendaFixa :: retorno(int meses)
{
  float soma = meses * _valor;
  float TaxaReal = (_taxa - _taxa*0.15);
  float rendaFixa = soma * TaxaReal;
  return rendaFixa;
}

float Imobiliario :: retorno(int meses)
{
  float imobiliario = (meses * _valor)*((3/4)*_taxa);
  return imobiliario;
}
