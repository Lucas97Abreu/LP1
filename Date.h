#ifndef DATE_H
#define DATE_H
#include <string>

class Date{
    private:
        std::string day;
        std::string month;
        std::string year;

    public:
        Date();
        Date(std::string day, std::string month, std::string year);

        void set_day(std::string day);
        void set_month(std::string month);
        void set_year(std::string year);
         
        std::string get_day();
        std::string get_month();
        std::string get_year();

        int Compara(std::string day, std::string month, std::string year);
        std::string getMesExtenso();
        bool isBissexto();
};

#endif
