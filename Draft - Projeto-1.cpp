#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


struct cadastro_do_jogador
{
	char nome[40];
	int idade;
	char nome_sele[40];
	
};

               
int achou(int r, int *s, int sorteados[5]) {
	
	
	for( int i = 0; i < *s; i++ ) {
		if( r == sorteados[i] )
			return 1;		
	}
	sorteados[*s] = r;
	(*s)++;
	return 0;	
}


int main(){
	
char g[26][50];

  strcpy(g[0], "Neuer (Alemanha)(96)");
  strcpy(g[1], "Rui Patricio (Portugal)(82)");
  strcpy(g[2], "Cassilas (Espanha)(88)");
  strcpy(g[3], "Alisson (Brasil)(81)");
  strcpy(g[4], "Lloris (Franca)(90)");
  strcpy(g[5], "Akinfeev (Russia)(79) ");
  strcpy(g[6], "Ochoa (Mexico)(80)");
  strcpy(g[7], "Sommer (Suica)(82)");
  strcpy(g[8], "Muslera (Ururguai)(83)");
  strcpy(g[9], "Hart (Inglaterra)(84)");
  strcpy(g[10], "Navas (Costa Rica)(87)");
  strcpy(g[11], "Courtois (Belgica)(92)");
  strcpy(g[12], "Schmeichel (Dinamarca)(83)");
  strcpy(g[13], "Subasic (Croatia)(82)");
  strcpy(g[14], "Sergio Romero (Argentina)(78)");
  strcpy(g[15], "Ospina (Colombia)(79)");
  strcpy(g[16], "Kawashima (Japao)(77)");
  strcpy(g[17], "Szczesny (Polonia)(81)");
  strcpy(g[18], "Isaksson (Suecia)(78)");
  strcpy(g[19], "Ryan (Australia)(77)");
  strcpy(g[20], "Trapp (Alemanha)(81)");
  
  
  
  int sorteados[5];
  int s = 0;
  
	
  int i, v;
  
 
     printf("\t\t\t     World Cup Draft\n\n\n");
     printf("    Estamos quase chegando no ano da copa do mundo, e nada melhor para entramos no clima, do se divertir com um minigame desse grandioso evento.");
     printf("\n\n    O minigame consiste em montar um elenco,escolhendo jogadores para cada posicao em um sorteio de cinco jogadores aleatorios, que iram participar ou que ja participaram do campeonato mais importante do mundo.\n\n\n");
      system( "pause" ); 
      system("CLS");
      struct cadastro_do_jogador jogador;

printf("\t\t---------- Cadastro do Jogador -----------\n\n\n");
   
  printf("Primeiramente,digite seu nome: ");
  fflush(stdin); 
  fgets(jogador.nome, 40, stdin);
   
  printf("\nQuantos anos voce tem: ");
  scanf("%d", &jogador.idade);
   
  fflush(stdin); 

   system("CLS");
    		
     printf("%s Voce gostaria de ver o tutorial?\t(Digite 1 para Sim ou 0 para Nao)\n\n\n",jogador.nome);
     
     
	 int x;
     
	
     scanf(" %d", &x);
     fflush(stdin);
     
      system("CLS");
     
     if (x == 1)
     
	 {
	  
      printf("\t\t---------- Tutorial -----------\n");
	  printf("\n\nPara escolher o jogador basta somente digitar o numero que aparece na frente de seu nome\n\n");
	  printf("\nExemplo:  (Numero)\t(Jogador)(Selecao)(Overall)\n\n");
	  printf("\n\nPortanto Digite somente o valor do (Numero) corresponde ao determinado (Jogador) de sua escolha.  ^_^\n\n\n\n\n\n");
	  system( "pause" ); 
	  system("CLS");
	   }
	  
	if (x == 0)
	   {
	   	
	
	   
	   }
     if (x != 0 && x != 1) {
       printf("\n\nCaractere foi Invalido, Portanto vamos Continuar:\n\n\n");
       system( "pause" );
	 system("CLS");
      }
       
       

       
	  
	 printf("\n\nVamos Comecar! (^_-)\n\n\n\n");
	 
	 system( "pause" );
	 system("CLS");
	printf("---------- World Cup Draft -----------\n\n\n");
	system("color B1");//Windows
//	foreground(GREEN);Linux background(GREEN);
     printf("Escolha um Goleiro:\n\n\n");
    printf("--------------------------------------------\n\n");
     
 
     srand(time(NULL));
     
     
     for (i = 0; i < 5; i++)
     {
		int r;
         do	{	 
            r = (rand() %  21);
		} while ( achou( r, &s, sorteados) );                  
         
        
		printf("%d\t%s\n\n\n", r+1, g[r]);
	  }
printf("--------------------------------------------\n");
     scanf(" %d" , &v);
     getchar();
     fflush(stdin);
    
           
if(v==1)
	 
	 
printf ("Voce Escolheu para Goleiro:\t%s", g[0]);

if(v==2)
	 
       printf ("\n\nVoce Escolheu para Goleiro:\t%s", g[1]);
 
if(v==3)
        printf ("\n\nVoce Escolheu para Goleiro:\t%s", g[2]);
    
 
if(v==4)
        printf ("\n\nVoce Escolheu para Goleiro:\t%s", g[3]);
     
 
if(v==5)
        printf ("\n\nVoce Escolheu para Goleiro:\t%s", g[4]);
    

if(v==6)
        printf ("\n\nVoce Escolheu para Goleiro:\t%s", g[5]);
     

if(v==7)
        printf ("\n\nVoce Escolheu para Goleiro:\t%s", g[6]);
     

if(v==8)
        printf ("\n\nVoce Escolheu para Goleiro:\t%s", g[7]);
    

if(v==9)
        printf ("\n\nVoce Escolheu para Goleiro:\t%s", g[8]);


if(v==10)

        printf ("\n\nVoce Escolheu para Goleiro:\t%s", g[9]);
     

if(v==11)
        printf ("\n\nVoce Escolheu para Goleiro:\t%s", g[10]);
     

if(v==12)
        printf ("\n\nVoce Escolheu para Goleiro:\t%s", g[11]);
     

if(v==13)
        printf ("\n\nVoce Escolheu para Goleiro:\t%s", g[12]);
    

if(v==14)
        printf ("\n\nVoce Escolheu para Goleiro:\t%s", g[13]);
     

if(v==15)
        printf ("\n\nVoce Escolheu para Goleiro:\t%s", g[14]);
     

if(v==16)
        printf ("\n\nVoce Escolheu para Goleiro:\t%s", g[15]);
     

if(v==17)
        printf ("\n\nVoce Escolheu para Goleiro:\t%s", g[16]);
    

if(v==18)
        printf ("\n\nVoce Escolheu para Goleiro:\t%s", g[17]);


if(v==19)
        printf ("\n\nVoce Escolheu para Goleiro:\t%s", g[18]);
     

if(v==20)
        printf ("\n\nVoce Escolheu para Goleiro:\t%s", g[19]);

     
    if(v==21)
        printf ("\n\nVoce Escolheu para Goleiro:\t%s", g[20]);
    
	   
        
    printf("\n\n\n");
       system( "pause" );
	     system("CLS");
  
    
    
    //L. Direito
    int v2;
  printf("---------- World Cup Draft -----------\n\n\n");
  printf("Escolha um Lateral Direito:\n\n\n");
   printf("--------------------------------------------\n\n");
  
  srand(time(NULL));
     
     char u[15][30];
     
    strcpy(u[0], "D.Alves (Brasil)(90)");
    strcpy(u[1], "Carjaval (Espanha)(89)");
    strcpy(u[2], "Kimmich (Alemanha)(84)");
    strcpy(u[3], "Lichtsteiner (Suica)(84)");
    strcpy(u[4], "Meunier (Belgica)(83)");
    strcpy(u[5], "Walker (Inglaterra)(86)");
    strcpy(u[6], "Piszczek (Polonia)(87)");
    strcpy(u[7], "Mario Fernandes (Russia)(83)");
    strcpy(u[8], "Clyne (Inglaterra)(82)");
    strcpy(u[9], "Vrsaljko (Croacia)(79)");
    strcpy(u[10], "Srna (Croacia)(81)");
    strcpy(u[11], "Bellerin (Espanha)(84)");
    strcpy(u[12], "Semedo (Portugal)(81)");
    strcpy(u[13], "Smolnikov (Russia)(80)");
    strcpy(u[14], "Sidibe (Franca)(79)");
     
     s = 0;
	 int r;
	 int j;
     for (j = 0 ; j < 5; j++)
     {
		
         do	{
            r = ( rand() % 15 );
		} while ( achou( r, &s, sorteados) );                  
         
        
		printf("%d\t%s\n\n\n", r+1, u[r]);
	}

	printf("--------------------------------------------\n");
	    fflush;
	    getchar();
	scanf("%d" , &v2);
	fflush(stdin);
	
if(v2==1)
	 
printf ("\n\nVoce Escolheu para a Lateral Direita:\t%s", u[0]);

if(v2==2)
	 
       printf ("\n\nVoce Escolheu para a Lateral Direita:\t%s", u[1]);
 
if(v2==3)
        printf ("\n\nVoce Escolheu para a Lateral Direita:\t%s", u[2]);
    
 
if(v2==4)
        printf ("\n\nVoce Escolheu para a Lateral Direita:\t%s", u[3]);
     
 
if(v2==5)
        printf ("\n\nVoce Escolheu para a Lateral Direita:\t%s", u[4]);
    

if(v2==6)
        printf ("\n\nVoce Escolheu para a Lateral Direita:\t%s", u[5]);
     

if(v2==7)
        printf ("\n\nVoce Escolheu para a Lateral Direita:\t%s", u[6]);
     

if(v2==8)
        printf ("\n\nVoce Escolheu para a Lateral Direita:\t%s", u[7]);
    

if(v2==9)
        printf ("\n\nVoce Escolheu para a Lateral Direita:\t%s", u[8]);


if(v2==10)

        printf ("\n\nVoce Escolheu para a Lateral Direita:\t%s", u[9]);
     

if(v2==11)
        printf ("\n\nVoce Escolheu para a Lateral Direita:\t%s", u[10]);
     

if(v2==12)
        printf ("\n\nVoce Escolheu para a Lateral Direita:\t%s", u[11]);
     

if(v2==13)
        printf ("\n\nVoce Escolheu para a Lateral Direita:\t%s", u[12]);
    

if(v2==14)
        printf ("\n\nVoce Escolheu para a Lateral Direita:\t%s", u[13]);
        
if(v2==15)
  printf ("\n\nVoce Escolheu para a Lateral Direita:\t%s", u[14]);
     

    
    printf("\n\n\n");
       system( "pause" );  
     system("CLS");
    
	//Zagueiro 1
	int v3;
  printf("---------- World Cup Draft -----------\n\n\n");
  printf("Escolha o primeiro Zagueiro\n\n\n");
   printf("--------------------------------------------\n\n");
  srand(time(NULL));
     
     char z[15][50];
     
    strcpy(z[0], "Thiago Silva (Brasil)(88)");
    strcpy(z[1], "Gimenez (Uruguai)(84)");
    strcpy(z[2], "Boateng (Alemanha)(92)");
    strcpy(z[3], "Koulibaly (Senegal)(83)");
    strcpy(z[4], "Kompany (Belgica)(84)");
    strcpy(z[5], "Stones (Inglaterra)(82)");
    strcpy(z[6], "J.Martinez (Espanha)(84)");
    strcpy(z[7], "Marquinhos (Brasil)(84)");
    strcpy(z[8], "Glik (Polonia)(81)");
    strcpy(z[9], "Howedes (Alemanha)(82)");
    strcpy(z[10], "Berezutskiy(Russia)(79)");
    strcpy(z[11], "Pique (Espanha)(90)");
    strcpy(z[12], "Pepe (Portugal)(87)");
    strcpy(z[13], "Benatia (Marrocos)(85)");
    strcpy(z[14], "Varane (Franca)(85)");
     
     s = 0;
	 int y;
     for (y = 0 ; y < 5; y++)
     {
		int r;
         do	{
            r = ( rand() % 15 );
		} while ( achou( r, &s, sorteados) );                  
         
        
		printf("%d\t%s\n\n\n", r+1, z[r]);
	}

printf("--------------------------------------------\n");
	scanf("%d" , &v3);
	getchar();
	fflush(stdin);
	
	if(v3==1)
	 
printf ("\n\nVoce Escolheu para Zagueiro:\t%s", z[0]);

if(v3==2)
	 
       printf ("\n\nVoce Escolheu para Zagueiro:\t%s", z[1]);
 
if(v3==3)
        printf ("\n\nVoce Escolheu para Zagueiro:\t%s", z[2]);
    
 
if(v3==4)
        printf ("\n\nVoce Escolheu para Zagueiro:\t%s", z[3]);
     
 
if(v3==5)
        printf ("\n\nVoce Escolheu para Zagueiro:\t%s", z[4]);
    

if(v3==6)
        printf ("\n\nVoce Escolheu para Zagueiro:\t%s", z[5]);
     

if(v3==7)
        printf ("\n\nVoce Escolheu para Zagueiro:\t%s", z[6]);
     

if(v3==8)
        printf ("\n\nVoce Escolheu para Zagueiro:\t%s", z[7]);
    

if(v3==9)
        printf ("\n\nVoce Escolheu para Zagueiro:\t%s", z[8]);


if(v3==10)

        printf ("\n\nVoce Escolheu para Zagueiro:\t%s", z[9]);
     

if(v3==11)
        printf ("\n\nVoce Escolheu para Zagueiro:\t%s", z[10]);
     

if(v3==12)
        printf ("\n\nVoce Escolheu para Zagueiro:\t%s", z[11]);
     

if(v3==13)
        printf ("\n\nVoce Escolheu para Zagueiro:\t%s", z[12]);
    

if(v3==14)
        printf ("\n\nVoce Escolheu para Zagueiro:\t%s", z[13]);
        
if(v3==15)
  printf ("\n\nVoce Escolheu para Zagueiro:\t%s", z[14]);
  
   printf("\n\n\n");
       system( "pause" );  
    system("CLS");
    
    //Zagueiro 2
     
     	int v4;
  printf("---------- World Cup Draft -----------\n\n\n");
  printf("Escolha o segundo Zagueiro\n\n\n");
   printf("--------------------------------------------\n\n");
  
  srand(time(NULL));
     
     char t[15][30];
     
    strcpy(t[0], "Miranda (Brasil)(87)");
    strcpy(t[1], "Otamendi (Argentina)(84)");
    strcpy(t[2], "Hummels (Alemanha)(89)");
    strcpy(t[3], "Mascherano (Argentina)(86)");
    strcpy(t[4], "D.Luiz (Brasil)(84)");
    strcpy(t[5], "Cahill (Inglaterra)(83)");
    strcpy(t[6], "Sergio Ramos (Espanha)(94)");
    strcpy(t[7], "Lovren (Croacia)(79)");
    strcpy(t[8], "Ivanovic (Servia)(81)");
    strcpy(t[9], "Kjaer (Dinamarca)(82)");
    strcpy(t[10], "Sule (Alemanha)(81)");
    strcpy(t[11], "Azpilicueta (Espanha)(83)");
    strcpy(t[12], "Y.Mina (Colombia)(82)");
    strcpy(t[13], "Godin (Uruguai)(89)");
    strcpy(t[14], "Koscielny (Franca)(86)");
     
     s = 0;
	 int e;
     for (e = 0 ; e < 5; e++)
     {
		int r;
         do	{
            r = ( rand() % 15 );
		} while ( achou( r, &s, sorteados) );                  
         
        
		printf("%d\t%s\n\n\n", r+1, t[r]);
	}

	printf("--------------------------------------------\n");
	scanf("%d" , &v4);
	getchar();
	fflush(stdin);
	
	if(v4==1)
	 
printf ("\n\nVoce Escolheu para Zagueiro:\t%s", t[0]);

if(v4==2)
	 
       printf ("\n\nVoce Escolheu para Zagueiro:\t%s", t[1]);
 
if(v4==3)
        printf ("\n\nVoce Escolheu para Zagueiro:\t%s", t[2]);
    
 
if(v4==4)
        printf ("\n\nVoce Escolheu para Zagueiro:\t%s", t[3]);
     
 
if(v4==5)
        printf ("\n\nVoce Escolheu para Zagueiro:\t%s", t[4]);
    

if(v4==6)
        printf ("\n\nVoce Escolheu para Zagueiro:\t%s", t[5]);
     

if(v4==7)
        printf ("\n\nVoce Escolheu para Zagueiro:\t%s", t[6]);
     

if(v4==8)
        printf ("\n\nVoce Escolheu para Zagueiro:\t%s", t[7]);
    

if(v4==9)
        printf ("\n\nVoce Escolheu para Zagueiro:\t%s", t[8]);


if(v4==10)

        printf ("\n\nVoce Escolheu para Zagueiro:\t%s", t[9]);
     

if(v4==11)
        printf ("\n\nVoce Escolheu para Zagueiro:\t%s", t[10]);
     

if(v4==12)
        printf ("\n\nVoce Escolheu para Zagueiro:\t%s", t[11]);
     

if(v4==13)
        printf ("\n\nVoce Escolheu para Zagueiro:\t%s", t[12]);
    

if(v4==14)
        printf ("\n\nVoce Escolheu para Zagueiro:\t%s", t[13]);
        
if(v4==15)
  printf ("\n\nVoce Escolheu para Zagueiro:\t%s", t[14]);
  
   printf("\n\n\n");
       system( "pause" );  
     system("CLS");
     
     //L. Esquerdo
     int v5;
  printf("---------- World Cup Draft -----------\n\n\n");
  printf("\n\nEscolha um Lateral Esquerdo\n\n\n");
   printf("--------------------------------------------\n\n");
  srand(time(NULL));
     
     char c[15][30];
     
    strcpy(c[0], "Marcelo (Brasil)(91)");
    strcpy(c[1], "Alessandro (Brasil)(84)");
    strcpy(c[2], "Schmelzer (Alemanha)(82)");
    strcpy(c[3], "R.Rodriguez (Suica)(84)");
    strcpy(c[4], "Fabra (Colombia)(80)");
    strcpy(c[5], "D.Rose (Inglaterra)(81)");
    strcpy(c[6], "Marcos Alonso (Espanha)(84)");
    strcpy(c[7], "Mendy (Franca)(85)");
    strcpy(c[8], "Baines (Inglaterra)(86)");
    strcpy(c[9], "Layun (Mexico)(85)");
    strcpy(c[10], "Rojo (Argentina)(80)");
    strcpy(c[11], "Jordi Alba (Espanha)(87)");
    strcpy(c[12], "R.Guerreiro (Portugal)(84)");
    strcpy(c[13], "Wendt (Suecia)(79)");
    strcpy(c[14], "Kurzawa (Franca)(83)");
     
     s = 0;
	 int k;
     for (k = 0 ; k < 5; k++)
     {
		int r;
         do	{
            r = ( rand() % 15 );
		} while ( achou( r, &s, sorteados) );                  
         
        
		printf("%d\t%s\n\n\n", r+1, c[r]);
	}

	printf("--------------------------------------------\n");
	scanf("%d" , &v5);
	getchar();
	fflush(stdin);
	
	if(v5==1)
	 
printf ("\n\nVoce Escolheu para Lateral Esquerdo:\t%s", c[0]);

if(v5==2)
	 
       printf ("\n\nVoce Escolheu para Lateral Esquerdo:\t%s", c[1]);
 
if(v5==3)
        printf ("\n\nVoce Escolheu para Lateral Esquerdo:\t%s", c[2]);
    
 
if(v5==4)
        printf ("\n\nVoce Escolheu para Lateral Esquerdo:\t%s", c[3]);
     
 
if(v5==5)
        printf ("\n\nVoce Escolheu para Lateral Esquerdo:\t%s", c[4]);
    

if(v5==6)
        printf ("\n\nVoce Escolheu para Lateral Esquerdo:\t%s", c[5]);
     

if(v5==7)
        printf ("\n\nVoce Escolheu para Lateral Esquerdo:\t%s", c[6]);
     

if(v5==8)
        printf ("\n\nVoce Escolheu para Lateral Esquerdo:\t%s", c[7]);
    

if(v5==9)
        printf ("\n\nVoce Escolheu para Lateral Esquerdo:\t%s", c[8]);


if(v5==10)

        printf ("\n\nVoce Escolheu para Lateral Esquerdo:\t%s", c[9]);
     

if(v5==11)
        printf ("\n\nVoce Escolheu para Lateral Esquerdo:\t%s", c[10]);
     

if(v5==12)
        printf ("\n\nVoce Escolheu para Lateral Esquerdo:\t%s", c[11]);
     

if(v5==13)
        printf ("\n\nVoce Escolheu para Lateral Esquerdo:\t%s", c[12]);
    

if(v5==14)
        printf ("\n\nVoce Escolheu para Lateral Esquerdo:\t%s", c[13]);
        
if(v5==15)
  printf ("\n\nVoce Escolheu para Lateral Esquerdo:\t%s", c[14]);
  
   printf("\n\n\n");
       system( "pause" );  
     system("CLS");
    
    //Volante
     
     int v6;
  printf("---------- World Cup Draft -----------\n\n\n");
  printf("\n\nEscolha um Volante\n\n\n");
   printf("--------------------------------------------\n\n");
  srand(time(NULL));
     
     char vo[15][50];
     
    strcpy(vo[0], "Casemiro (Brasil)(89)");
    strcpy(vo[1], "Biglia (Argentina)(81)");
    strcpy(vo[2], "Khedira (Alemanha)(87)");
    strcpy(vo[3], "Xhaka (Suica)(84)");
    strcpy(vo[4], "Bakayoko (Franca)(83)");
    strcpy(vo[5], "Henderson (Inglaterra)(84)");
    strcpy(vo[6], "Krychowiak (Polonia)(85)");
    strcpy(vo[7], "Matic (Servia)(86)");
    strcpy(vo[8], "Borges (Costa Rica)(79)");
    strcpy(vo[9], "Matuidi(Franca)(88)");
    strcpy(vo[10], "Elneny (Egito)(80)");
    strcpy(vo[11], "Modric (Croacia)(94)");
    strcpy(vo[12], "D.Pereira (Portugal)(83)");
    strcpy(vo[13], "Wernbloom (Suecia)(81)");
    strcpy(vo[14], "Kante (Franca)(91)");
     
     s = 0;
	 int k1;
     for (k1 = 0 ; k1 < 5; k1++)
     {
		int r;
         do	{
            r = ( rand() % 15 );
		} while ( achou( r, &s, sorteados) );                  
         
        
		printf("%d\t%s\n\n\n", r+1, vo[r]);
	}

printf("--------------------------------------------\n");
	scanf("%d" , &v6);
	getchar();
	fflush(stdin);
	
	if(v6==1)
	 
printf ("\n\nVoce Escolheu para Volante:\t%s", vo[0]);

if(v6==2)
	 
       printf ("\n\nVoce Escolheu para Volante:\t%s", vo[1]);
 
if(v6==3)
        printf ("\n\nVoce Escolheu para Volante:\t%s", vo[2]);
    
 
if(v6==4)
        printf ("\n\nVoce Escolheu para Volante:\t%s", vo[3]);
     
 
if(v6==5)
        printf ("\n\nVoce Escolheu para Volante:\t%s", vo[4]);
    

if(v6==6)
        printf ("\n\nVoce Escolheu para Volante:\t%s", vo[5]);
     

if(v6==7)
        printf ("\n\nVoce Escolheu para Volante:\t%s", vo[6]);
     

if(v6==8)
        printf ("\n\nVoce Escolheu para Volante:\t%s", vo[7]);
    

if(v6==9)
        printf ("\n\nVoce Escolheu para Volante:\t%s", vo[8]);


if(v6==10)

        printf ("\n\nVoce Escolheu para Volante:\t%s", vo[9]);
     

if(v6==11)
        printf ("\n\nVoce Escolheu para Volante:\t%s", vo[10]);
     

if(v6==12)
        printf ("\n\nVoce Escolheu para Volante:\t%s", vo[11]);
     

if(v6==13)
        printf ("\n\nVoce Escolheu para Volante:\t%s", vo[12]);
    

if(v6==14)
        printf ("\n\nVoce Escolheu para Volante:\t%s", vo[13]);
        
if(v6==15)
  printf ("\n\nVoce Escolheu para Volante:\t%s", vo[14]);
  
   printf("\n\n\n");
       system( "pause" );  
     system("CLS");
     
    //Meio Campo 1
     int v7;
  printf("---------- World Cup Draft -----------\n\n\n");
  printf("\n\nEscolha um Meio Campo Defensivo\n\n\n");
   printf("--------------------------------------------\n\n");
  srand(time(NULL));
     
     char vm[16][50];
     
    strcpy(vm[0], "Paulinho (Brasil)(85)");
    strcpy(vm[1], "Pastore (Argentina)(86)");
    strcpy(vm[2], "Gundogan (Alemanha)(84)");
    strcpy(vm[3], "Guardado (Mexico)(81)");
    strcpy(vm[4], "Goretzka (Alemanha)(83)");
    strcpy(vm[5], "Lallana (Inglaterra)(83)");
    strcpy(vm[6], "Iniesta (Espanha)(95)");
    strcpy(vm[7], "Tolisso (Franca)(87)");
    strcpy(vm[8], "A.Gomes (Portugal)(84)");
    strcpy(vm[9], "Fabregas (Espanha)(87)");
    strcpy(vm[10], "Rakitic (Croacia)(88)");
    strcpy(vm[11], "Thiago (Espanha)(90)");
    strcpy(vm[12], "J.Mario (Portugal)(85)");
    strcpy(vm[13], "Koke (Espanha)(84)");
    strcpy(vm[14], "Pogba (Franca)(93)");
    strcpy(vm[15], "T.Kroos (Alemanha)(95)");
     
     s = 0;
	 int k2;
     for (k2 = 0 ; k2 < 5; k2++)
     {
		int r;
         do	{
            r = ( rand() % 15 );
		} while ( achou( r, &s, sorteados) );                  
         
        
		printf("%d\t%s\n\n\n", r+1, vm[r]);
	}

	printf("--------------------------------------------\n");
	scanf("%d" , &v7);
	getchar();
	fflush(stdin);
	
	if(v7==1)
	 
printf ("\n\nVoce Escolheu para Meio Campo Defensivo:\t%s", vm[0]);

if(v7==2)
	 
       printf ("\n\nVoce Escolheu para Meio Campo Defensivo:\t%s", vm[1]);
 
if(v7==3)
        printf ("\n\nVoce Escolheu para Meio Campo Defensivo:\t%s", vm[2]);
    
 
if(v7==4)
        printf ("\n\nVoce Escolheu para Meio Campo Defensivo:\t%s", vm[3]);
     
 
if(v7==5)
        printf ("\n\nVoce Escolheu para Meio Campo Defensivo:\t%s", vm[4]);
    

if(v7==6)
        printf ("\n\nVoce Escolheu para Meio Campo Defensivo:\t%s", vm[5]);
     

if(v7==7)
        printf ("\n\nVoce Escolheu para Meio Campo Defensivo:\t%s", vm[6]);
     

if(v7==8)
        printf ("\n\nVoce Escolheu para Meio Campo Defensivo:\t%s", vm[7]);
    

if(v7==9)
        printf ("\n\nVoce Escolheu para Meio Campo Defensivo:\t%s", vm[8]);


if(v7==10)

        printf ("\n\nVoce Escolheu para Meio Campo Defensivo:\t%s", vm[9]);
     

if(v7==11)
        printf ("\n\nVoce Escolheu para Meio Campo Defensivo:\t%s", vm[10]);
     

if(v7==12)
        printf ("\n\nVoce Escolheu para Meio Campo Defensivo:\t%s", vm[11]);
     

if(v7==13)
        printf ("\n\nVoce Escolheu para Meio Campo Defensivo:\t%s", vm[12]);
    

if(v7==14)
        printf ("\n\nVoce Escolheu para Meio Campo Defensivo:\t%s", vm[13]);
        
if(v7==15)
  printf ("\n\nVoce Escolheu para Meio Campo Defensivo:\t%s", vm[14]);
  
  if(v7==16)
	 
printf ("\n\nVoce Escolheu para Meio Campo Defensivo:\t%s", vm[15]);
  
   printf("\n\n\n");
       system( "pause" );  
     system("CLS");
     
     //Meio Campo Ofensivo
     int v8;
  printf("---------- World Cup Draft -----------\n\n\n");
  printf("\n\nEscolha um Meio Campo Ofensivo\n\n\n");
   printf("--------------------------------------------\n\n");
  srand(time(NULL));
     
     char vn[15][50];
     
    strcpy(vn[0], "Dybala (Argentina)(90)");
    strcpy(vn[1], "Coutinho (Brasil)(91)");
    strcpy(vn[2], "M.Ozil (Alemanha)(92)");
    strcpy(vn[3], "J.Rodriguez (Colombia)(89)");
    strcpy(vn[4], "Banega (Argentina)(84)");
    strcpy(vn[5], "Giuliano(Brasil)(83)");
    strcpy(vn[6], "David Silva (Espanha)(87)");
    strcpy(vn[7], "Belhanda (Tunisia)(81)");
    strcpy(vn[8], "Dele Alli (Inglaterra)(86)");
    strcpy(vn[9], "Eriksen (Dinamarca)(88)");
    strcpy(vn[10], "G.Sigurdsson (Islandia)(84)");
    strcpy(vn[11], "Isco (Espanha)(88)");
    strcpy(vn[12], "G. dos Santos (Mexico)(82)");
    strcpy(vn[13], "S.Kagawa (Japao)(85)");
    strcpy(vn[14], "Muller (Alemanha)(91)");
     
     s = 0;
	 int k9;
     for (k9 = 0 ; k9 < 5; k9++)
     {
		int r;
         do	{
            r = ( rand() % 15 );
		} while ( achou( r, &s, sorteados) );                  
         
        
		printf("%d\t%s\n\n\n", r+1, vn[r]);
	}

	printf("--------------------------------------------\n");
	scanf("%d" , &v8);
	getchar();
	fflush(stdin);
	
	if(v8==1)
	 
printf ("\n\nVoce Escolheu para Meio Campo Ofensivo:\t%s", vn[0]);

if(v8==2)
	 
       printf ("\n\nVoce Escolheu para Meio Campo Ofensivo:\t%s", vn[1]);
 
if(v8==3)
        printf ("\n\nVoce Escolheu para Meio Campo Ofensivo:\t%s", vn[2]);
    
 
if(v8==4){

        printf ("\n\nVoce Escolheu para Meio Campo Ofensivo:\t%s", vn[3]);
 }
 
if(v8==5)
        printf ("\n\nVoce Escolheu para Meio Campo Ofensivo:\t%s", vn[4]);
    

if(v8==6)
        printf ("\n\nVoce Escolheu para Meio Campo Ofensivo:\t%s", vn[5]);
     

if(v8==7)
        printf ("\n\nVoce Escolheu para Meio Campo Ofensivo:\t%s", vn[6]);
     

if(v8==8)
        printf ("\n\nVoce Escolheu para Meio Campo Ofensivo:\t%s", vn[7]);
    

if(v8==9)
        printf ("\n\nVoce Escolheu para Meio Campo Ofensivo:\t%s", vn[8]);


if(v8==10)

        printf ("\n\nVoce Escolheu para Meio Campo Ofensivo:\t%s", vn[9]);
     

if(v8==11)
        printf ("\n\nVoce Escolheu para Meio Campo Ofensivo:\t%s", vn[10]);
     

if(v8==12)
        printf ("\n\nVoce Escolheu para Meio Campo Ofensivo:\t%s", vn[11]);
     

if(v8==13)
        printf ("\n\nVoce Escolheu para Meio Campo Ofensivo:\t%s", vn[12]);
    

if(v8==14)
        printf ("\n\nVoce Escolheu para Meio Campo Ofensivo:\t%s", vn[13]);
        
if(v8==15)
  printf ("\n\nVoce Escolheu para Meio Campo Ofensivo:\t%s", vn[14]);
  
   printf("\n\n\n");
       system( "pause" );  
     system("CLS");
     
     
     //Ponta Direita
     int v9;
  printf("---------- World Cup Draft -----------\n\n\n");
  printf("\n\nEscolha um Ponta Direita\n\n\n");
   printf("--------------------------------------------\n\n");
  srand(time(NULL));
     
     char pn[16][50];
     
    strcpy(pn[0], "Messi (Argentina)(98)");
    strcpy(pn[1], "Willian (Brasil)(85)");
    strcpy(pn[2], "Bellarabi (Alemanha)(84)");
    strcpy(pn[3], "Shaqiri (Suica)(86)");
    strcpy(pn[4], "Di Maria (Argentina)(90)");
    strcpy(pn[5], "Cuadrado (Colombia)(89)");
    strcpy(pn[6], "M.Salah (Egito)(87)");
    strcpy(pn[7], "Callejon (Espanha)(84)");
    strcpy(pn[8], "Sterling (Inglaterra)(86)");
    strcpy(pn[9], "Dembele (Franca)(84)");
    strcpy(pn[10], "Kramaric (Croacia)(82)");
    strcpy(pn[11], "Pedro (Espanha)(83)");
    strcpy(pn[12], "Bernardo Silva (Portugal)(85)");
    strcpy(pn[13], "C.Vela (Mexico)(83)");
    strcpy(pn[14], "Mbappe (Franca)(88)");
    strcpy(pn[15], "Cueva (Peru)(81)");
     
     s = 0;
	 int k3;
     for (k3 = 0 ; k3 < 5; k3++)
     {
		int r;
         do	{
            r = ( rand() % 16 );
		} while ( achou( r, &s, sorteados) );                  
         
        
		printf("%d\t%s\n\n\n", r+1, pn[r]);
	}

	printf("--------------------------------------------\n");
	scanf("%d" , &v9);
	getchar();
	fflush(stdin);
	
	if(v9==1)
	 
printf ("\n\nVoce Escolheu para Ponta Direita:\t%s", pn[0]);

if(v9==2)
	 
       printf ("\n\nVoce Escolheu para Ponta Direita:\t%s", pn[1]);
 
if(v9==3)
        printf ("\n\nVoce Escolheu para Ponta Direita:\t%s", pn[2]);
    
 
if(v9==4)
        printf ("\n\nVoce Escolheu para Ponta Direita:\t%s", pn[3]);
     
 
if(v9==5)
        printf ("\n\nVoce Escolheu para Ponta Direita:\t%s", pn[4]);
    

if(v9==6)
        printf ("\n\nVoce Escolheu para Ponta Direita:\t%s", pn[5]);
     

if(v9==7)
        printf ("\n\nVoce Escolheu para Ponta Direita:\t%s", pn[6]);
     

if(v9==8)
        printf ("\n\nVoce Escolheu para Ponta Direita:\t%s", pn[7]);
    

if(v9==9)
        printf ("\n\nVoce Escolheu para Ponta Direita:\t%s", pn[8]);


if(v9==10)

        printf ("\n\nVoce Escolheu para Ponta Direita:\t%s", pn[9]);
     

if(v9==11)
        printf ("\n\nVoce Escolheu para Ponta Direita:\t%s", pn[10]);
     

if(v9==12)
        printf ("\n\nVoce Escolheu para Ponta Direita:\t%s", pn[11]);
     

if(v9==13)
        printf ("\n\nVoce Escolheu para Ponta Direita:\t%s", pn[12]);
    

if(v9==14)
        printf ("\n\nVoce Escolheu para Ponta Direita:\t%s", pn[13]);
        
if(v9==15)
  printf ("\n\nVoce Escolheu para Ponta Direita:\t%s", pn[14]);
  
  if(v9==16)
	 
printf ("\n\nVoce Escolheu para Ponta Direita:\t%s", pn[15]);

  
   printf("\n\n\n");
       system( "pause" );  
     system("CLS");
     
     
      //Atacante
     int v1;
  printf("---------- World Cup Draft -----------\n\n\n");
  printf("\n\nEscolha um Atacante\n\n\n");
   printf("--------------------------------------------\n\n");
  srand(time(NULL));
     
     char an[15][50];
     
    strcpy(an[0], "Gabriel Jesus (Brasil)(86)");
    strcpy(an[1], "M.Gomez (Alemanha)(84)");
    strcpy(an[2], "Ibrahimovic (Suecia)(92)");
    strcpy(an[3], "Lewandowski (Polonia)(93)");
    strcpy(an[4], "Lukaku (Belgica)(88)");
    strcpy(an[5], "H.Kane (Inglaterra)(90)");
    strcpy(an[6], "Lacazette (Franca)(87)");
    strcpy(an[7], "Falcao (Colombia)(86)");
    strcpy(an[8], "Griezmann (Franca)(96)");
    strcpy(an[9], "Cavani (Uruguai)(89)");
    strcpy(an[10], "Mandzukic (Croacia)(84)");
    strcpy(an[11], "Morata (Espanha)(86)");
    strcpy(an[12], "Higuain (Argentina)(91)");
    strcpy(an[13], "Suarez (Uruguai)(95)");
    strcpy(an[14], "Benzema (Franca)(90)");
     
     s = 0;
	 int k4;
     for (k4 = 0 ; k4 < 5; k4++)
     {
		int r;
         do	{
            r = ( rand() % 15 );
		} while ( achou( r, &s, sorteados) );                  
         
        
		printf("%d\t%s\n\n\n", r+1, an[r]);
	}

	printf("--------------------------------------------\n");
	scanf(" %d" , &v1);
	getchar();
	
	if(v1==1)
	 
printf ("\n\nVoce Escolheu para Atacante:\t%s", an[0]);

if(v1==2)
	 
       printf ("\n\nVoce Escolheu para Atacante:\t%s", an[1]);
 
if(v1==3)
        printf ("\n\nVoce Escolheu para Atacante:\t%s", an[2]);
    
 
if(v1==4)
        printf ("\n\nVoce Escolheu para Atacante:\t%s", an[3]);
     
 
if(v1==5)
        printf ("\n\nVoce Escolheu para Atacante:\t%s", an[4]);
    

if(v1==6)
        printf ("\n\nVoce Escolheu para Atacante:\t%s", an[5]);
     

if(v1==7)
        printf ("\n\nVoce Escolheu para Atacante:\t%s", an[6]);
     

if(v1==8)
        printf ("\n\nVoce Escolheu para Atacante:\t%s", an[7]);
    

if(v1==9)
        printf ("\n\nVoce Escolheu para Atacante:\t%s", an[8]);


if(v1==10)

        printf ("\n\nVoce Escolheu para Atacante:\t%s", an[9]);
     

if(v1==11)
        printf ("\n\nVoce Escolheu para Atacante:\t%s", an[10]);
     

if(v1==12)
        printf ("\n\nVoce Escolheu para Atacante:\t%s", an[11]);
     

if(v1==13)
        printf ("\n\nVoce Escolheu para Atacante:\t%s", an[12]);
    

if(v1==14)
        printf ("\n\nVoce Escolheu para Atacante:\t%s", an[13]);
        
if(v1==15)
  printf ("\n\nVoce Escolheu para Atacante:\t%s", an[14]);
  
   printf("\n\n\n");
       system( "pause" );  
     system("CLS");
     
     
     //Ponta Esquerda
     int v0;
  printf("---------- World Cup Draft -----------\n\n\n");
  printf("\n\nEscolha um Ponta Esquerda\n\n\n");
   printf("--------------------------------------------\n\n");
  srand(time(NULL));
     
     char pe[15][50];
     
    strcpy(pe[0], "Neymar (Brasil)(97)");
    strcpy(pe[1], "C.Ronaldo (Portugal)(99)");
    strcpy(pe[2], "L.Sane (Alemanha)(85)");
    strcpy(pe[3], "Taison (Brasil)(79)");
    strcpy(pe[4], "Hazard (Belgica)(93)");
    strcpy(pe[5], "Martial (Franca)(87)");
    strcpy(pe[6], "H.Son (Coreia do Sul)(90)");
    strcpy(pe[7], "Mane (Senegal)(86)");
    strcpy(pe[8], "Brandt (Alemanha)(84)");
    strcpy(pe[9], "Perisic (Croacia)(85)");
    strcpy(pe[10], "Forsberg (Suecia)(83)");
    strcpy(pe[11], "Deulofeu (Espanha)(82)");
    strcpy(pe[12], "Nani (Portugal)(84)");
    strcpy(pe[13], "Shatov (Russia)(80)");
    strcpy(pe[14], "Payet (Franca)(85)");
     
     s = 0;
	 int k5;
     for (k5 = 0 ; k5 < 5; k5++)
     {
		int r;
         do	{
            r = ( rand() % 15 );
		} while ( achou( r, &s, sorteados) );                  
         
        
		printf("%d\t%s\n\n\n", r+1, pe[r]);
	}

	printf("--------------------------------------------\n");
	scanf(" %d" , &v0);
	getchar();
	fflush(stdin);
	
	if(v0==1)
	 
printf ("\n\nVoce Escolheu para Ponta Esquerda:\t%s", pe[0]);

if(v0==2)
	 
       printf ("\n\nVoce Escolheu para Ponta Esquerda:\t%s", pe[1]);
 
if(v0==3)
        printf ("\n\nVoce Escolheu para Ponta Esquerda:\t%s", pe[2]);
    
 
if(v0==4)
        printf ("\n\nVoce Escolheu para Ponta Esquerda:\t%s", pe[3]);
     
 
if(v0==5)
        printf ("\n\nVoce Escolheu para Ponta Esquerda:\t%s", pe[4]);
    

if(v0==6)
        printf ("\n\nVoce Escolheu para Ponta Esquerda:\t%s", pe[5]);
     

if(v0==7)
        printf ("\n\nVoce Escolheu para Ponta Esquerda:\t%s", pe[6]);
     

if(v0==8)
        printf ("\n\nVoce Escolheu para Ponta Esquerda:\t%s", pe[7]);
    

if(v0==9)
        printf ("\n\nVoce Escolheu para Ponta Esquerda:\t%s", pe[8]);


if(v0==10)

        printf ("\n\nVoce Escolheu para Ponta Esquerda:\t%s", pe[9]);
     

if(v0==11)
        printf ("\n\nVoce Escolheu para Ponta Esquerda:\t%s", pe[10]);
     

if(v0==12)
        printf ("\n\nVoce Escolheu para Ponta Esquerda:\t%s", pe[11]);
     

if(v0==13)
       printf ("\n\nVoce Escolheu para Ponta Esquerda:\t%s", pe[12]);
    

if(v0==14)
        printf ("\n\nVoce Escolheu para Ponta Esquerda:\t%s", pe[13]);
        
if(v0==15)
  printf ("\n\nVoce Escolheu para Ponta Esquerda:\t%s", pe[14]);
  
   printf("\n\n\n");
       system( "pause" );  
    system("CLS");
     
     
    //Tecnico
     int t1;
  printf("---------- World Cup Draft -----------\n\n\n");
  printf("\n\nEscolha o Tecnico\n\n\n");
   printf("--------------------------------------------\n\n");
  srand(time(NULL));
     
     char tn[15][30];
     
    strcpy(tn[0], "J.Sampaoli (Argentina)");
    strcpy(tn[1], "Ricardo Gareca (Peru)");
    strcpy(tn[2], "J.Low (Alemanha)");
    strcpy(tn[3], "V.Petkovic (Suica)");
    strcpy(tn[4], "R.Martinez (Belgica)");
    strcpy(tn[5], "Tite (Brasil)");
    strcpy(tn[6], "Lopetegui (Espanha)");
    strcpy(tn[7], "Tchertchesov (Russia)");
    strcpy(tn[8], "Southgate (Inglaterra)");
    strcpy(tn[9], "Jose Pekerman (Colombia)");
    strcpy(tn[10], "Dalic (Croacia)");
    strcpy(tn[11], "J.C.Osorio (Mexico)");
    strcpy(tn[12], "Fernando Santos (Portugal)");
    strcpy(tn[13], "Tabarez (Uruguai)");
    strcpy(tn[14], "Deschamps (Franca)");
     
     s = 0;
	 int k7;
     for (k7 = 0 ; k7 < 5; k7++)
     {
		int r;
         do	{
            r = ( rand() % 15 );
		} while ( achou( r, &s, sorteados) );                  
         
        
		printf("%d\t%s\n\n\n", r+1, tn[r]);
	}

	printf("--------------------------------------------\n");
	scanf(" %d" , &t1);
	getchar();
	fflush(stdin);
	
	if(t1==1)
	 
printf ("\n\nVoce Escolheu para Tecnico:\t%s", tn[0]);

if(t1==2)
	 
       printf ("\n\nVoce Escolheu para Tecnico:\t%s", tn[1]);
 
if(t1==3)
        printf ("\n\nVoce Escolheu para Tecnico:\t%s", tn[2]);
    
 
if(t1==4)
        printf ("\n\nVoce Escolheu para Tecnico:\t%s", tn[3]);
     
 
if(t1==5)
        printf ("\n\nVoce Escolheu para Tecnico:\t%s", tn[4]);
    

if(t1==6)
        printf ("\n\nVoce Escolheu para Tecnico:\t%s", tn[5]);
     

if(t1==7)
        printf ("\n\nVoce Escolheu para Tecnico:\t%s", tn[6]);
     

if(t1==8)
        printf ("\n\nVoce Escolheu para Tecnico:\t%s", tn[7]);
    

if(t1==9)
        printf ("\n\nVoce Escolheu para Tecnico:\t%s", tn[8]);


if(t1==10)

        printf ("\n\nVoce Escolheu para Tecnico:\t%s", tn[9]);
     

if(t1==11)
        printf ("\n\nVoce Escolheu para Tecnico:\t%s", tn[10]);
     

if(t1==12)
        printf ("\n\nVoce Escolheu para Tecnico:\t%s", tn[11]);
     

if(t1==13)
        printf ("\n\nVoce Escolheu para Tecnico:\t%s", tn[12]);
    

if(t1==14)
        printf ("\n\nVoce Escolheu para Tecnico:\t%s", tn[13]);
        
if(t1==15)
  printf ("\n\nVoce Escolheu para Tecnico:\t%s", tn[14]);
  
   printf("\n\n\n");
       system( "pause" );  
     system("CLS"); 
     
     //TSele��o
     int t8;
  printf("---------- World Cup Draft -----------\n\n\n");
  printf("\n\nEscolha a Selecao para de representar\n\n\n");
   printf("--------------------------------------------\n\n");
  srand(time(NULL));
     
     char sn[33][30];
     
    strcpy(sn[0], "Argentina");
    strcpy(sn[1], "Peru");
    strcpy(sn[2], "Alemanha");
    strcpy(sn[3], "Suica");
    strcpy(sn[4], "Belgica");
    strcpy(sn[5], "Brasil");
    strcpy(sn[6], "Espanha");
    strcpy(sn[7], "Russia");
    strcpy(sn[8], "Inglaterra");
    strcpy(sn[9], "Colombia");
    strcpy(sn[10], "Croacia");
    strcpy(sn[11], "Mexico");
    strcpy(sn[12], "Portugal");
    strcpy(sn[13], "Uruguai");
    strcpy(sn[14], "Franca");
    strcpy(sn[15], "Egito");
    strcpy(sn[16], "Arabia Saudita");
    strcpy(sn[17], "Marrocos");
    strcpy(sn[18], "Ira");
    strcpy(sn[19], "Costa Rica");
    strcpy(sn[20], "Suecia");
    strcpy(sn[21], "Coreia do Sul");
    strcpy(sn[22], "Servia");
    strcpy(sn[23], "Ira");
    strcpy(sn[24], "Dinamarca");
    strcpy(sn[25], "Panama");
    strcpy(sn[26], "Tunisia");
    strcpy(sn[27], "Australia");
    strcpy(sn[28], "Japao");
    strcpy(sn[29], "Islandia");
    strcpy(sn[30], "Nigeria");
    strcpy(sn[31], "Polonia");
    strcpy(sn[32], "Senegal");
     
     s = 0;
	 int ki;
     for (int ki = 0 ; ki < 5; ki++)
     {
		int r;
         do	{
            r = ( rand() % 33 );
		} while ( achou( r, &s, sorteados) );                  
         
        
		printf("%d\t%s\n\n\n", r+1, sn[r]);
	}

	printf("--------------------------------------------\n");
	fflush;
	scanf(" %d" , &t8);
	getchar();
	if(t8==1)
	 
printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[0]);

