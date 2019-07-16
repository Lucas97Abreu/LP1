#include<iostream>
#include"invoice.h"

int main(){
	Invoice:

    invoice *f1 = new invoice(79,2,3.50,"Batatas douradas");

    cout << "Num Item: " << f1->getNumItem() << "\nQuantidade: " << f1->getQItem() << endl;
    cout << "Preco: " << f1->getPrecoItem() << "\nDescricao: " << f1->getDescricao() << endl;
    cout << "Preco final: " << f1->getInvoiceAmount() << endl << endl;

    f1->setNumItem(54);
    f1->setQItem(-1);
    f1->setPrecoItem(-100);
    f1->setDescricao("d/dx qualquer coisa");

    cout << "Num Item: " << f1->getNumItem() << "\nQuantidade: " << f1->getQItem() << endl;
    cout << "Preco: " << f1->getPrecoItem() << "\nDescricao: " << f1->getDescricao() << endl;
    
    return 0;
}
