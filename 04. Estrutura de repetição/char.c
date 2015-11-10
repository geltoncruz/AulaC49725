int main()
{
   int x, j;
   char palavra[100];
   printf("Digite seus caracteres\n\n");
   for (x=0; x<100; x++)
   {
        scanf("%c", &palavra[x]);
        if (palavra[x] == 'x')
        {
            printf("\n=================================================\n\n");
            printf("Voce teclou: \n\n");
            for (j=0; j<x; j++)
            {
                printf("%c", palavra[j]);
            }
            printf("\n\n");
            break;
        }
   }
   return 0;
}