if(t8==2)
	 
       printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[1]);
 
if(t8==3)
        printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[2]);
    
 
if(t8==4)
        printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[3]);
     
 
if(t8==5)
        printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[4]);
    

if(t8==6)
        printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[5]);
     

if(t8==7)
        printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[6]);
     

if(t8==8)
        printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[7]);
    

if(t8==9)
        printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[8]);


if(t8==10)

        printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[9]);
     

if(t8==11)
        printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[10]);
     

if(t8==12)
        printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[11]);
     

if(t8==13)
        printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[12]);
    

if(t8==14)
        printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[13]);
        
if(t8==15)
  printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[14]);
  
  if(t8==16)
	 
printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[15]);

if(t8==17)
	 
       printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[16]);
 
if(t8==18)
        printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[17]);
    
 
if(t8==19)
        printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[18]);
     
 
if(t8==20)
        printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[19]);
    

if(t8==21)
        printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[20]);
     

if(t8==22)
        printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[21]);
     

if(t8==23)
        printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[22]);
    

if(t8==24)
        printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[23]);


if(t8==25)

        printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[24]);
     

if(t8==26)
        printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[25]);
     

if(t8==27)
        printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[26]);
     

if(t8==28)
        printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[27]);
    

if(t8==29)
        printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[28]);
        
