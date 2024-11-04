#include <stdio.h>
#include <stdlib.h>

// procedimentos

void welcome_msg (); // mensagem de boas vindas ao programa

void multiplicationTable (int num_input, int num_limit); // gerando tabuada


int main () {

	// variaveis
	int input_num, input_num_limit;


	// welcome
	welcome_msg();

	// capturando a telca de inicio do programa
	printf("\n\nPor favor, pressione a tecla enter para continuar: ");
	// esperando a entrada com a tecla <ENTER>
	while (getchar() != '\n');


	// MathBoost

	do {

		// limpando a tela do terminal
		system("cls");

		// capturando o número do usuário
		printf("Digite o número da tabuada que deseja gerar: ");
		scanf("%d", &input_num);
		putchar('\n');

		// capturando o número de limite da tabuada
		printf("Digite o número limite para a tabuada: ");
		scanf("%d", &input_num_limit);
		putchar('\n');

		// limpando a tela do terminal
		system("cls");

		// mostrando tabela de tabuada
		multiplicationTable(input_num, input_num_limit);

		putchar('\n');

		// limpando buffer
		while(getchar() != '\n');

		printf("Deseja gerar novas tabuadas? (S para sim | N para não): ");

		if (getchar() == 's') {
			continue;
		} else {
			// limpando a tela do terminal
			system("cls");
			
			puts("Obrigado!");
			break;
		}

	} while (1);


}


// procedimentos

void welcome_msg () {

	/*
		Mensagem de boas vindas
	*/

	puts("Bem-vindo ao MathBoost!\n");
	puts("Prepare-se para turbinar seu aprendizado matemático!\nCom o MathBoost, você pode gerar tabuadas completas e praticar de maneira fácil e rápida.\nBasta escolher um número e o limite que deseja, e nós cuidaremos do resto.\n\nVamos começar e elevar suas habilidades em matemática!");
}

void multiplicationTable (int num_input, int num_limit) {

	puts("Tabela de Tabuada:");
	puts("===========================");
	for (int i = 0; i <= num_limit; i++) {
		printf("%d * %d = %d\n", num_input, i, num_input * i);
	}
	puts("===========================");
}