#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>

class Pagamento{
    private:
        double valorPagamento;
        std::string nomeDoFuncionario;

    public:
        void setValor(double valor);
        void setNome(std::string nome);

        double getValor();
        std::string getNome();
};
#endif