#include "tratador.h"

Tratador::Tratador(int m_nivel_de_seguranca){
	this->m_nivel_de_seguranca = m_nivel_de_seguranca;
};

void Tratador::setM_nivel_de_seguranca(int m_nivel_de_seguranca){
	this->m_nivel_de_seguranca = m_nivel_de_seguranca;
};

int Tratador::getM_nivel_de_segranca(){
	return this->m_nivel_de_seguranca;
};

Tratador::~Tratador(){
};
