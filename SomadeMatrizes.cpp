/*
	Name: SomadeMatrizes.cpp
	Author: Giovanni Tonsa
	Date: 18/11/25 09:59
	Description: Programa que soma duas matrizes
*/

# include <stdio.h>
# include <stdlib.h>
# define GREEN "\033[1;32m"
# define RED "\033[1;31m"
# define YELLOW "\033[1;33m"
# define PADRAO "\033[0m"

main()
{
	int matA[2][2], matB[2][2], mats[2][2], i, j;
	
	system("color");
	printf(GREEN);
	puts("Digite os elementos da matriz A: ");
	printf(PADRAO);
	for(i = 0; i < 2; i++)
		for(j = 0; j < 2; j++)
		{
			printf("[%d][%d] ", i, j);
			scanf("%d", &matA[i][j]);
		}
		
	printf(RED);
	puts("\nDigite os elementos da matriz B: ");
	printf(PADRAO);
	for(i = 0; i < 2; i++)
		for(j = 0; j < 2; j++)
		{
			printf("[%d][%d] ", i, j);
			scanf("%d", &matB[i][j]);
		}
		
		for(i = 0; i < 2; i++)
			for(j = 0; j < 2; j++)
				mats[i][j] = matA[i][j] + matB[i][j];
				
	printf(YELLOW);
	puts("\nResultado das matrizes e: ");
	printf(PADRAO);
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("\t%d", mats[i][j]);
		}
		puts("\n");
	}
	
}// fim do programa

