#include <stdio.h>
#define NUMERO_DE_TENTATIVAS 3
int main() {
  printf("*****************************************\n");
  printf("* Bem-vindo(a) ao jogo de adivinhações! *\n");
  printf("*****************************************\n");
int numerosecreto = 42;
int chute;
  
for(int i = 1; i<=NUMERO_DE_TENTATIVAS; i++) {
  printf("Qual é o seu chute?\n");
  scanf("%d", &chute);
  printf("Você chutou o número %d\n", chute);
  
int acertou = chute == numerosecreto;
int maior = chute > numerosecreto;
  
 if (acertou) {
   printf("Parabéns, você acertou!\n");
   printf("Você é um bom jogador!\n");
   break;
  } else if(maior) {  
   printf("O seu chute foi maior que o número secreto!\n");
 } else {
   printf("O seu chute foi menor que o número secreto!\n");
    }
  }
    printf("Fim de jogo!");
}

