#include "func.h"
#include<stdio.h>
#include<stdlib.h>
/*
	 * Implemente aqui suas funÃ§Ãµes
	 */
Professor professor[10];
//struct DataMes dataMes[10];

void Cadastro(){
	int i=0;

	printf("=====================================================\n");
	printf("\t\tCADASTRA PROFESSOR\n");
	printf("=====================================================\n\n");
	while(professor[i].idade>0){
		i++;
	}
	if(i >= 10) {
		printf("\tAtingiu o numero maximo de professores.\n\n");
	}
	else{
		getchar();
		printf("DIGITE O NOME DO PROFESSOR\n");
		gets(professor[i].nome);
		strcpy(professor[i].nome,strupr(professor[i].nome));//strupr converte letras menusculas para maiuscula
		printf("DIGITE A IDADE DO PROFESSOR\n");
		scanf("%d",&professor[i].idade);
		while((professor[i].idade < 0)){
			printf("ERRO!!!");
			printf("DIGITE A IDADE DO PROFESSOR NOVAMENTE\n");
			scanf("%f",&professor[i].idade);
		}
		
		printf("DIGITE A QUANTIDADE DE HORAS TRABALHADAS\n");
		scanf("%f",&professor[i].horas_trabalhadas);
		while((professor[i].horas_trabalhadas < 0)){
			printf("ERRO!!!");
			printf("DIGITE A QUANTIDADE DE HORAS TRABALHADAS NOVAMENTE\n");
			scanf("%f",&professor[i].horas_trabalhadas);
		}
		
		printf("DIGITE O NUMERO DE ORIENTADOS\n");
		scanf("%d",&professor[i].numero_orientados);
		while((professor[i].numero_orientados < 0)){
			printf("ERRO!!!");
			printf("DIGITE O NUMERO DE ORIENTADOS NOVAMENTE\n");
			scanf("%d",&professor[i].numero_orientados);
		}
		
		professor[i].salario = 20 * (professor[i].horas_trabalhadas + professor[i].numero_orientados);
		
		printf("DIGITE O MES E O ANO QUE O PROFESSOR FOI CONTRATADO\nMES/ANO\nOBS:(O MES DEVE SER DIGITADAO COM NUMEROS)\n");
		scanf("%d%d",&professor[i].tempo.mes,&professor[i].tempo.ano);
		while((professor[i].tempo.mes < 1) ||(professor[i].tempo.mes > 12)){
			printf("ERRO!!!");
			printf("DIGITE O MES NOVAMENTE\n");
			scanf("%d",&professor[i].tempo.mes);
		}
		while((professor[i].tempo.ano < 0)){
			printf("ERRO!!!");
			printf("DIGITE O ANO NOVAMENTE\n");
			scanf("%d",&professor[i].tempo.ano);
		}
		
	}
	system("pause\n");
	system("cls");
}
void RemoverProfessor(){
		int i=0, j=0, teste=0, tem = 0;
		char nome1[100];
		printf("=====================================================\n");
		printf("\tREMOVER PROFESSOR\n");
		printf("=====================================================\n\n");
		getchar();
		
		printf("Digite o nome do professor\n");
		gets(nome1);
		strcpy(nome1,strupr(nome1));
		
		while(professor[i].idade > 0){
			tem = 1;//para descobrir se teve professor
			if(teste == 1){ // soprepuserá a posicao que quer removerestando assim uma casa a diante
				strcpy (professor[i-1].nome,professor[i].nome);
	
				professor[i-1].salario = professor[i].salario;
				professor[i-1].idade = professor[i].idade;
				professor[i-1].horas_trabalhadas = professor[i].horas_trabalhadas;
				professor[i-1].numero_orientados = professor[i].numero_orientados;
				professor[i-1].tempo.mes = professor[i].tempo.mes;
				professor[i-1].tempo.ano = professor[i].tempo.ano;
					
			}//ele sempre
			if( (strcmp(professor[i].nome, nome1 )) == 0){
				teste =1;
			
	
				strcpy (professor[i].nome,"\0");
				professor[i].idade = 0;
				professor[i].salario = 0;
				professor[i].horas_trabalhadas = 0;
				professor[i].numero_orientados = 0;
				professor[i].tempo.mes = 0;
				professor[i].tempo.ano = 0;	
			}
			i++;
			
		}
		if(teste == 1){
			strcpy (professor[i-1].nome,"\0");
			professor[i-1].idade = 0;
			professor[i-1].salario = 0;
			professor[i-1].horas_trabalhadas = 0;
			professor[i-1].numero_orientados = 0;
			professor[i-1].tempo.mes = 0;
			professor[i-1].tempo.ano = 0;	
		}
		
		if(tem == 0) {
			printf("Nao ha professores no registro\n");
		}
		system("pause");
		system("cls");	
}
void BuscarProfessor(){
	int i=0, teste =0;
	char nome[50];
	//system("cls");
	getchar();
	printf("=====================================================\n");
	printf("\tBUSCAR PROFESSOR\n");
	printf("=====================================================\n\n");
	printf("Digite o nome do professor ..: ");
	gets(nome);
	
	//	system("cls");
		
	while(strlen(professor[i].nome)> 0){
		
		if( strcmp(professor[i].nome,nome ) == 0){
		
			printf("Professor ..........: %s \n",professor[i].nome);
			printf("Idade ..............: %d\n",professor[i].idade);
			printf("Salario ............: %.2f \n",professor[i].salario);
			printf("Horas trabalhadas...: %.f \n",professor[i].horas_trabalhadas);
			printf("Numero de orientados: %d \n",professor[i].numero_orientados);
			printf("Data de ingresso ...: %d / %i \n",professor[i].tempo.mes,professor[i].tempo.ano);
			teste =1;
			printf("\n\n");
		}
		i++;
		
	}
	
	if (teste ==0) {
		printf("Nao ha professores com esse nome nos nossos registros.\n");
	}
system("pause");
system("cls");
}
void menu(){
	printf("=====================================================\n");
	printf("\tSISTEMA DE CADASTRO DE PROFESSORE\n");
	printf("=====================================================\n\n");
	printf("=====================================================\n");
	printf("  Cadastrar novo professo.......................:[1]\n");
	printf("  Remover professor.............................:[2]\n");
	printf("  Buscar professor pelo nome....................:[3]\n");
	printf("  Exibir quem trabalhou mais horas..............:[4]\n");
	printf("  Exibir quem tem menos orientados..............:[5]\n");
	printf("  Exibir quem e o mais velho da instituicao.....:[6]\n");
	printf("  Salvar as informacoe..........................:[7]\n");
	printf("  Carregar arquivo..............................:[8]\n");
	printf("  Ver todos os professores......................:[9]\n");
	printf("  Sair..........................................:[0]\n");
	printf("=====================================================\n");
	//system("color 61");
}
void TrabalhouMais(){
	
	int i=0,tem =0, maior;

	//system("cls");
	printf("=====================================================\n");
	printf("\tPROFESSOR QUE TRABALHO MAIS\n");
	printf("=====================================================\n\n");
	
	getchar();
	
	maior = professor[0].horas_trabalhadas;
	while(strlen(professor[i].nome)> 0){
		
		if(professor[i].horas_trabalhadas>= maior){
				
			maior = professor[i].horas_trabalhadas;
				
		}
		i++;
	}
	i = 0;
	while(strlen(professor[i].nome)> 0){
		
		if(professor[i].horas_trabalhadas == maior){
			printf("Professor ..........: %s \n",professor[i].nome);
			printf("Idade ..............: %d\n",professor[i].idade);
			printf("Salario ............: %.2f \n",professor[i].salario);
			printf("Horas trabalhadas...: %.f \n",professor[i].horas_trabalhadas);
			printf("Numero de orientados: %d \n",professor[i].numero_orientados);
			printf("Data de ingresso ...: %d / %d \n",professor[i].tempo.mes,professor[i].tempo.ano);
			printf("\n\n");
			tem = 1;
		}
		i++;
	}
	if(tem == 0 ) {
		printf("Nao ha professores cadastrados no nosso sistema.\n");
	}
	system("pause");
	system("cls");
}
void MenosOrientados(){
	
	int i=1, menor, tem =0;

	//system("cls");
	printf("=====================================================\n");
	printf("      PROFESSOR COM MENOR NUMERO DE ORIENTADOS\n");
	printf("=====================================================\n\n");
	getchar();
	
	menor = professor[0].numero_orientados;
	
	while(professor[i].idade > 0){
		
		if(professor[i].numero_orientados < menor){
			menor = professor[i].numero_orientados;
		}
		
		i++;
	}
	
	i=0;

	while(professor[i].idade > 0){
		
		if(professor[i].numero_orientados == menor){
			printf("Professor ..........: %s \n",professor[i].nome);
			printf("Idade ..............: %d\n",professor[i].idade);
			printf("Salario ............: %.2f \n",professor[i].salario);
			printf("Horas trabalhadas...: %.f \n",professor[i].horas_trabalhadas);
			printf("Numero de orientados: %d \n",professor[i].numero_orientados);
			printf("Data de ingresso ...: %d / %d \n",professor[i].tempo.mes,professor[i].tempo.ano);
			printf("\n\n");
			tem =1;
		}
	
		i++;	
	}

	if(tem == 0 ) {
		printf("Nao ha professores cadastrados no nosso sistema.\n");
	}
system("pause");
system("cls");
}
void MaisVelho(){
	
	int i=1,pri=0, mes, ano, tem=0;
	int entrou=0;
	system("cls");// possa ser que o usuario cadastre alguns antes de carregar e depois queira retirar
	printf("=====================================================\n");
	printf("\tPROFESSOR(S) MAIS VELHO\n");
	printf("=====================================================\n\n");
	//mes = professor[0].tempo.mes;
	ano = (professor[0].tempo.ano * 365) + (professor[0].tempo.mes * 30);//transformei em dias
	
	int idade = professor[0].idade;
	while(strlen(professor[i].nome)> 0){ //Colocará a menor data  nas variaveis mes e ano
		entrou = 1;
		if(idade <= professor[i].idade){
			idade = professor[i].idade;

		}
		int encontra = (professor[i].tempo.ano * 365) + (professor[i].tempo.mes * 30);
		if(ano > encontra){
			ano = encontra;
			
		}
		
		i++;
	}
	
	i=0;
	if(/*entrou == 1*/strlen(professor[i].nome)> 0){
		printf("=====================================================\n");
		printf(" O(s) mais velho em tempo de servico na instituicao\n");
		printf("=====================================================\n\n");
	}
	while(strlen(professor[i].nome)> 0){//Exibira a menor data
			
			if(ano == ((professor[i].tempo.ano * 365) + (professor[i].tempo.mes * 30))){
				//if(mes == professor[i].tempo.mes){	
					printf("Professor ..........: %s \n",professor[i].nome);
					printf("Idade ..............: %d\n",professor[i].idade);
					printf("Salario ............: %.2f \n",professor[i].salario);
					printf("Horas trabalhadas...: %.2f \n",professor[i].horas_trabalhadas);
					printf("Numero de orientados: %d \n",professor[i].numero_orientados);
					printf("Data de ingresso ...: %d / %i \n",professor[i].tempo.mes,professor[i].tempo.ano);
					printf("\n\n");
					tem = 1;
				//}
			}
		i++;
		}
	i=0;
	if(strlen(professor[i].nome)> 0){
		printf("=====================================================\n");
		printf("      O(s) mais velho em idade na instituicao\n");
		printf("=====================================================\n\n");
	}
	while(strlen(professor[i].nome)> 0){//Exibira a menor data
			
			if(idade == professor[i].idade){
					
				printf("Professor ..........: %s \n",professor[i].nome);
				printf("Idade ..............: %d\n",professor[i].idade);
				printf("Salario ............: %.2f \n",professor[i].salario);
				printf("Horas trabalhadas...: %.2f \n",professor[i].horas_trabalhadas);
				printf("Numero de orientados: %d \n",professor[i].numero_orientados);
				printf("Data de ingresso ...: %d / %i \n",professor[i].tempo.mes,professor[i].tempo.ano);
				printf("\n\n");
				tem = 1;
			
			}
		i++;
		}
	
	if(tem == 0 ) printf("Nao ha professores.\n");	
system("pause");
system("cls");
}
void SalvarDados(){// funcao para salvar os professores da struct
	printf("=====================================================\n");
	printf("              INFORMACOES SALVAS\n");
	printf("=====================================================\n\n");
	system("pause\n");
	system("cls");
	int i, qtd=0;
	FILE * arq;

while((strlen(professor[qtd].nome) > 0)){
		qtd++;
	}

	system("cls");

	arq = fopen("dados.bin", "wb");	// abre o arquivo para escrita 

	if(arq == NULL){
			printf("\nErro ao abrir o arquivo para leitura!\n");
		exit(1); 
	}
	
	fwrite(professor, sizeof(Professor), qtd, arq);
	fclose(arq);
	}
