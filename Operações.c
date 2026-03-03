#include <stdio.h>

int main() {

/*
Soma (+)
Subtração (-)
Multiplicação (*)
Divisão (/)
*/

int numero1, numero2;
int soma, subtração, multiplicação, divisão;

printf ("Entre com o numero1:\n");
scanf ("%d", &numero1);

printf("Entre com o numero2:\n");
scanf ("%d", &numero2);
// Operação soma

soma = numero1 + numero2;

// Opreção Subtração 

subtração = numero1 - numero2;

// Operação Multiplicação 

multiplicação = numero1 * numero2;

// Operação Divisão

divisão = numero1 / numero2;

printf(" A soma é: %d\n", soma);
printf(" A subtração é: %d\n", subtração);
printf(" A multiplicação é: %d\n", multiplicação);
printf(" A divisão é: %d\n", divisão);

}