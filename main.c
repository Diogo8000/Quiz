
//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main()
{
//Vari�veis
 int cod, resp;
 char cod2;
 char port_alt[4];
 char mat_alt[4];
 char var_alt[4];
 char alt;

//Ativador da acentua��o gr�fica,
//Comando de regionaliza��o
 setlocale(LC_ALL, "Portuguese");

//Apresenta��o inicial do programa
    printf("-----------------------------------------------------------------------------\n");
    printf("                                 QUIZ\n");
    printf("-----------------------------------------------------------------------------\n");
    printf ("Ol�, seja bem vindo ao  QUIZ, jogo de perguntas e respostas");
    printf("\nOnde vc ir� testar seus conhecimentos nas principais mat�rias da escola.");
    printf("\nSeu objetivo � acertar todas as quest�es para conquistar as estrelas do jogo");
    printf("\nse errar uma ter� que come�ar novamente e perder� tudo.");
    printf("\n\n---------------------------------------------------------------------------");
    printf("\n\n                    QUE A SORTE ESTEJA A SEU FAVOR!");
    printf("\n\n---------------------------------------------------------------------------");

// Comando para iniciar o jogo
                printf("\n\nAperte enter para comecar!");
            do{
                cod2 = getch();
            }while (cod2 != 13);

    system("cls");/*Limpar a tela anterior*/


do{/*Utilizar a estrutura de repeti��o Do...While*/

//Solicitar os dados ao usu�rio e armazenar nas vari�veis
            printf("\n\nQual mat�ria deseja jogar?");
            printf("\n\n(1)Portugu�s");
            printf("\n\n(2)Matem�tica");
            printf("\n\n(3)Variedades");
            printf("\n\nDigite o c�digo da mat�ria desejada: ");
            scanf("%d", &cod);

     system("cls");/*Limpar a tela anterior*/


//Utilizar a condicional if...else, para identificar as op��es escolhidas pelo usu�rio
    if (cod==1){

//Apresentar a op��o da mat�ria escolhida
        printf("-----------------------------------------------------------------------------\n");
        printf("                                 PORTUGU�S\n");
        printf("-----------------------------------------------------------------------------\n");

//Iniciar as perguntas do jogo, referente a mat�ria escolhida pelo usu�rio
        	printf ("Vamos comecar! \n\n");
        	printf ("\n1) QUAL PALAVRA ESTA ESCRITA CORRETAMENTE?");
        	printf("\n\na)Chicara");
        	printf("\nb)Jil�");
        	printf("\nc)Emcima");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &port_alt[0]);
        }
//Condicional if, para analisar a resposta do usu�rio
        if (port_alt[0]=='b')
        {
            printf("\nResposta certa");
            printf("\n\nVoce acaba de ganhar a primeira estrela");
            printf("\n\nVamos para a pergunta que vale a segunda estrela");
            printf("\n\nAperte enter para continuar!");

     do{
        cod2 = getch();

    }while (cod2 != 13);


    system("cls");

    printf ("\n2) EM QUAL ALTERNATIVA ESTA A PALAVRA COM O G�NERO INDICADO INCORRETAMENTE?");
        	printf("\n\na)a �gape");
        	printf("\nb)a grama");
        	printf("\nc)a h�lice");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &port_alt[1]);
        }
            if (port_alt[1]=='a')
        {

        printf("\nResposta certa");
        printf("\n\nParab�ns voc� ganhou a segunda estrela, vamos para a terceira");
        printf("\n\nBOA SORTE!");
        printf("\n\nAperte enter para continuar!");

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

        printf ("\n3) O PLURAL DE FOG�OZINHO E CIDAD� �: ");
        	printf("\n\na)fog�ezinhos e cidad�os.");
        	printf("\nb)fog�ozinhos e cidad�os.");
        	printf("\nc)fog�ezinhos e cidad�es.");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &port_alt[2]);
        }system("cls");/*Limpar a tela anterior*/
            if (port_alt[2]=='a')
        {

        printf("\nResposta certa");
        printf("\n\nCaramba! Voc� � bom mesmo.");
        printf("\n\nFaltam apenas duas perguntas para conquistar a medalha de ouro");
        printf("\n\nVAMOS L�!");
        printf("\n\nAperte enter para continuar!");

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

        printf ("\n4)DADA AS SENTEN�AS: ");
        printf("\n 1. Ele n�o chegou a falar com a Presidenta;");
        printf("\n 2. Ele sofreu um entorse grave;");
        printf("\n 3. A tracoma � uma doen�a contagiosa.");
        printf("\nDeduzimos que:");
        	printf("\n\na)apenas a senten�a 2 est� correta");
        	printf("\nb) todas est�o corretas");
        	printf("\nc)apenas a senten�a 1 est� correta");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &port_alt[3]);
        }
            if (port_alt[3]=='c')
        {

        printf("\nResposta certa");
        printf("\n\nEst� chegando ao final");
        printf("\n\Falta apenas uma pergunta para a conquista da medalha de ouro");
        printf("\n\nPARA, RESPIRA E...Aperte enter para continuar!");

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

            printf ("\n5)QUAL ALTERNATIVA H� ERRO NA FLEX�O DE N�MEROS? ");
            printf("\n\na)as �guas-marinhas, as p�blicas-formas, os ac�rd�os");
        	printf("\nb)capit�es-mor, sabi�s-pirangas, autos-de-f�");
        	printf("\nc)guardas-florestais, malmequeres, Ave-Marias");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &port_alt[4]);
        }
            if (port_alt[4]=='b')
        {

        printf("\nResposta certa");

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

    printf("\n\n---------------------------------------------------------------------------");
    printf("\n\n                         PARAB�NSSSSSS!");
    printf("\n\n---------------------------------------------------------------------------");
         printf("\n\nVOC� CONQUITOU AS CINCO ESTRELAS, ISSO PROVA QUE VOC� ANDA ESTUDANDO");
         printf("\n\nGUARDA ESSA MEDALHA DE OURO, FOI MUITO BEM MERECIDA");
         printf("\n\nSE DESEJAR FINALIZAR O JOGO � S� APERTAR ENTER");
         printf("\n\nE LEMBRE-SE AINDA TEM OUTROS DESAFIOS NO NOSSO QUIZ");
         printf("\n\nBASTA DIGITAR 0 E VOC� SER� DIRECIONADO PARA O MENU INICIAL");
         scanf("%d", &resp);
system("cls");


         }

         //Utilizar a condicional if...else, para identificar as op��es escolhidas pelo usu�rio
    if (cod==2){

//Apresentar a op��o da mat�ria escolhida
        printf("-----------------------------------------------------------------------------\n");
        printf("                                 MATEM�TICA\n");
        printf("-----------------------------------------------------------------------------\n");

//Iniciar as perguntas do jogo, referente a mat�ria escolhida pelo usu�rio
        	printf ("Vamos comecar! \n\n");
        	printf ("\n1)QUATRO MOEDAS S�O LAN�ADAS SIMULTANEAMENTE. QUA A PROBABILIDADE");
        	printf ("\nDE OCORRER COROA EM UMA S� MOEDA?");
        	printf("\n\na)1/8");
        	printf("\nb)2/9");
        	printf("\nc)1/4");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &mat_alt[0]);
        }
