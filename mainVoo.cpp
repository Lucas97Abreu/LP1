#include <iostream>
#include "Voo.h"

using namespace std;

int main(void){
    string h, mi, s, d, m, a;
    int num, v;
    Voo v1 = Voo(15, "12", "30", "34", "16", "08", "2019");
    Voo v2;

    cin >> num;
    cin >> h >> mi >> s;
    cin >> d >> m >> a;

    v2.setNum(num);
    v2.setHorario(h, mi, s);
    v2.setDate(d, m, a);

    cout << "Numero: " << v1.getNum() << endl;
    cout << "Data: " << v1.getData() << endl;
    cout << "Horario: " << v1.getHorario() << endl;
    cout << "Assentos vagos: " << v1.vagas() << endl << endl;

    cout << "Numero: " << v2.getNum() << endl;
    cout << "Data: " << v2.getData() << endl;
    cout << "Horario: " << v2.getHorario() << endl;
    cout << "Assentos vagos: " << v2.vagas() << endl << endl;

    cout << "Próximo acento livre: " << (v2.proximoLivre()+1) << endl;
    cout << "Verifique se a cadeira que você deseja está vaga: ";
    cin >> v;
    cout << v2.verifica(v-1) << endl;

    cout << "Você deseja que acento? ";
    cin >> v;
    v2.ocupa(v-1);
    cout << "Verifique se a cadeira que você deseja foi realmente preenchida: ";
    cin >> v;
    cout << v2.verifica(v-1) << endl;

    return 0;
}