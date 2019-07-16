#include "Horario.h"

using namespace std;

    Horario::Horario(){
        horas = "00";
        minutos = "00";
        segundos = "00";
    }
    Horario::Horario(string horas, string minutos, string segundos)
            :Horario()
    {
        if((stoi(horas) >= 0 && stoi(horas) < 24) && (stoi(minutos) >= 0 && stoi(minutos) < 60) &&
        (stoi(segundos) >= 0 && stoi(segundos) < 60)){
            this->horas = horas;
            this->minutos = minutos;
            this->segundos = segundos;
        }
    }

    void Horario::setHorario(string horas, string minutos, string segundos){
        if((stoi(horas) >= 0 && stoi(horas) < 24) && (stoi(minutos) >= 0 && stoi(minutos) < 60) &&
        (stoi(segundos) >= 0 && stoi(segundos) < 60)){
            this->horas = horas;
            this->minutos = minutos;
            this->segundos = segundos;
        }
    }
    void Horario::set_horas(string horas){
        this->horas = horas;
    }
    void Horario::set_minutos(string minutos){
        this->minutos = minutos;
    }
    void Horario::set_segundos(string segundos){
        this->segundos = segundos;
    }

    string Horario::get_horas(){
        if(stoi(horas) < 10)
            horas = "0" + horas;
        return horas;
    }
    string Horario::get_minutos(){
        if(stoi(minutos) < 10)
            minutos = "0" + minutos;
        return minutos;
    }
    string Horario::get_segundos(){
        if(stoi(segundos) < 10)
            segundos = "0" + segundos;
        return segundos;
    }

    void Horario::avancarHorario(){
        int h, m, s;

        h = stoi(horas);
        m = stoi(minutos);
        s = stoi(segundos);

        s++;
        if(s == 60){
            m++;
            s = 0;
        }
        if(m == 60){
            h++;
            m = 0;
        }
        if(h == 24)
            h = 0;
        horas = to_string(h);
        minutos = to_string(m);
        segundos = to_string(s);
    }