if(t8==30)
  printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[29]);
  
  if(t8==31)
  printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[30]);
  if(t8==32)
  printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[31]);
  if(t8==33)
  printf ("\n\nVoce Escolheu para te Representar:\t%s", sn[32]);
  
  
  
   printf("\n\n\n");
       system( "pause" );  
     system("CLS"); 

         fflush(stdin);
         printf("\t\t------------ Escalacao ------------\n\n");
  printf("Nome : %s", jogador.nome);;
  printf("Idade : %.2d\n" , jogador.idade);
printf("Selecao: %s", sn[ki]);
     printf("\n\n\n\n\n\n");
printf("                           %s"                          ,an[k4]);
printf("\n\n\n\n");
printf( "%s \t\t\t\t\t"                                     " %s",pe[k5],pn[k3]);
printf("\n\n\n\n");
printf("                           %s"                          ,vn[k9]);
printf("\n\n\n\n\n\n\n");
printf("             %s\t\t"                "%s"            ,vm[k2],vo[k1]);
printf("\n\n\n\n\n\n");
printf( "%s \t\t\t\t\t"                                     " %s",c[k],u[j]);
printf("\n\n\n\n\n");
printf("             %s\t\t"                "%s"            ,t[e],z[y]);
printf("\n\n\n\n\n\n");
printf("                           %s"                         ,g[i]);

