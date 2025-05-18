#include<stdio.h>
void tabuleiro(){
char *linha[10] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J"}; /// codigo de posicao de J
int matriz[10][10]= {0};   ///  codigo de tabuleiro 
int Valor0 = 0, Valor1 = 0;
printf("-- #### -- TABULEIRO -- #### -- \n ");
printf("[]");
for (int i = 0; i < 10; i++)
{
printf("%s  ", linha[i] );
};
printf("\n");

for (int i = 0; i < 10; i++)  /// codigo de exibicao do tabuleiro 
{    printf("|%d|", i + 0);
    for (int j = 0; j < 10; j++)
    printf("%d  ", matriz[i][j]),(matriz[i][j]== 0 ? Valor0++ : Valor1++); //// codigo de exibicao de posicao de habilidade 
    {
        printf("\n");
    }
};
printf("A quantidade de posicoes que sao afetadas pela habilidade e: %d posicoes\n", Valor1);
printf("A quantidade de posicoes que NAO sao afetadas pela habilidade e: %d posicoes \n", Valor0);
};
void naviosHori(){
char *linha[10] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
int matriz[10][10]= {0};   /// matriz de codigo para o tabuleiro 
int Valor0 = 0, Valor1 = 0;

printf("Aqui esta todos os navios na Horizontel \n"); 

printf("-- #### -- TABULEIRO -- #### -- \n ");
printf("[]");
for (int i = 0; i < 10; i++)  /// codigo para exibir o menu de j
{
printf("%s  ", linha[i] );
};
printf("\n");
 for (int i = 3; i < 6; i++) /// codigo para exibica de navios 
 {
    matriz[0][i] = 3;
 } for (int i = 6; i < 9; i++)
 {
    matriz[9][i] = 3;
 } for (int i = 0; i < 3; i++)
 {
    matriz[7][i] = 3;
 }
   
matriz[5][4]= 3;    ////  codigo de exibicao de navios 
matriz[6][4]= 3;
matriz[7][4]= 3;
matriz[1][9]= 3;
matriz[2][9]= 3;
matriz[3][9]= 3;
matriz[0][0]= 3;
matriz[1][0]= 3;
matriz[2][0]= 3;

for (int i = 0; i < 10; i++)  /// codigo de exibicao de tabuleiro 
{    printf("|%d|", i + 0);
    for (int j = 0; j < 10; j++)
    printf("%d  ", matriz[i][j]),(matriz[i][j]== 0 ? Valor0++ : Valor1++);  /// codigo que mostra o tabuleiro e a posicao de habiliidade 
    {
        printf("\n");
    }
};
printf("A quantidade de posicoes que sao afetadas pela habilidade e: %d posicoes\n", Valor1);
printf("A quantidade de posicoes que NAO sao afetadas pela habilidade e: %d posicoes \n", Valor0);
};
void cone(){
char *linha[10] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};  /// codigo de menu j
int matriz[10][10]= {0};
int Valor0 = 0, Valor1 = 0;
printf("-- #### -- TABULEIRO -- #### -- \n ");   /// inicio do tabuleiro 
printf("[]");
for (int i = 0; i < 10; i++)
{
printf("%s  ", linha[i] );
};
printf("\n");

matriz[2][2]= 1;  ////  codigo de demostracao da habilidade 
for (int i = 1; i < 4; i++)
{
    matriz[3][i]=1;
}
for (int i = 0; i < 5; i++)
{
    matriz[4][i]=1;
}


for (int i = 0; i < 10; i++)  /// codigo de inicializacao do tabuleiro 
{    printf("|%d|", i + 0);
    for (int j = 0; j < 10; j++)
    printf("%d  ", matriz[i][j]),(matriz[i][j]== 0 ? Valor0++ : Valor1++); /// codigo de posicoes de habilidade 
    {
        printf("\n");
    }
};
printf("A quantidade de posicoes que sao afetadas pela habilidade e: %d posicoes\n", Valor1);
printf("A quantidade de posicoes que NAO sao afetadas pela habilidade e: %d posicoes \n", Valor0);
};
void cruz(){
char *linha[10] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
int matriz[10][10]= {0};
int Valor0 = 0, Valor1 = 0;
printf("-- #### -- TABULEIRO -- #### -- \n ");
printf("[]");
for (int i = 0; i < 10; i++)
{
printf("%s  ", linha[i] );
};
printf("\n");

for (int i = 5; i <= 9; i++)
{
    matriz[6][i] = 1 ;

    for (int i = 5; i < 8; i++)
    {
        matriz[i][7] = 1 ;
    }
}

for (int i = 0; i < 10; i++)
{    printf("|%d|", i + 0);
    for (int j = 0; j < 10; j++)
    printf("%d  ", matriz[i][j]),(matriz[i][j]== 0 ? Valor0++ : Valor1++);
    {
        printf("\n");
    }
};
printf("A quantidade de posicoes que sao afetadas pela habilidade e: %d posicoes\n", Valor1);
printf("A quantidade de posicoes que NAO sao afetadas pela habilidade e: %d posicoes \n", Valor0);
}
void octaedro(){
char *linha[10] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J"}; /// codigo para posicao de j
int matriz[10][10]= {0};
int Valor0 = 0, Valor1 = 0;
printf("-- #### -- TABULEIRO -- #### -- \n ");
printf("[]");
for (int i = 0; i < 10; i++)
{
printf("%s  ", linha[i] );   
};
printf("\n");
for (int i = 6; i < 9; i++)   //// posicao que esta a habilidade 
{ 
    matriz[2][i] = 1 ;

    for (int i = 1; i < 4; i++)
    {
        matriz[i][7] = 1 ;
    }
}


for (int i = 0; i < 10; i++)  /// codigo do tabuleiro 
{    printf("|%d|", i + 0);
    for (int j = 0; j < 10; j++)
    printf("%d  ", matriz[i][j]),(matriz[i][j]== 0 ? Valor0++ : Valor1++);;  /// codigo impresao do tabuleiro e codigo das posicoes de habilidades
    {
        printf("\n");
    }
};
printf("A quantidade de posicoes que sao afetadas pela habilidade e: %d posicoes\n", Valor1);
printf("A quantidade de posicoes que NAO sao afetadas pela habilidade e: %d posicoes \n", Valor0);
};
void tudoJunt (){
char *linha[10] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};  /// menu de posicao de j
int matriz[10][10]= {0};
int Valor0 = 0, Valor1 = 0;


