#ifndef FUNC_H_
#define FUNC_H_

	/* declare aqui a structs
	 * e os protótipos das funções
	 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<conio.h>


struct DataMes{
	int ano,mes;
};
typedef struct {
	char nome[100];
	int idade;
	float horas_trabalhadas;
	int numero_orientados;
	float salario;
	struct DataMes tempo;
}Professor;

void menu();
void Cadastro();
void RemoverProfessor();
void BuscarProfessor();
void TrabalhouMais();
void MenosOrientados();
void MaisVelho();
void SalvarDados();
void CarregarDados();


#endif	//FUNC_H_
