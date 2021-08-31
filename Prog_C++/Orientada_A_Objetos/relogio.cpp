#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

int hora;
int minuto;
int segundos=0;
int dia;
int mes;
int ano;

int a=1;
int main()
{
  cout << "Vamos acertar o relogio." << "\n";
  cout << "Digite a hora atual: ";
  cin >> hora;
  cout << "Digite a hora minuto: ";
  cin >> minuto;

  system("cls");
  cout << "Hora atual: ";
  cout << hora << ":" << minuto << ":" << segundos;

  while (1)
  {

    Sleep(1000); //espera 60s
    segundos++;
    system("cls");
    cout << "Hora atual: ";
    cout << hora << ":" << minuto << ":" << segundos;

    if(segundos == 60)
    {
      segundos = 0;
      minuto++;
      system("cls");
      cout << "Hora atual: ";
      cout << hora << ":" << minuto << ":" << segundos;

    }

    if(minuto == 60)
    {
      minuto = 0;
      hora++;
      system("cls");
      cout << "Hora atual: ";
      cout << hora << ":" << minuto << ":" << segundos;

  }
  }
}
