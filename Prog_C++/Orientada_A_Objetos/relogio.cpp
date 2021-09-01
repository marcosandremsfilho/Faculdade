#include "relogio.h"

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
  cout << setw(2) << setfill('0') << hora << ":";
  cout << setw(2) << setfill('0') << minuto << ":";
  cout << setw(2) << setfill('0') << segundos;
  cout << "\n" << "Data: ";
  cout << setw(2) << setfill('0') << dia << "/";
  cout << setw(2) << setfill('0') << mes << "/";
  cout << setw(2) << setfill('0') << ano << "\n";

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
    Sleep(950);
    segundos++;

    if(segundos == 60)
    {
      segundos = 0;
      minuto++;
    }

    else if(minuto >= 60)
    {
      minuto = 0;
      hora++;
    }
    else if (hora >= 24)
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
  cout << "Hora atual: "; // utilizar setw e setfill toda vez
  cout << setw(2) << setfill('0') << hora << ":";
  cout << setw(2) << setfill('0') <<  minuto << ":";
  cout << setw(2) << setfill('0') << segundos;
  cout << "\n" << "Data: ";
  cout << setw(2) << setfill('0') << dia << "/";
  cout << setw(2) << setfill('0') << mes << "/";
  cout << setw(2) << setfill('0') << ano << "\n";
  }
}
