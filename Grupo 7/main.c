/*************************************************
Universidade Federal do Recôncavo da Bahia - UFRB
Centro de Ciências Exatas e Tecnológicas - CETEC
CET151 - Processamento de Dados II
PROJETO PR�TICO - GRUPO 00
**************************************************/
#include "func.c"

int main()
{
	int opcao;
	while (1){
		menu();
		scanf("%d",&opcao);
		system("cls");
		if(opcao == 0){
			break;
		}
		else if((opcao < 0) || (opcao > 9)){
			printf("===============================\n");
			printf("      OPERACAO INVALIDA\n");
			printf("===============================\n");
			system("pause\n");
			system("cls");
		}
		
		switch(opcao){
			case 1:
				Cadastro();
				break;
			case 2:
				RemoverProfessor();
				break;
			case 3:
				BuscarProfessor();
				break;
			case 4:
				TrabalhouMais();
				break;
			case 5:
				MenosOrientados();
				break;
			case 6:
				MaisVelho();
				break;
			case 7:
				SalvarDados();
				break;
			case 8:
				CarregarDados();
				break;
			case 9:
				Mostra();
				break;
		}
		
	}
	system("color 40");
	printf("===============================\n");
	printf("      PROGRAMA ENCERRADO\n");
	printf("===============================\n");
	return 0;
}
