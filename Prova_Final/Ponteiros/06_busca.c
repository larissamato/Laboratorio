/*
	Sistema de Busca de Componentes em Linguagem C ANSI
	
	do Curso WRKits

*/


//Bibliotecas Auxiliares
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//------Prototipo das Fun��es Auxiliares---
int check(char *s);
void take_component();

//---Variaveis Globais---
char databank[][40] = {//Matriz contendo os componentes e respectivas caracteristicas
						"BC547"      ,"TBJ NPN 625mW",
						"BC557"      ,"TBJ PNP 625mW",
						"TIP41"      ,"TBJ NPN 65W",
						"TIP42"      ,"TBJ PNP 65W",
						"TIP122"     ,"TBJ NPN Darlington 100V 5A",
						"TIP127"     ,"TBJ PNP Darlington 100V 5A",
						"2N2222"     ,"TBJ NPN High Frequency 500mW",
						"2N7000"     ,"Mosfet N channel",
						"IRF3205"    ,"Mosfet N channel 55V 98A",

						};
						
char input[80]; 			//Matriz para entrada de dados(componente em pesquisa)
char component[80];			//Matriz passada como par�metro para fun��o check
char *point;				//Ponteiro


// --- Fun��o Principal ---		
int main()
{
		int indice;								//Armazena o �ndice do componente
		char option;							//Armazena a op��o escolhida
	
	do											//Loop
	{
		printf("Informe o componente que deseja pesquisar: ");//solicita que o usuario pesquise um componente
		scanf("%s",input);										  //l� o componente digitado pelo usuario	
		point = input;										  //atribui a point o endere�o da matriz input	
		printf("Caracteristicas do componente pesquisado: ");
		take_component();									  //pega o primeiro componente	
		
		//Loop pra ler um componente por vez da matriz input e exibe suas caracter�sticas.
		do
		{
			//procura o �ndice do componente em databank
			indice = check(component);
			
			//imprime a palavra em portugu�s se foi traduzida
			if(indice != -1) printf("%s", databank[indice+1]);
			else printf("Sem registros no banco de dados /n");
			
			
			take_component();									//Pega proxima palavra
			
		}while(*component);										//repete at� encontrar um string nula
		
		printf("\n");											//Quebra de linha
		
		printf("Pesquisar mais? S - sim | N - nao \n"); 		//Pergunta se o usuario quer pesquisar mais
		scanf("%c", &option);									//Armazena a op��o escolhida em option
		getchar();												//Limpa o buffer do teclado
		
	}while(option == 's' || option == 'S');
	
	system("PAUSE")	;
	return 0;
}//end main



// --- Desenvolvimento das Fun��es Auxiliares
int check(char *s)							//Repita a localiza��o de uma correspond�ncia entre a string
{
	int i;									//Variavel de itera��es
	
	for(i=0; *databank[i];i++)				//Varre a matriz databank
	{
		if(!strcmp(databank[i],s)) break; 	//Compara��o das matrizes databank e s
		
	}//end for
	
	if(*databank[i]) return(i); 			//Retorna o �ndice corresponde, se uma correspondencia existir
	else return(-1);						//Retorna -1 se nao houver uma correspondencia
}//end check

/*
	take_component le o proximo componente da matriz input. Cada componente � considerado
	como sendo separado por um espa�o ou pelo terminador nulo.
	Nenhuma outra pontua��o � permitida.
	O componente retornado ser� uma stringde tamanha nulo quando o final da string input
	� encontrado.
*/
void take_component()
{
	char *q; //ponteiro auxiliar
	
	//Recarrega o endere�o do componente toda vez que a fun��o � chamada.
	q = component;
	
	//pega o proximo componente
	while(*point && *point!=' ') 	//Shift no endere�o dos �ndices da matriz databank
	{
		*q = *point;
		point++;
		q++;
	}//end while
	
	if(*point == ' ') point++;
	*q = '\0';			//terminador nulo
	
}//end take_component























						
						
						