printf("-- #### -- TABULEIRO -- #### -- \n ");
printf("[]");
for (int i = 0; i < 10; i++)    ///   codigos de possicao de barcos e funcoes 
{
printf("%s  ", linha[i] );
};
printf("\n");
for (int i = 3; i < 6; i++)
 {
    matriz[0][i] = 3;
 } for (int i = 6; i < 9; i++)
 {
    matriz[9][i] = 3;  
 } for (int i = 0; i < 3; i++)     ///   codigos de possicao de barcos e funcoes 
 {
    matriz[7][i] = 3;
 }
 for (int i = 6; i < 9; i++)
{
    matriz[2][i] = 1 ;

    for (int i = 1; i < 4; i++)
    {
        matriz[i][7] = 1 ;
    }
}

matriz[5][4]= 3;       ///   codigos de possicao de barcos e funcoes 
matriz[6][4]= 3;
matriz[7][4]= 3;
matriz[1][9]= 3;
matriz[2][9]= 3;
matriz[3][9]= 3;
matriz[0][0]= 3;
matriz[1][0]= 3;
matriz[2][0]= 3;
matriz[2][2]= 1;
for (int i = 1; i < 4; i++)
{
    matriz[3][i]=1;
}
for (int i = 0; i < 5; i++)     ///   codigos de possicao de barcos e funcoes 
{
    matriz[4][i]=1;
}
for (int i = 5; i <= 9; i++)
{
    matriz[6][i] = 1 ;

    for (int i = 5; i < 8; i++)    ///   codigos de possicao de barcos e funcoes 
    {
        matriz[i][7] = 1 ;
    }
}


  for (int i = 0; i < 10; i++)   /// codigo para replicar o tabuleiro 
{    printf("|%d|", i + 0);
    for (int j = 0; j < 10; j++)   
    printf("%d  ", matriz[i][j] ),(matriz[i][j]== 0 ? Valor0++ : Valor1++);  ///  codigo sobre codigo para saber as posicoes ultilizadas 
    {
        printf("\n");
    }
  
};

printf("A quantidade de posicoes que sao afetadas pela habilidade e: %d posicoes\n", Valor1);
printf("A quantidade de posicoes que NAO sao afetadas pela habilidade e: %d posicoes \n", Valor0);


}

int main(){
int opcaoMenu;

 
do    ///  usando o do while para aprensentar o menu ao memos uma vez 
{
    printf("--------------------- \n");    ///MENU INTERATIVO
    printf("|-- ESSE E O MENU --| \n");
    printf("| 1.M. Tabuleiro    | \n");
    printf("| 2.Mostra Navios.. | \n");
    printf("| 3.Cone...         | \n");
    printf("| 4.Cruz...         | \n");
    printf("| 5.Octaedro...     | \n");
    printf("| 6.Todos Juntos..  | \n");
    printf("| 7.Saindo...       | \n");
    printf("|Escolha  uma opcao | \n");
    printf("--------------------- \n");
    scanf("%d",&opcaoMenu);

    switch (opcaoMenu)   /// comando para puxar o void  com as opcoes do menu 
   {
    case 1:
        tabuleiro();
    break;
    case 2:
        naviosHori();
    break;
    case 3:
        cone();
    break;
    case 4:
        cruz();
    break;
    case 5:
        octaedro();
    break; 
    case 6:
        tudoJunt(); 
    break;
    case 7:
        printf("Obrigado por Participar! \n");   /// opcao sace 4 para saida do codigo 
        printf("Saindo ..... \n");
    break; 
    default:
        printf("Opcao Invalida \n");  /// opcao invalida do menu interativo
    break;
   }


} while (opcaoMenu != 7);




}