#include "investimento.h"
#include "investimento.cpp"

int main()
{
  float valor, taxa_bolsa, taxa_renda, taxa_Imobiliario;
  int meses;

  cout << "\n=== Programa de Rendimentos ===\n";

  cout << "Entre com os seguintes valores:\n";

  cout << "\nValor inicial da aplicacao (R$): ";
  cin >> valor;

  cout << "\nTaxa do papel da bolsa: ";
  cin >> taxa_bolsa;

  cout << "\nTaxa do fundo renda fixa: ";
  cin >> taxa_renda;

  cout << "\nTaxa do fundo imobiliario: ";
  cin >> taxa_Imobiliario;

  cout << "\nNumero de meses: ";
  cin >> meses;

  investimento *papel = new PapelBolsa{valor, taxa_bolsa};
  investimento *renda = new RendaFixa{valor, taxa_renda};
  investimento *imobiliario = new Imobiliario{valor, taxa_Imobiliario};



    cout << "\n\nExpectativa de rendimentos:\n";
  cout << "\nRendimento do papel da bolsa: " << papel->retorno(meses);
  cout << "\nRendimento do fundo renda fixa: " << renda->retorno(meses);
  cout << "\nRendimento do fundo imobiliario: " << imobiliario->retorno(meses);
}