void CarregarDados(){ // funcao que lera o arquivo texto
	printf("=====================================================\n");
	printf("                 DADOS CARREGADOS\n");
	printf("=====================================================\n\n");
	system("pause\n");
	system("cls");
	int i=0;


	FILE * arq = fopen("dados.bin", "rb");	// abre o arquivo para leitura
	
	if(arq == NULL)	{
		printf("\nErro ao abrir o arquivo para leitura!\n");
		exit(1); // aborta o programa
	}
	

	while(1){
		fread(&professor[i], sizeof(Professor), 1, arq);// o laço vai repetir ate chegara a 10 porque não se sabe o tamanho do vetor por isso ira pegar 1 de cada vez
		i++;
		if(i==10){
			break;
		}
	}
		
	fclose(arq); // fecha o arquivo

}
void Mostra(){
	int tamanho_vetor=0,j;
		
		while(professor[tamanho_vetor].idade > 0) {
			tamanho_vetor++;
			
		}
		if(tamanho_vetor != 0){
			for(j=0;j < tamanho_vetor;j++){
				printf("Professor ..........: %s \n",professor[j].nome);
				printf("Idade ..............: %d\n",professor[j].idade);
				printf("Salario ............: %.2f \n",professor[j].salario);
				printf("Horas trabalhadas...: %.f \n",professor[j].horas_trabalhadas);
				printf("Numero de orientados: %d \n",professor[j].numero_orientados);
				printf("Data de ingresso ...: %d / %i \n\n",professor[j].tempo.mes,professor[j].tempo.ano);
			}
		}
	
		printf("A quantiadades de professores: %d\n",tamanho_vetor);
}
