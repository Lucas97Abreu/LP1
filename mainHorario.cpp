#include <iostream>
#include "Horario.h"

using namespace std;

int main(void){
    string horas, minutos, segundos;
    Horario h1;

    cout << "Digite o horario:" << endl;
    cin >> horas;
    cin >> minutos;
    cin >> segundos;

    h1.setHorario(horas, minutos, segundos);

    cout << h1.get_horas() << ":" << h1.get_minutos() << ":" << h1.get_segundos() << endl;
    h1.avancarHorario();
    cout << h1.get_horas() << ":" << h1.get_minutos() << ":" << h1.get_segundos() << endl;

    return 0;
}
