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
int aux;

int main()
{
  cout << "Vamos acertar o calendario." << "\n";
  cout << "Digite o dia: ";
  cin >> dia;
  cout << "Digite o mes: ";
  cin >> mes;
  cout << "Digite o ano: ";
  cin >> ano;

  cout << "Vamos acertar o relogio." << "\n";
  cout << "Digite a hora atual: ";
  cin >> hora;
  cout << "Digite a hora minuto: ";
  cin >> minuto;

    system("cls");
  cout << "Hora atual: ";
  cout << hora << ":" << minuto << ":" << segundos;
  cout << "\n" << "Data: ";
  cout << dia << "/" << mes <<"/" << ano;
cout << "\n" << "AUX:" << aux;


  while (1)
  {
    if (mes<7 && mes%2 == 0)
      aux = 0;
    else if(mes<=7 && mes%2 != 0)
      aux = 1;
    else if(mes>7 && mes%2 == 0)
      aux = 1;
    else if (mes>7 && mes%2 ==1)
      aux = 0;
    Sleep(1000);
    segundos++;



    if(segundos == 60)
    {
      segundos = 0;
      minuto++;
    }

    if(minuto >= 60)
    {
      minuto = 0;
      hora++;
  }
  if (hora >= 24)
  {
    hora = 0;

    if(dia >= 31 && aux == 1)
    {
      mes++;
      dia = 1;

      if(mes==13)
      {
        mes = 1;
        ano++;
      }
    }
    else if(dia >= 30 && aux == 0)
    {
      mes++;
      dia = 1;
    }
    else if(mes == 2 && ano%4 == 0 && dia >= 29)
    {
      dia = 1;
      mes++;
    }
    else if(mes == 2 && ano%4 != 0 && dia >= 28)
    {
      dia = 1;
      mes++;
    }

    else
    {
      dia++;
    }
  }
  system("cls");
  cout << "Hora atual: ";
  cout << hora << ":" << minuto << ":" << segundos;
  cout << "\n" << "Data: ";
  cout << dia << "/" << mes <<"/" <<ano;
  }
}
