#include <stdio.h>

int main() {
  printf("*****************************************\n");
  printf("* Bem-vindo(a) ao jogo de adivinhações! *\n");
  printf("*****************************************\n");
  int numerosecreto = 42;
  int chute;
  printf("Qual é o seu chute?");
  scanf("%d", &chute);
  printf("Você chutou o número %d\n", chute);
  if (chute == numerosecreto) {
    printf("Parabéns, você acertou!\n");
    printf("Você é um bom jogador!\n");
  } else {
    if (chute > numerosecreto) {
      printf("O seu chute foi maior que o número secreto!\n");
    }
    if (chute < numerosecreto) {
      printf("O seu chute foi menor que o número secreto!\n");
    }
  }
}