//Condicional if, para analisar a resposta do usu�rio
        if (mat_alt[0]=='c')
        {
            printf("\nResposta certa");
            printf("\n\nVoce acaba de ganhar a primeira estrela");
            printf("\n\nVamos para a pergunta que vale a segunda estrela");
            printf("\n\nAperte enter para continuar!");

     do{
        cod2 = getch();

    }while (cod2 != 13);


    system("cls");

    printf ("\n2) DETERMINE A �REA DE UM TRI�NGULO COM BASE NOS SEGUINTES DADOS:");
    printf(" (base:3 e altura:8)");
        	printf("\n\na)12");
        	printf("\nb)11");
        	printf("\nc)16");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &mat_alt[1]);
        }
            if (mat_alt[1]=='a')
        {

        printf("\nResposta certa");
        printf("\n\nParab�ns voc� ganhou a segunda estrela, vamos para a terceira");
        printf("\n\nBOA SORTE!");
        printf("\n\nAperte enter para continuar!");

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

        printf ("\n3) QUAL A PROPOSI��O COMPOSTA LOGICAMENTE VERDADEIRA:");
        	printf("\n\na)(2=2)=>(2.3=5)");
        	printf("\nb)(2=3)e(2.3=5)");
        	printf("\nc)(2=3)=>(2.3=5)");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &mat_alt[2]);
        }system("cls");/*Limpar a tela anterior*/
            if (mat_alt[2]=='c')
        {

        printf("\nResposta certa");
        printf("\n\nCaramba! Voc� � bom mesmo.");
        printf("\n\nFaltam apenas duas perguntas para conquistar a medalha de ouro");
        printf("\n\nVAMOS L�!");
        printf("\n\nAperte enter para continuar!");

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

        printf ("\n4)SE 4 M�QUINAS FAZEM UM SERVI�O EM 6 DIAS, ENT�O 3 DESSAS");
        printf("M�QUINAS FAR�O O MESMO SERVI�O EM:");
        	printf("\n\na)7 dias");
        	printf("\nb)8 dias");
        	printf("\nc)4,5 dias");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &mat_alt[3]);
        }
            if (mat_alt[3]=='b')
        {

        printf("\nResposta certa");
        printf("\n\nEst� chegando ao final");
        printf("\n\Falta apenas uma pergunta para a conquista da medalha de ouro");
        printf("\n\nPARA, RESPIRA E...Aperte enter para continuar!");

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

            printf ("\n5)QUAL ALTERNATIVA H� ERRO NA FLEX�O DE N�MEROS? ");
            printf("\n\na)as �guas-marinhas, as p�blicas-formas, os ac�rd�os");
        	printf("\nb)capit�es-mor, sabi�s-pirangas, autos-de-f�");
        	printf("\nc)guardas-florestais, malmequeres, Ave-Marias");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &mat_alt[4]);
        }
            if (mat_alt[4]=='b')
        {

        printf("\nResposta certa");

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

    printf("\n\n---------------------------------------------------------------------------");
    printf("\n\n                         PARAB�NSSSSSS!");
    printf("\n\n---------------------------------------------------------------------------");
         printf("\n\nVOC� CONQUITOU AS CINCO ESTRELAS, ISSO PROVA QUE VOC� ANDA ESTUDANDO");
         printf("\n\nGUARDA ESSA MEDALHA DE OURO, FOI MUITO BEM MERECIDA");
         printf("\n\nSE DESEJAR FINALIZAR O JOGO � S� APERTAR ENTER");
         printf("\n\nE LEMBRE-SE AINDA TEM OUTROS DESAFIOS NO NOSSO QUIZ");
         printf("\n\nBASTA DIGITAR 0 E VOC� SER� DIRECIONADO PARA O MENU INICIAL");
         scanf("%d", &resp);
system("cls");

        }

                 //Utilizar a condicional if...else, para identificar as op��es escolhidas pelo usu�rio
    if (cod==3){

//Apresentar a op��o da mat�ria escolhida
        printf("-----------------------------------------------------------------------------\n");
        printf("                                 VARIEDADES\n");
        printf("-----------------------------------------------------------------------------\n");

//Iniciar as perguntas do jogo, referente a mat�ria escolhida pelo usu�rio
        	printf ("Vamos comecar! \n\n");
        	printf ("\n1) O T�TANO � UMA DOEN�A AGUDA E CONTAGIOSA QUE PODE SER");
        	printf("\nPREVENIDA MEDIANTE CUIDADOS COM O AMBIENTE HIGIENE PESSOAL E VETORES?");
        	printf("\n\na)Certo");
        	printf("\nb)Errado");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &var_alt[0]);
        }
