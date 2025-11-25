/*
	Name: DadosUsuário.cpp
	Author: Giovanni Tonsa
	Date: 18/11/25 11:28
	Description: Programa com a entrada de dados alternando as cores do monitor.
*/
	#include<stdio.h>
	#include<stdlib.h>
	#include<stdlib.h>
	#include <windows.h>
	# define GREEN "\033[1;32m"
	# define RED "\033[1;31m"
	# define YELLOW "\033[1;33m"
	# define PADRAO "\033[0m"
	#define PURPLE "\033[0;35m"
	#define CYAN "\033[0;36m"
main()
{
	char nome[30];
	int idade;
	char sexo;
	float altura;

	system("color");
	printf(RED"nome: "PADRAO);
	gets(nome);
	
	printf(YELLOW"Sexo: "PADRAO);
	scanf("%s",&sexo);
	
	printf(PURPLE"Idade: "PADRAO);
	scanf("%d",&idade);
	
	printf(CYAN"Altura: "PADRAO);
	scanf("%f",&altura);
	
	if(sexo == 'M'|| sexo =='m')
		printf(" %s tem %d anos, %.2f de altura e e Homem ",nome,idade,altura,sexo);
	else if(sexo =='F'||sexo =='f')
		printf(" %s tem %d anos, %.2f de altura e e Mulher ",nome,idade,altura,sexo);
	else
		printf("Erro de formatação em sua resposta[Sexo]");
}//fim