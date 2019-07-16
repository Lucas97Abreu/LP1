#ifndef HORARIO_H
#define HORARIO_H
#include <string>

class Horario{
    private:
        std::string horas;
        std::string minutos;
        std::string segundos;

    public:
        Horario();
        Horario(std::string horas, std::string minutos, std::string segundos);

        void setHorario(std::string horas, std::string minutos, std::string segundos);
        void set_horas(std::string horas);
        void set_minutos(std::string minutos);
        void set_segundos(std::string segundos);

        std::string get_horas();
        std::string get_minutos();
        std::string get_segundos();

        void avancarHorario();
};
#endif