//Condicional if, para analisar a resposta do usu�rio
        if (var_alt[0]=='b')
        {
            printf("\nResposta certa");
            printf("\n\nVoce acaba de ganhar a primeira estrela");
            printf("\n\nVamos para a pergunta que vale a segunda estrela");
            printf("\n\nAperte enter para continuar!");

     do{
        cod2 = getch();

    }while (cod2 != 13);


    system("cls");

    printf ("\n2)CAPIT�ES DE AREIA � UM ROMANCE ESCRITO POR QUAL AUTOR?");
        	printf("\n\na)Guimar�es Rosa");
        	printf("\nb)Machado de Assis.");
        	printf("\nc)Jorge Amado.");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &var_alt[1]);
        }
            if (var_alt[1]=='c')
        {

        printf("\nResposta certa");
        printf("\n\nParab�ns voc� ganhou a segunda estrela, vamos para a terceira");
        printf("\n\nBOA SORTE!");
        printf("\n\nAperte enter para continuar!");

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

        printf ("\n3)QUE FOI O ATOR PRINCIPAL DO FILME SR E SR� SMITH ");
        	printf("\n\na)Brad Pitt.");
        	printf("\nb)Tom Hanks");
        	printf("\nc)Tom Cruise");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &var_alt[2]);
        }
            if (var_alt[2]=='a')
        {

        printf("\nResposta certa");
        printf("\n\nCaramba! Voc� � bom mesmo.");
        printf("\n\nFaltam apenas duas perguntas para conquistar a medalha de ouro");
        printf("\n\nVAMOS L�!");
        printf("\n\nAperte enter para continuar!");

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

        printf ("\n4)QUAL ANIME JAPON�S POSSUI UMA RAPOUSA DE NOVE CALDAS");
            printf("\n\na)Bleach");
        	printf("\nb)Alvin e os esquilos");
        	printf("\nc)Naruto");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &var_alt[3]);
        }
            if (var_alt[3]=='c')
        {

        printf("\nResposta certa");
        printf("\n\nEst� chegando ao final");
        printf("\n\Falta apenas uma pergunta para a conquista da medalha de ouro");
        printf("\n\nPARA, RESPIRA E...Aperte enter para continuar!");

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

            printf ("\n5)QUEM CANTA A M�SICA CINQUENTA REIS");
            printf("\n\na)Naiara Azevedo");
        	printf("\nb)Maiara e Maraisa");
        	printf("\nc)Mar�lia Mendo�a");
        	printf("\n\nResposta: ");
			scanf ("\n%c", &var_alt[4]);
        }
            if (var_alt[4]=='a')
        {

        printf("\nResposta certa");

        do{
        cod2 = getch();

        }while (cod2 != 13);

        system("cls");

    printf("\n\n---------------------------------------------------------------------------");
    printf("\n\n                         PARAB�NSSSSSS!");
    printf("\n\n---------------------------------------------------------------------------");
         printf("\n\nVOC� CONQUISTOU AS CINCO ESTRELAS, ISSO PROVA QUE VOC� ANDA ESTUDANDO");
         printf("\n\nGUARDA ESSA MEDALHA DE OURO, FOI MUITO BEM MERECIDA");
         printf("\n\nSE DESEJAR FINALIZAR O JOGO � S� APERTAR ENTER");
         printf("\n\nE LEMBRE-SE AINDA TEM OUTROS DESAFIOS NO NOSSO QUIZ");
         printf("\n\nBASTA DIGITAR 0 E VOC� SER� DIRECIONADO PARA O MENU INICIAL");
         scanf("%d", &resp);
system("cls");

        }
        else
      	{
    printf("-----------------------------------------------------------------------------\n");
    printf ("\n\nVOC� ERROU!\n");
      		printf("\n Deseja jogar novamente?");
      		printf("\n\nSe sim digite 0 se n�o digite 1: ");
      		scanf("\n\n%d", &resp);
    printf("\n-----------------------------------------------------------------------------\n");
        system("cls");/*Limpar a tela anterior*/
      	      	}

}


    while (resp==0);

    system("cls");
    printf("\n\nOBRIGADO POR PARTICIPAR DO QUIZ");



 return (0);

}






