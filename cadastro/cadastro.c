#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char nome[50];
	int idade;
	int matricula;
	float altura;

}	t_aluno;

void add_aluno(t_aluno *aluno,)
{
	char* messages[4] = {
		"| Digite o nome do aluno: ",
		"| Digite a idade do aluno: ",
		"| Digite a matrícula do aluno: ",
		"| Digite a altura do aluno: "
	};
	char* inputs[4] = {
		aluno->nome,
		(char*)&aluno->idade,
		(char*)&aluno->matricula,
		(char*)&aluno->altura
	};
	char* formats[4] = {
		"%s",
		"%d",
		"%d",
		"%f"
	};

	for (int i = 0; i < 4; i++){
		printf("%s", messages[i]);
		scanf(formats[i], inputs[i]);
	}
}

void print_aluno(t_aluno *aluno)
{
	for (int i = 0; i < 50; i++)
		printf("-");
	printf("\n");

	printf("\tNome: %s\n", aluno->nome);
	printf("\tIdade: %d\n", aluno->idade);
	printf("\tMatrícula: %d\n", aluno->matricula);
	printf("\tAltura: %.2f\n", aluno->altura);

	for (int i = 0; i < 50; i++)
		printf("-");
	printf("\n");
}

int main(void)
{
	co
	t_aluno aluno;
	
	add_aluno(&aluno);
	print_aluno(&aluno);
	
	return (0);
}