#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int op;
    do
    {
        printf("\n************************************************************************************************************************\n\n");
	    printf("\t\t\t                        CHAMPIONS LEAGUE 2018-2019 \n");
        printf("\n************************************************************************************************************************\n\n"); 
		printf("\n ELIGUE LA OPCION QUE QUIERAS PARA SABER LOS DATOS DE LA CHAMPIONS: \n");
        printf("\n 1- OCTAVOS DE FINAL ");
        printf("\n 2- CUARTOS DE FINAL ");
        printf("\n 3- SEMIFINAL ");
        printf("\n 4- FINAL ");
        printf("\n 5- CAMPEON DE LA CHAMPIONS LEAGUE ");
        printf("\n 6- SALIR FIN DEL PROGRAMA \n");
        printf("\n OPCION ELEGIDA: ");
        scanf("%d",&op);
		system("cls");
        switch(op)
        {
            case 1:
                printf("\n\t\t **OCTAVOS DE FINAL** \t\t\n");
                printf("\n 1.- Ajax / 5-3 / Real Madrid \n");
                printf("\n 2.- Manchester United / 3-3 / PSG \n");
                printf("\n 3.- Liverpool / 3-1 / Bayern Múnich \n");
                printf("\n 4.- Tottenham H / 4-0 / Borussia Dortmund\n");
                printf("\n 5.- Porto / 3-4 / Roma\n");
                printf("\n 6.- Olympique de Lyon / 1-5 / Barcelona \n");
                printf("\n 7.- Atlético de Madrid / 2-3 / Juventus \n");
                printf("\n 8.- Schalke 04 / 2-10 / Manchester City\n");
                printf("\n\n");
                break;

            case 2:
                printf("\n\n");
				printf("\n\t\t **CUARTOS DE FINAL** \t\t\n");
				printf("\n 1.- Ajax  / 3-2 / Juventus\n");
				printf("\n 2.- Liverpool / 6-1 / Porto\n");
				printf("\n 3.- Tottenham Hotspur / 4-4 / Manchester City\n");
				printf("\n 4.- Manchester United / 0-4 / Barcelona\n");
				printf("\n\n");
                break;

            case 3:
                printf("\n\n");
                printf("\n\t\t **SEMIFINAL** \t\t");
                printf("\n 1.- Tottenham Hotspur / 3-3 / Ajax \n");
                printf("\n 2.- Barcelona / 3-4 / Liverpool\n");
				printf("\n\n");
                break;

            case 4:
                printf("\n\n");
                printf("\n\t\t **FINAL ** \t\t");
                printf("\n 1-. Tottenham Hotspur / 0-2 / Liverpool \n");
                printf("\n\n");
                break;

            case 5:
            	printf("\n\n");
            	printf("\n\t\t **CAMPEON DE LA CHAMPIONS LEAGUE** \t\t");
                printf("\n LIVERPOOL... \n");
                printf("\n\n");
                break;
                default:
                printf("Fin del Programa \n");
                printf("\n\n");
        }
    }while(op<=5&&op>0);
    return 0;
}
