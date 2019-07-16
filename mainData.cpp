#include<iostream>
#include"data.h"

int main(){
	
Data:

    Data *d1 = new Data();
    Data *d2 = new Data(15,2,2018);
    int aux;
    bool aux1;

    cout << "A data 1(construtor padrao) eh: " << d1->getDia() << "/" << d1->getMes() << "/" << d1->getAno() << endl;

    d1->setDia(1);
    d1->setMes(11);
    d1->setAno(2019);

    cout << "A data 1(sets) eh: " << d1->getDia() << "/" << d1->getMes() << "/" << d1->getAno() << endl;
    cout << "A data 2 eh: " << d2->getDia() << " de " << d2->getMesExtenso() << " de " << d2->getAno() << endl;

    aux = d1->Compara(d2->getDia(),d2->getMes(),d2->getAno());

    //data atual: 1/11/2019
    //data parametro: 15/2/2018
    if(aux == 1){
        cout << "\nA data atual eh maior que a data do parametro" << endl;
    }else if(aux == -1){
        cout << "\nA data do parametro eh maior que a data atual" << endl;
    }else{
        cout << "\nA data atual e a data do parametro sao iguais" << endl;
    }

    aux1 = d1->isBissexto();
    if(aux1){
        cout << d1->getAno() << " eh bissexto." << endl;
    }else{
        cout << d1->getAno() << " nao eh bissexto." << endl;
    }

    d1->setAno(2016);
    aux1 = d1->isBissexto();
    if(aux1){
        cout << d1->getAno() << " eh bissexto." << endl;
    }else{
        cout << d1->getAno() << " nao eh bissexto." << endl;
    }
    return 0;
}
