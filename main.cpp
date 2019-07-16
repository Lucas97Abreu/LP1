#include <iostream>
#include "ControledDePagamento.h"

using namespace std;

int main(void){
    controleDePagamento cp1;
    string nome;
    int i;
    double valor;
    
    for(i = 0; i < 10; i++){
        cout << "Digite o " << i << "º nome" << endl;
        cin >> nome;
        cout << "Digite o " << i << "º valor do pagamento" << endl;
        cin >> valor;
        cp1.setPagamentos(valor, nome, i);
    }
    cout << "Total a ser pago: " << cp1.calculaTotal() << endl << endl;
    cout << "Funcionario a se consultar:" << endl;
    cin >> nome;
    if(cp1.existePagamentoParaFuncionario(nome))
        cout << "Existe sim pagamento para " << nome << endl;
    else
        cout << "Não há pagamento para " << nome << endl;

    return 0;
}