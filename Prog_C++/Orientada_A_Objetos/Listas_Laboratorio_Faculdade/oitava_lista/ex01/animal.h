#include <iostream>
#include <string>

using namespace std;

#ifndef ANIMAL_H
#define ANIMAL_H

class animal
{
  protected:
    string _nome;
  public:
    animal(string nome = " ") : _nome{nome} { }
    ~animal() { }

    virtual void nome();
    virtual void carrega_detalhes();
};

#endif

#ifndef CAVALO_H
#define CAVALO_H

class cavalo : public animal
{
  public:
    cavalo(string nome = " ") : animal{nome} { }
    ~cavalo() { }

    void nome();
    void carrega_detalhes();
};

#endif

#ifndef BALEIA_H
#define BALEIA_H

class baleia : public animal
{
  public:
    baleia(string nome = " ") : animal{nome} { }
    ~baleia() { }

    void nome();
    void carrega_detalhes();
};

#endif

#ifndef GIRAFA_H
#define GIRAFA_H

class girafa : public animal
{
  public:
    girafa(string nome = " ") : animal{nome} { }
    ~girafa() { }

    void nome();
    void carrega_detalhes();
};

#endif
