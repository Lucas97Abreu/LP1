#ifndef CONTROLEDEPAGAMENTO_H
#define CONTROLEDEPAGAMENTO_H
#include "Pagamento.h"


class controleDePagamento{
    private:
        Pagamento p[10];
    public:
        void setPagamentos(double valor, std::string nome, int n);
        double calculaTotal();
        bool existePagamentoParaFuncionario(std::string nome);
};
#endif