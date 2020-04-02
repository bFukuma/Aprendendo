#include <stdio.h>
#include <stdlib.h>

void soma()
{
	system('pause');
	system('cls');
	menu();
}

void subtrai()
{
	system('pause');
	system('cls');
	menu();
}

void divide()
{
	system('pause');
	system('cls');
	menu();
}

void multiplica()
{
	system('pause');
	system('cls');
	menu();
}

void menu()
{
	int escolha;

	printf("\tBem vindo a calculadora em C\n\n");

	printf("Selecione uma operação matematica: \n");
	printf("\t1- Adição\n");
	printf("\t2- Subtração\n");
	printf("\t3- Divisão\n");
	printf("\t4- Multiplicção\n");
	printf("\t5- Sair\n");
	printf("Operação: ");
	scanf("%d", &escolha);

	switch (escolha)
	{
	case 1:
		soma();
	break;

	case 2:
		subtrai();
	break;

	case 3:
		divide();
	break;

	case 4:
		multiplica();
	break;

	defaut:
		printf("\nComando invalido, tente novamente!\n\n");
		system("pause");
		system("cls");
		menu();
		break;
	}
}


int main()
{
	menu();
	system("pause");
	return 0;
}
