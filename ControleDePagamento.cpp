#include "ControledDePagamento.h"

using namespace std;

void controleDePagamento::setPagamentos(double valor, string nome, int n){
    p[n].setValor(valor);
    p[n].setNome(nome);
}
double controleDePagamento::calculaTotal(){
    int i;
    double total = 0;
    for(i = 0; i < 10; i++){
        total += p[i].getValor();
    }
    return total;
}
bool controleDePagamento::existePagamentoParaFuncionario(string nome){
    int i;
    for(i = 0; i < 10; i++){
        if(p[i].getNome() == nome)
            return true;
    }
    return false;
}