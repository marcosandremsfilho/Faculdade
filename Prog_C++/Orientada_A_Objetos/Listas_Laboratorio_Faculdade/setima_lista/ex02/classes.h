#include <iostream>
#include <string>
using namespace std;

#ifndef BASIC_H
#define BASIC_H

class basic
{
protected:
  string _nome = " ";
  int _id, _idade;
public:
  basic(string nome = " ", int id, int idade) _nome{nome}, _id{id}, _idade{idade} { }
  ~basic() { }
};

#endif

#ifndef DEPARTMENT_H
#define DEPARTMENT_H

class department
{
protected:
  string _departamento =  " ", _cargo = " ";
  float _horas;
public:
  department(string departamento = " ", string cargo = " ", float horas) _departamento{departamento}, _cargo{cargo}, _horas{horas} { }
  ~department() { }
};

#endif

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class employee : public basic, public department
{
public:
  employee(string nome = " ", int id, int idade, string departamento = " ", string cargo, float horas) : basic{nome, id, idade}, department{nome, id, idade, departamento, cargo, horas} { }
  ~employee() { }

  friend istream& operator>>(istream&, Employee&);
};

#endif