printf("\n\n\n\n\n\n\n");
printf("Tecnico: %s\n\n\n\n"                         ,tn[r]);
setbuf(stdin, 0);

    printf("\n--------------------------------------------");
  setbuf(stdin, 0);
  fflush;
  
   printf("\n\n\n");
       system( "pause" );  
     system("CLS"); 
int n;
char b;
     
 printf("\n\n\n\n\n\n");
     printf("Simulação");
     
     char m[3][20];
     
  strcpy(m[0], "Ganhou");
  strcpy(m[1], "Eliminado");
  strcpy(m[2], "Perdeu");
  setbuf(stdin, 0);
     
       srand(time(NULL));
 
     for (n = 0; n < 1; n++)
     {
           
           printf("\t %d ", rand() % 3);
           
           fflush(stdin);
           
           
		   switch(n){
		   
           fflush;
           setbuf(stdin, NULL);
           scanf("%b",&b);
           getchar();
           fflush(stdin);
     
     case 0 :
       printf("\n\nCom esse time voce %s a Copa do Mundo", m[0]);
      break;
     case 1 :
       printf("\n\nCom esse time voce foi %s ainda na Fase de Grupos", m[1]);
     break;
 
     case 2 :
        printf("\n\nCom esse time voce %s na Fase de Mata-Mata", m[2]);
    break;
    setbuf(stdin, NULL);
    }




 return(0);}    
}

    