// autora:Kawany Valera Zelinski dos Santos 11/09/2021
//Project Store: LOVE TECH 

//switch, case 1, falta como excluir arquivo
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{	
	
	setlocale(LC_ALL, "Portuguese");
	//tela inicial
	system("color 5F");
	printf("S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2\n");
	printf("\tS2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 \tLOVE TECH\tS2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2\n");
	printf("S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2\n");
	printf("\n");
	printf("\t\tCADASTRO COMERCIAL");
	printf("\n\t\t1 - Clientes");
	printf("\n\t\t2 - Produtos");
	printf("\n\t\t3 - Comprar");
	printf("\n\t\t4 - Quem Somos");
	printf("\n\t\t5 - Contato");
	printf("\n\t\t6 - Sair");
	printf("\n\nDigite uma opção: ");
	//switch pra opção
	int opcao, opcao2, opcao3, opcao4, opcao5;
	scanf("%d", &opcao);
	fflush(stdin);

		switch(opcao)
		{
		case 1: //clientes
			printf("\n1 - cadastrar cliente");
			printf("\n2 - excluir cliente");
			printf("\n3 - visualizar clientes");
			printf("\n\nDigite uma opção: ");
			scanf("%d", &opcao2);
			fflush(stdin);
			if(opcao2==1) //cadastra produtos
			{
			FILE *pont_arq;
	
			//abrindo o arquivo
			pont_arq = fopen("clientes.txt", "a");
	
			char nomecliente[30], emailcliente[30];
			int codigocliente, fonecliente;
			printf("\nDigite o código do cliente: ");
			scanf("%d", &codigocliente);
			fflush(stdin);
			printf("\nDigite o nome do cliente: ");
			gets(nomecliente);
			fflush(stdin);
			printf("\nDigite o email do cliente: ");
			gets(emailcliente);
			fflush(stdin);
			printf("\nDigite o telefone do cliente: ");
			scanf("%d", &fonecliente);
			fflush(stdin);
			fprintf(pont_arq, "\n\n\t  %d   \t\t\t", codigocliente); //adiciona código novo a tabela
			fprintf(pont_arq, "    %s   \t\t\t", nomecliente); //adiciona nome
			fprintf(pont_arq, " %s\t\t\t", emailcliente); //adiciona email
			fprintf(pont_arq, "%d\t\t", fonecliente); //adiciona telefone
			//fechando
			fclose(pont_arq);
			//mensagem para o usuário
			printf("\n\nCliente cadastrado com sucesso !!!\n\n");
			system("pause"); //pausa no Windows	
			}
			else
			{
				if(opcao2==2) //vai excluir os registro de clientes
				{
					//exclui arquivo.txt
					//system pause
				}
				else
				{
					if(opcao2==3) //apresenta a lista de clientes
					{
				    printf("S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2\n");
					printf("\n\t                                     \t\tCLIENTES    \t                                  \n\n");
	   	   	   	   	printf("S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2\n");
	   	   	   	   	printf("_________________________________________________________________________________________________________________________________");
	   	   	   	   	printf("\n\tCÓDIGO\t\t|\t\tNOME\t\t\t|\t\t EMAIL\t\t\t|\tTELEFONE\t\t|");
	   	   	   	   	printf("\n_________________________________________________________________________________________________________________________________");
					system("type clientes.txt\n\n");
					system("Pause");							
					}
					else
					{
						printf("\n\nNúmero inválido !!! :/ \n\n");
						system("Pause");
					}
				}
			}
		break;
		case 2: //produtos
			printf("\n1 - cadastrar produto");
			printf("\n2 - excluir produto");
			printf("\n3 - visualizar produto");
			printf("\n\nDigite uma opção: ");
			scanf("%d", &opcao3);
			fflush(stdin);
			if(opcao3==1) //cadastra produtos
			{
			FILE *pont_arq2;
	
			//abrindo o arquivo
			pont_arq2 = fopen("produtos.txt", "a");
	
			char nomeproduto[30], marcaproduto[20], descricaoprod[50];
			int codigoproduto;
			printf("\nDigite o código do produto: ");
			scanf("%d", &codigoproduto);
			fflush(stdin);
			printf("\nDigite o nome do produto: ");
			gets(nomeproduto);
			fflush(stdin);
			printf("\nDigite a marca do produto: ");
			gets(marcaproduto);
			fflush(stdin);
			printf("\nDigite a descrição do produto: ");
			gets(descricaoprod);
			fflush(stdin);
			fprintf(pont_arq2, "\n\n\t  %d   \t\t\t", codigoproduto); //adiciona código novo a tabela
			fprintf(pont_arq2, "    %s   \t\t\t", nomeproduto); //adiciona nome
			fprintf(pont_arq2, " %s\t\t\t", marcaproduto); //adiciona marca
			fprintf(pont_arq2, "%s\t\t", descricaoprod); //adiciona descrição
			//fechando
			fclose(pont_arq2);
			//mensagem para o usuário
			printf("\n\nProduto cadastrado com sucesso !!!\n\n");
			system("pause"); //pausa no Windows		
			}
			else
			{
				if(opcao3==2) //excluir registros dos produtos
				{
					//exclui produtos.txt
					//system pause
				}
				else
				{
					if(opcao3==3) //apresenta a lista de produtos
					{
						printf("\n\nS2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2|S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2\n");
	   	   	   	   	   	printf("\n\t                                     \t\tPRODUTOS    \t                                  \n\n");
	   	   	   	   	   	printf("S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2\n");
	   	   	   	   	   	printf("_________________________________________________________________________________________________________________________________________");
	   	   	   	   	   	printf("\n\tCÓDIGO\t\t|\t\tPRODUTO\t\t\t|\t\tMARCA\t\t\t|\tDESCRIÇÃO\t\t|");
	   	   	   	   	   	printf("\n_________________________________________________________________________________________________________________________________________");
	   	   	   	   	   	system("type produtos.txt\n\n");
	   	   	   	   	   	system("Pause");
					}
					else
					{
						printf("\n\nNúmero inválido !!! :/ \n\n");
						system("Pause");
					}
				}
			}
		break;
		case 3: //comprar
			printf("\n1 - não sou cliente cadastrado");
			printf("\n2 - já sou cadastrado");
			printf("\n3 - lista de novos clientes");
			printf("\n4 - lista de pedidos");
			printf("\n5 - excluir lista de novos clientes");
			printf("\n6 - excluir lista de pedidos");
			printf("\n\nDigite uma opção: ");
			scanf("%d", &opcao4);
			fflush(stdin);
			if(opcao4==1) //solicitar cadatro
			{
				FILE *pont_arq3;
	
			//abrindo o arquivo
			pont_arq3 = fopen("clientesnovos.txt", "a");
	
			char nomecomprador[50], emailcomprador[20];
			int telefone;
			printf("\nDigite seu nome completo: ");
			gets(nomecomprador);
			fflush(stdin);
			printf("\nDigite seu email para contato: ");
			gets(emailcomprador);
			fflush(stdin);
			printf("\nDigite seu telefone para contato: ");
			scanf("%d", &telefone);
			fflush(stdin);
			fprintf(pont_arq3, "\n\n\t  %s   \t\t\t", nomecomprador); //adiciona código novo a tabela
			fprintf(pont_arq3, "    %s   \t\t\t", emailcomprador); //adiciona email
			fprintf(pont_arq3, "%d\t\t", telefone); //adiciona telefone
			//fechando
			fclose(pont_arq3);
			//mensagem para o usuário
			printf("\n\n Nossa equipe entrará em contato para realizar seu cadastro, obrigado pela preferência!\n\n");
			system("pause"); //pausa no Windows		
			}
			else
			{
				if(opcao4==2) //Pedidos
				{
						FILE *pont_arq4;
	
				//abrindo o arquivo
				pont_arq4 = fopen("pedidos.txt", "a");
	
				char nomecliente1[50];
				int codigoproduto1, quantidade;
				printf("\nNome do cliente: ");
				gets(nomecliente1);
				fflush(stdin);
				printf("\nDigite código do produto desejado: ");
				scanf("%d", &codigoproduto1);
				fflush(stdin);
				printf("\nDigite a quantidade: ");
				scanf("%d", &quantidade);
				fflush(stdin);
				fprintf(pont_arq4, "\n\n\t  %s   \t\t\t", nomecliente1); //adiciona nome cliente
				fprintf(pont_arq4, "%d\t\t", codigoproduto1); //adiciona produto desejado
				fprintf(pont_arq4, "%d\t\t", quantidade); //adiciona quantidade desejada
				//fechando
				fclose(pont_arq4);
				//mensagem para o usuário
				printf("\n\n Entraremos em contato para confirmar sua compra!\n\n");
				system("pause"); //pausa no Windows	
				}
				else
				{
					if(opcao4==3) //vai mostrar os possíveis novos clientes
					{
					printf("\nNovos clientes interessados:\n");	
					system("type clientesnovos.txt\n\n");
					system("Pause");
					}
					else
					{
						if(opcao4==4) //vai mostrar pedidos
						{
						printf("\nPedidos:\n");	
						system("type pedidos.txt\n\n");	
						system("Pause");
						}
						else
						{
							if(opcao4==5) //exclui registros dos novos clientes
							{
								   //exclui arquivo novoscliente.txt
								   //system pause	
							}
							else
							{
								if(opcao4==6) //exclui registros dos novos produtos
								{
									//exclui arquivo pedidos.txt
									//system pause
								}
								else
								{
									printf("\n\nNúmero inválido !!! :/ \n\n");
									system("Pause");
								}
							}
						}
					}
				}
			}
		break;
		case 4: //quem somos
			printf("S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2|S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2\n");
			printf("\n\t                                     \t\tQUEM SOMOS    \t                                  \n\n");
			printf("S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2\n");
			printf("\n\t\t1 - Nossa Missão");
			printf("\n\t\t2 - Lojas e Matriz");
			printf("\n\nDigite uma opção: ");	
			scanf("%d", &opcao5);
			fflush(stdin);
			if(opcao5==1) //mostra missao da loja
			{
			printf("S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2|S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2\n");
			printf("\n\t                                     \t\tNOSSA MISSÃO    \t                                  \n\n");
			printf("S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2\n");
			printf("\n\tOferecer produtos de qualidade aos nossos clientes e apresentar novas tecnologias que estão surgindo\n\tno mercado. Prezamos acima de tudo pela satisfação do cliente, pelo tratamento justo dos funcionários\n\te pela sustentabilidade da emprese em prol de contribuir com a preservação do nosso planeta.\n");	
			system("Pause");
			}
			else
			{
				if(opcao5==2) //mostra matriz e filiais
				{
				printf("\nS2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2|S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2\n");
				printf("\n\t                                     \t\tLOJAS E MATRIZ    \t                                  \n\n");
				printf("S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2\n");
	   	   	   	printf("_________________________________________________________________________________________________________");
	   	   	   	printf("\n\tCÓDIGO\t\t|\t    LOJA\t\t|\t PAÍS\t\t|\tCIDADE\t\t|\n");
	   	   	   	printf("_________________________________________________________________________________________________________");
	   	   	  	printf("\n\n\t  1   \t\t|\t    MATRIZ    \t\t|\t BRASIL\t\t|\tCURITIBA\t|");
	   	   	   	printf("\n\n\t  2   \t\t|\t    FILIAL    \t\t|\t COREIA DO SUL\t|\tSEOUL\t\t|\n");
	   	   	   	printf("_________________________________________________________________________________________________________\n\n");
				system("Pause");	
				}
				else
				{
					printf("\n\nNúmero inválido !!! :/ \n\n");
					system("Pause");
				}
			}
		break;
		case 5: //Contato
		printf("\nS2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2|S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2\n");
		printf("\n\t                                     \t\tCONTATO    \t                                  \n\n");
		printf("S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2\n");
		printf("\n________________________________________________________________________________________________________________________\n");
		printf("\n\tCÓDIGO\t\t|\t   LOJA\t\t\t|\t\tEMAIL\t\t|\tTELEFONE\t\t|\n");
		printf("\n________________________________________________________________________________________________________________________\n");
		printf("\n\n\t  1   \t\t|\t    MATRIZ    \t\t|\tLOVETECHCTBA@GMAIL.COM  |\t55 41 33447799\t\t|");
	   	printf("\n\n\t  2   \t\t|\t    FILIAL    \t\t|\tLOVETECHSEOUL@NAVER.COM\t|\t82 2 110122433\t\t|\n");
		printf("\n________________________________________________________________________________________________________________________\n\n");
		printf("\n________________________________________________________________________________________________________________________\n\n");
		system("Pause");
		break;
		case 6: //sair
			printf("Pressione ENTER novamente para sair :)\n\n");
			exit(1);
			system("Pause");
        break;
		}
	return 0;} 
	
	/* sssssss 
	//clientes
	printf("\n\t                                     \t\tCLIENTES    \t                                  \n\n");
	printf("S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2\n");
	printf("_________________________________________________________________________________________________________________________________");
	printf("\n\tCÓDIGO\t\t|\t\tNOME\t\t\t|\t\t EMAIL\t\t\t|\tTELEFONE\t\t|");
	printf("\n_________________________________________________________________________________________________________________________________");
	printf("\n\n\t  1   \t\t|\t    BABEL GROUP    \t\t|\t BABELCOMPANY@NAVER.COM\t\t|\t82 2 11083567\t|");
	printf("\n\n\t  2   \t\t|\t    AHN MINHYUK    \t\t|\t AINSOFTCOMPANY@NAVER.COM\t|\t82 2 11095604\t|");
	printf("\n\n\t  3   \t\t|\t    HYBE CORPORATION   \t\t|\t BIGHITENTERTAINMENT@NAVER.COM\t|\t82 2 134340\t|");
	printf("\n_________________________________________________________________________________________________________________________________");
	//produtos
	printf("\n\nS2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2|S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2\n");
	printf("\n\t                                     \t\tPRODUTOS    \t                                  \n\n");
	printf("S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2\n");
	printf("_________________________________________________________________________________________________________________________________________");
	printf("\n\tCÓDIGO\t\t|\t\tPRODUTO\t\t\t|\t\tMARCA\t\t\t|\tDESCRIÇÃO\t\t|");
	printf("\n_________________________________________________________________________________________________________________________________________");
	printf("\n\n\t  1   \t\t|\t    NOTEBOOK M150    \t\t|\t SAMSUNG\t\t\t|\tNOTEBOOK TOUCHSCREEN\t|");
	printf("\n\n\t  2   \t\t|\t    HEADPHONES    \t\t|\t SAMSAN TECH\t\t\t|\tBLUETOOTH\t\t|");
	printf("\n\n\t  3   \t\t|\t    KEYBOARD    \t\t|\t LOVE TECH\t\t\t|\tTECLADO A LASER\t\t|");
	printf("\n\n\t  3   \t\t|\t    POWERBANK    \t\t|\t LOVE TECH\t\t\t|\tCARREGADOR PORTÁTIL\t|");
	printf("\n_________________________________________________________________________________________________________________________________________");
	//COMPRAR
	printf("\n\nDigite o código do produto: \n");
	//QUEM SOMOS
	printf("S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2|S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2\n");
	printf("\n\t                                     \t\tQUEM SOMOS    \t                                  \n\n");
	printf("S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2\n");
	printf("\n\t\t1 - Nossa Missão");
	printf("\n\t\t2 - Lojas e Matriz");
	printf("\n\nDigite uma opção: \n");
	//nossa missão
	printf("S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2|S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2\n");
	printf("\n\t                                     \t\tNOSSA MISSÃO    \t                                  \n\n");
	printf("S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2\n");
	printf("\n\tOferecer produtos de qualidade aos nossos clientes e apresentar novas tecnologias que estão surgindo\n\tno mercado. Prezamos acima de tudo pela satisfação do cliente, pelo tratamento justo dos funcionários\n\te pela sustentabilidade da emprese em prol de contribuir com a preservação do nosso planeta.\n");
	//lojas e sede
	printf("\nS2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2|S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2\n");
	printf("\n\t                                     \t\tLOJAS E MATRIZ    \t                                  \n\n");
	printf("S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2\n");
	printf("_________________________________________________________________________________________________________");
	printf("\n\tCÓDIGO\t\t|\t    LOJA\t\t|\t PAÍS\t\t|\tCIDADE\t\t|\n");
	printf("_________________________________________________________________________________________________________");
	printf("\n\n\t  1   \t\t|\t    MATRIZ    \t\t|\t BRASIL\t\t|\tCURITIBA\t|");
	printf("\n\n\t  2   \t\t|\t    FILIAL    \t\t|\t COREIA DO SUL\t|\tSEOUL\t\t|\n");
	printf("_________________________________________________________________________________________________________");
	//CONTATO
	printf("\nS2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2|S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2\n");
	printf("\n\t                                     \t\tCONTATO    \t                                  \n\n");
	printf("S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2 S2\n");
	printf("\n________________________________________________________________________________________________________________________\n");
	printf("\n\tCÓDIGO\t\t|\t   LOJA\t\t\t|\t\tEMAIL\t\t|\tTELEFONE\t\t|\n");
	printf("\n________________________________________________________________________________________________________________________\n");
	printf("\n\n\t  1   \t\t|\t    MATRIZ    \t\t|\tLOVETECHCTBA@GMAIL.COM  |\t55 41 33447799\t\t|");
	printf("\n\n\t  2   \t\t|\t    FILIAL    \t\t|\tLOVETECHSEOUL@NAVER.COM\t|\t82 2 110122433\t\t|\n");
	printf("\n________________________________________________________________________________________________________________________\n\n");
	printf("\n________________________________________________________________________________________________________________________\n\n");
	*/