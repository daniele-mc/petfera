#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>
#include <iostream>
using namespace std;
class Funcionario
{
	protected:
		int id;
		string nome;
		string cpf;
		short idade;
		short tipo_sanguineo;
		char fator_rh;
		string especialidade;
	public:
		virtual void consultar_funcionario() = 0;
		void setID(int id);
		int getId();
		void setNome(string nome);
		string getNome();
		void setCpf(string cpf);
		string getCpf();
		void setIdade(short idade);
		short getIdade();
		void setTipo_sanguineo(short tipo_sanguineo);
		short getTipo_sanguineo();
		void setFator_rh(char fator_rh);
		char getFator_rh();
		void setEspecialidade(string especialidade);
		Funcionario(int id, string nome, string cpf, short idade, short tipo_sanguineo, char fator_rh, string especialidade);
		~Funcionario();		
};

#endif


