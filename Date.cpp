#include "Date.h"

using namespace std;
        
    Date::Date(){
        day = "01";
        month = "01";
        year = "0001";
    }
    Date::Date(string day, string month, string year)
        :Date()
    {
        if((stoi(day) > 0 && stoi(day) < 32) && (stoi(month) > 0 && stoi(month) < 13) && (stoi(year) > 0)){
            this->day = day;
            this->month = month;
            this->year = year;
        }
    }

    void Date::set_day(string day){
        this->day = day;
    }
    void Date::set_month(string month){
        this->month = month;
    }
    void Date::set_year(string year){
        this->year = year;
    }

    string Date::get_day(){
        return day;
    }
    string Date::get_month(){
        return month;
    }
    string Date::get_year(){
        return year;
    }

    int Date::Compara(string day, string month, string year){
        if((this->year == year) && (this->month == month) && (this->day == day))
            return 0;

        if(this->year > year)
            return -1;
        if((this->year == year) && (this->month > month))
            return -1;
        if((this->year == year) && (this->month == month) && (this->day > day))
            return -1;

        if(this->year < year)
            return 1;
        if((this->year == year) && (this->month < month))
            return 1;
        if((this->year == year) && (this->month == month) && (this->day < day))
            return 1;
    }
    string Date::getMesExtenso(){
        switch(stoi(month)){
            case(1):
                return "janeiro";
                break;
            case(2):
                return "fevereiro";
                break;
            case(3):
                return "março";
                break;
            case(4):
                return "abril";
                break;
            case(5):
                return "maio";
                break;
            case(6):
                return "junho";
                break;
            case(7):
                return "julho";
                break;
            case(8):
                return "agosto";
                break;
            case(9):
                return "setembro";
                break;
            case(10):
                return "outubro";
                break;
            case(11):
                return "novembro";
                break;
            case(12):
                return "dezembro";
        }
    }
    bool Date::isBissexto(){
        int v;
        v = stoi(year);
        if((v%4 == 0) && (v%100 != 0))
            return true;
        else
            return false;
    }
