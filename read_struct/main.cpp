#include <iostream>
#include <sstream>
#include <fstream>

struct Pessoa {
    std::string nome;
    std::string idade;
    std::string data_nascimento;
    std::string profissao;
} pessoa;

int main() {
    std::stringstream aux;
    int number = 2;

//    std::cout << "Quantas pessoas deseja incluir no arquivo: ";
    if (number > 0){
        std::ofstream fout("saved_point.txt", std::ios_base::app);
        while (number--){
            std::cout << "Digite seu nome: ";
            getline(std::cin, pessoa.nome);
            std::cout << "Digite sua idade: ";
            getline(std::cin, pessoa.idade);
            std::cout << "Digite sua data de nascimento: ";
            getline(std::cin, pessoa.data_nascimento);
            std::cout << "Digite sua profissao: ";
            getline(std::cin, pessoa.profissao);

            aux <<
                "Nome: " << pessoa.nome << "\n" <<
                "Idade: " << pessoa.idade << "\n" <<
                "Data de Nascimento: " << pessoa.data_nascimento << "\n" <<
                "Profissao: " << pessoa.profissao << "\n\n";
            fout << aux.str();

            std::cout << "Nome: " << pessoa.nome << "\n" <<
                      "Idade: " << pessoa.idade << "\n" <<
                      "Data de Nascimento: " << pessoa.data_nascimento << "\n" <<
                      "Profissao: " << pessoa.profissao << "\n";

            std::cout << "\nPessoa incluída com sucesso!\n";
        }
        fout.close();
    }

    return 0;
}