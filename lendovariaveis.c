#include <stdio.h>
#include <stdlib.h>

/*
String é um vetor de caracteres
*/

int main() {
	char nome[20]; //é preciso declarar quantos caracteres são permitidos no vetor
	char sobrenome[20];
	int idade;
	int valor;
	char senha[20];
	printf("Digite seu nome: ");
	scanf("%s", nome);
	printf("Digite seu sobrenome: ");
	scanf("%s", sobrenome);
	printf("Qual a sua idade? ");
	scanf("%d", &idade); //Qunado não é declarado a quantidade de caracteres possiveis é importante usar '&'
	printf("Quanto é 10 + 10? ");
	scanf("%d", &valor);
	printf("Digite a senha: ");
	scanf("%s", senha);
	printf("Seu nome é: %s %s\n", nome, sobrenome);
	printf("Você tem %d anos.\n", idade);
	printf("A resposta da soma é 20 e você respondeu: %d\n", valor);
	printf("Sua senha é: %s\n", senha);
	return 0;
}

