#include "animal.h"
#include "animal.cpp"

int main()
{
  animal* v_animais[6];

  v_animais[0] = new animal { };
  v_animais[1] = new cavalo { };
  v_animais[2] = new baleia { };
  v_animais[3] = new girafa { };
  v_animais [4] = new animal { };
  v_animais [5] = new cavalo { };

  for (auto x : v_animais)
  {
    x -> nome();
  }
  for (auto i : v_animais)
  {
      i -> carrega_detalhes();
  }

}
