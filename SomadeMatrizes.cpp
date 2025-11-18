/*
	Name: SomadeMatrizes.cpp
	Author: Giovanni Tonsa
	Date: 18/11/25 09:59
	Description: Programa que soma duas matrizes
*/

# include <stdio.h>
# include <stdlib.h>

main()
{
	int matA[2][2], matB[2][2], mats[2][2], i, j;
	
	system("color 5");
	puts("Digite os elementos da matriz A: ");
	for(i = 0; i < 2; i++)
		for(j = 0; j < 2; j++)
		{
			printf("[%d][%d] ", i, j);
			scanf("%d", &matA[i][j]);
		}
		
	system("color 3");
	puts("\nDigite os elementos da matriz B: ");
	for(i = 0; i < 2; i++)
		for(j = 0; j < 2; j++)
		{
			printf("[%d][%d] ", i, j);
			scanf("%d", &matB[i][j]);
		}
		
		for(i = 0; i < 2; i++)
			for(j = 0; j < 2; j++)
				mats[i][j] = matA[i][j] + matB[i][j];
				
	system("color 4");
	puts("\nResultado das matrizes e: ");
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("\t%d", mats[i][j]);
		}
		puts("\n");
	}
	
}// fim do programa

