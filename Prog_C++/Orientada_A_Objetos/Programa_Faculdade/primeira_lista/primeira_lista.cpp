#include "primeira.h"

void grausRadiano()
{
  system("cls");
  cout << "Digite o angulo em graus: ";
  cin >> graus;
  radiano = graus*0.0174553292;
  cout << "\nGraus = " << graus << " Radiano = " << radiano;
  cout << "\n";
  system("pause");
}

void ConversorDolar()
{
  system("cls");
  cout << "Reais R$: ";
  cin >> reais;
  cout << "Taxa de cambio: ";
  cin >> cambio;
  dolar = reais/cambio;
  cout << "Equivalente em dolares $: " << dolar << "\n";
  system("pause");
}

void endereco()
{
  system("cls");
  cout << "Rua: ";
  cin.ignore();
  getline(cin,rua);
  cout << "\n" << "Numero: ";
  cin >> numero;
  cout << "\n" << "CEP: ";
  cin >> cep;
  cout << "\n" << "Bairro: ";
  cin.ignore();
  getline(cin,bairro);
  cout << "\n" << "Cidade: ";
  getline(cin,cidade);
  cout << "\n" << "Estado: ";
  getline(cin,estado);
  cout << "\n{" << rua << "}, {" << numero << "}, {";
  cout << bairro << "}, {" << cidade << "} - {" << estado;
  cout << "}, {" << cep;
  cout << "}\n";
  system("pause");
}

int main ()
{
  while (x != 4)
  {
    system("cls");
    cout << " 1: Converter Graus em Radianos \n 2: Converter Reais em Dolares \n ";
    cout << "3: Entrar com seu endereco completo \n 4: Sair do Programa \n ";
    cout << "Selecione uma opcao(1-4): \n";
    cin >> x;
    switch(x)
    {

      case 1:
      grausRadiano();

      break;

      case 2:
      ConversorDolar();

      break;

      case 3:
      endereco();

      break;

      case 4:
      break;

      default:
      cout << "Escolha incorreta \n";
      system("pause");
      
    }
  }
}
