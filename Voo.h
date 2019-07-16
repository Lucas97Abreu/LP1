#ifndef VOO_H
#define VOO_H
#include <string>
#include "Date.h"
#include "Horario.h"

class Voo{
    private:
      int num;
      int cad[100];
      Horario h1;
      Date d1;

    public:
      Voo();
      Voo(int num, std::string h, std::string mi, std::string s,
          std::string d, std::string m, std::string a);
      void setNum(int num);
      void setHorario(std::string h, std::string mi, std::string s);
      void setDate(std::string d, std::string m, std::string a);

      int getNum();
      std::string getHorario();
      std::string getData();
      int proximoLivre();
      bool ocupa(int v);
      std::string verifica(int v);
      int vagas();
};
#endif
