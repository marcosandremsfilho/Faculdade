#include "investimento.h"
#include "investimento.cpp"

int main()
{
  float valor, taxa_bolsa, taxa_renda, taxa_Imobiliario;


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

  investimento *op1 = new PapelBolsa{valor, taxa_bolsa};
  investimento *op2 = new RendaFixa{valor, taxa_renda};
  investimento *op3 = new Imobiliario{valor, taxa_Imobiliario};

  int m = 24;

    cout << "\n\nExpectativa de rendimentos:\n";
  cout << "\nRendimento do papel da bolsa: " << op1->retorno(m);
  cout << "\nRendimento do fundo renda fixa: " << op2->retorno(m);
  cout << "\nRendimento do fundo imobiliario: " << op3->retorno(m);
}
