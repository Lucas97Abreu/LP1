#include "Pagamento.h"

void Pagamento::setValor(double valor){
    valorPagamento = valor;
}
void Pagamento::setNome(std::string nome){
    nomeDoFuncionario = nome;
}

double Pagamento::getValor(){
    return valorPagamento;
}
std::string Pagamento::getNome(){
    return nomeDoFuncionario;
}