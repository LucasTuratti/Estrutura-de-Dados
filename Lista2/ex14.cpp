//14) Em uma escola, um aluno passa direto se obtiver m?dia final maior ou igual a 7. 
//Se a m?dia for inferior a 4, ele est? reprovado direto, sem direito a prova final. 
//Em outro caso, ele vai ? final, e a nota que ele precisa para passar ? o que falta ? m?dia final para completar 10. 
//Fa?a um programa que receba as duas notas parciais, calcule a m?dia final e informe ao aluno sua situa??o inclusive 
//informando a ele quanto precisa tirar na final, se este for o seu caso.

#include <stdio.h>

int main(){
	
	float nota1,nota2, media, mediafinal=10, notafalta;
	
	printf("Qual a nota 1: ");
	scanf("%f",&nota1);
	
	printf("Qual a nota 2: ");
	scanf("%f",&nota2);
	
	media = (nota1+nota2)/2;
	
	if(media<4){
		printf("Voce esta reprovado direto, sem direito a prova final\n");
	}else if (media >=7){
		printf("Voce esta aprovado diretamente\n");
	}else{
		notafalta = mediafinal - media ;
		printf("Voce precisa  fazer a  prova final precissando tira  uma nota:%f\n", notafalta);
	}
	return 0;
}
