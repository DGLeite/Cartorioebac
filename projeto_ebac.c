#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��o de texto por regi�o 
#include <string.h> //biblioteca respons�vel por cuidar das string


int registro() //fun��o responsavel por cadastrar os usu�rios no sistemas 
{
	//inicio cri��o d variaveis /string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: "); //coletando informa��es do usuario
	scanf("%s", cpf); // %s refere-se a string
	
	strcpy(arquivo, cpf); //Respons�vel por copiar os valores das strig
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); //cria o arquivo e o "w" significa escrever  
	fprintf(file,cpf); //salva o valor da vari�vel 
	fclose(file); //fecha o arquivo 
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: "); //interface com usuario
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: "); //interface com usuario
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);

	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);	
	
	system("pause");
}


int consulta()
{
	//inicio cri��o d vaaveis string
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o cpf a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
	printf("N�o foi possivel abrir o arquivo, n�o localzado!.\n" );
	}
	
	while(fgets(conteudo, 200, file)!= NULL) //la�o
	{
		printf("\nEssas s�o as infoma��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
		
	}

	system("pause");

}


int deletar()
{
	//inicio cri��o d variaveis string
	char cpf[40];
	
	printf("Digite o CPF do usu�rio a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usu�rio n�o se encontra no sistema!. \n");
		system("pause");
	}

}


int main()
	{
	int opcao=0; //Definindo as v�riaveis 
	int x=1;
	
	for(x=1;x=1;)
	{


		system("cls");
		
		setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
		printf("###Cart�rio da EBAC### \n\n"); //Inicio do menu
		printf("Escolha a op��o desejada do menu:\n\n");
		printf("\t1-Registrar nomes\n");
		printf("\t2-Consultar nomes\n");
		printf("\t3-Deletar nomes\n\n");
		printf("Op��o: "); //Fim do menu
	
		scanf("%d", &opcao); //armazenando a escolha de usu�rio
	
		system("cls;"); //responsavel por limpar a tela
		 
		 switch(opcao) //inicio da sele��o do menu
		 {
		 	case 1:
		 	registro(); //chamada de fun��es
			break;
			
			case 2:
			consulta(); //chamada de fun��es
			break;
			
			case 3:
			deletar(); //chamada de fun��es
			break;
				
			default :
			printf("Essa op��o n�o est� dispon�vel\n");
			system("pause");
			break;
		 }// fim da sele��o
	
	}
	}
	
	
	
