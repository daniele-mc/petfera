#ifndef TRATADOR_H
#define TRATADOR_H
#include <iostream>
#include <string>
class Tratador: protected Funcionario{
private:
	int m_nivel_de_seguranca;
public:
	Tratador(int m_nivel_de_seguranca);
	void setM_nivel_de_seguranca(int m_nivel_de_seguranca);
	int getM_nivel_de_segranca();
	~Tratador();
};

#endif
