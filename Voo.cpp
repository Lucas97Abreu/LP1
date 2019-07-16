#include "Voo.h"

using namespace std;

Voo::Voo(){}
Voo::Voo(int num, string h, string mi, string s, string d, string m, string a){
    this->num = num;
    h1.set_horas(h);
    h1.set_minutos(mi);
    h1.set_segundos(s);
    d1.set_day(d);
    d1.set_month(m);
    d1.set_year(a);
}

void Voo::setNum(int num){
    this->num = num;
}
void Voo::setHorario(string h, string mi, string s){
    h1.set_horas(h);
    h1.set_minutos(mi);
    h1.set_segundos(s);
}
void Voo::setDate(string d, string m, string a){
    d1.set_day(d);
    d1.set_month(m);
    d1.set_year(a);
}

int Voo::getNum(){
    return num;
}
string Voo::getHorario(){
    return h1.get_horas() + ":" + h1.get_minutos() + ":" + h1.get_segundos();
}
string Voo::getData(){
    return d1.get_day() + "/" + d1.get_month() + "/" + d1.get_year();
}

int Voo::proximoLivre(){
    int i;
    for(i = 0; i < 100; i++){
        if(!cad[i])
            break;
    }
    return i;
}
bool Voo::ocupa(int v){
    if(cad[v])
        return false;
    else{
        cad[v] = 1;
        return true;
    }
}
string Voo::verifica(int v){
    if(cad[v])
        return "Assento ocupado";
    else
        return "Assento vazio";
}
int Voo::vagas(){
    int i, vagas = 100;
    for(i = 0; i < 100; i++){
        if(cad[i])
            vagas--;
    }
    return vagas;
}
