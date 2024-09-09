#include <stdio.h>

int main() {
    int numjogadores, numerojogador, idade, maisvelhonum, maisjovemnum;
    int idademaisvelho = 0, idademaisjovem = 100, somaidades = 0;

    printf("Digite o numero de jogadores do time: ");
    scanf("%d", &numjogadores);

	int i;
    for (i = 0; i < numjogadores; i++) {
        printf("Digite o numero do jogador %d: ", i + 1);
        scanf("%d", &numerojogador);
        printf("Digite a idade do jogador %d: ", i + 1);
        scanf("%d", &idade);

        if (idade > idademaisvelho) {
            idademaisvelho = idade;
            maisvelhonum = numerojogador;
        }

        if (idade < idademaisjovem) {
            idademaisjovem = idade;
            maisjovemnum = numerojogador;
        }

        somaidades += idade;
    }

    float mediaidade = (float)somaidades / numjogadores;

    printf("\nO jogador mais velho e o numero %d com %d anos.\n", maisvelhonum, idademaisvelho);
    printf("O jogador mais jovem e o numero %d com %d anos.\n", maisjovemnum, idademaisjovem);
    printf("A media de idade dos jogadores e %.2f anos.\n", mediaidade);

    return 0;
}

