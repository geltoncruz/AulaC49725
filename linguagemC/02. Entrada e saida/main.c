#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
// 50419
  int dias,idade;
  printf("Informe sua idade");
  scanf("%d",&idade);
  dias = idade*360;

  printf("Sua idade em dias é: %d",dias );

  system("PAUSE");
  return 0;
}
