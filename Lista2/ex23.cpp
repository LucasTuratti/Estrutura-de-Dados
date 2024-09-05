// 23) Fa�a um algoritmo que leia as tr�s notas de 5 alunos de uma turma. Para cada aluno, calcule a m�dia ponderada, como segue: MP = ( n1*2 + n2*4 + n3*3 ) / 10. 
// Al�m disso, calcule a m�dia geral da turma. Mostre a m�dia de cada aluno e uma mensagem "Aprovado", caso a m�dia seja maior ou igual a sete,
// e uma mensagem "Reprovado", caso contr�rio. Ao final, mostre a m�dia geral.

#include <stdio.h>

int main() 
{
    float nota1, nota2, nota3, mediaponderada, somaMedias = 0.0, mediageral;
    int i;
    
   
    for (i = 1; i <= 5; i++) 
	{
        printf("Digite as tres notas do aluno %d:\n", i);
        scanf("%f %f %f", &n1, &n2, &n3);
        

        mediaPonderada = (nota1*2 + nota2*4 + nota3*3) / 10.0;
        somaMedias += mediaPonderada; 
        
        printf("Media ponderada do aluno %d: %.2f\n", i, mediaPonderada);
        
        if (mediaPonderada >= 7) {
            printf("Aluno %d: Aprovado\n", i);
        } else {
            printf("Aluno %d: Reprovado\n", i);
        }
        
        printf("\n"); 
    }
    
   
    mediaGeral = somaMedias / 5;
    printf("M�dia geral da turma: %.2f\n", mediaGeral);

    return 0;
}

