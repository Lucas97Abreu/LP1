#include<iostream>
#include"pessoa.h"

int main(){
	Pessoa:

    Pessoa *p1 = new Pessoa("Franklin Anthony","(83) 98807-2528",20);
    Pessoa *p2 = new Pessoa("Franklin nao Anthony");

    cout << "Nome2: "<< p2->getNome() << endl << endl;

    p2->setIdade(19);
    p2->setNome("Victor Gorgonho");
    p2->setTelefone("(83) 98619-5322");

    cout << "Nome1: "<< p1->getNome() << "\nTelefone1: " << p1->getTelefone() << "\nIdade1: " << p1->getIdade()<< endl << endl;
    cout << "Nome2: "<< p2->getNome() << "\nTelefone2: " << p2->getTelefone() << "\nIdade2: " << p2->getIdade()<< endl;
    

	
	return 0;
}
