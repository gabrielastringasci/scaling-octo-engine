#include<stdio.h>
#include<stdlib.h>
struct aluno{
	int ra;
	float p1, p2, media ;
};
int main (void){
	struct aluno *aluno1, *aluno2, *mediamaior;
	
	if(!(aluno1=malloc(sizeof(struct aluno)))){
		printf("Faltou mem�ria!");
		exit(1);
	}
	if(!(aluno2=malloc(sizeof(struct aluno)))){
		printf("Faltou mem�ria!");
		exit(2);
	}

	printf("Digite o RA do aluno1:\n");
		scanf("%d",&(aluno1->ra));
	printf("Digite o RA do aluno2:\n");
		scanf("%d",&(aluno2->ra));
		
	printf("Digite a primeira nota do aluno1:\n");
		scanf("%f",&(aluno1->p1));
	printf("Digite a segunda nota do aluno1:\n");
		scanf("%f",&(aluno1->p2));
		
	printf("Digite a primeira nota do aluno2:\n");
		scanf("%f",&(aluno2->p1));
	printf("Digite a segunda nota do aluno2:\n");
		scanf("%f",&(aluno2->p2));
		
	aluno1->media=(aluno1->p1+aluno1->p2)/2.0;
	aluno2->media=(aluno2->p1+aluno2->p2)/2.0;
	
	if(aluno1->media > aluno2->media){
		mediamaior=aluno1;
	} else {
		mediamaior=aluno2;
	}
	
	printf("A maior media eh: %1.f\n",mediamaior->media);
	
	free(aluno1);
	free(aluno2);

	return 0;
}
