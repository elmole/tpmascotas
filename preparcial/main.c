#include <stdio.h>
#include <stdlib.h>
#include  "funciones.h"
#define num 20

/* id se incrementa con un contador ej: int idmascota=10000;

*/



 int main()
{

   emascota m[num];
    char seguir = 'n';
    int option = 0;
  system("color 8e");
        printf("\n         �����������������������������������������������������������ͻ");
		printf("\n         �                   ::  bienvenido ::                       �");
		printf("\n         �����������������������������������������������������������ͼ\n\n");

         system("pause");
         system("cls");

    inicio(m);

    while(seguir == 'n')
    {  system("color 8e");

        printf("\n\n \n");
        printf("\n         ������������������������������������������������ͻ");
		printf("\n         �        :     MENU DE OPCIONES  ::              �");
		printf("\n         ������������������������������������������������͹");
		printf("\n         �  1- alta mascota                             �");
		printf("\n         �  2- baja mascota                             �");
		printf("\n         �  3- modificar mascota                        �");
		printf("\n         �  4-                                          �");
		printf("\n         �  8- Salir                                    �");
		printf("\n         ������������������������������������������������ͼ");
		printf("\n");



        printf("\n  Ingrese una de las opciones: ");

        option = vM(1, 8);
        printf("\n\n");

        switch(option)
        {
            case 1:
                alta(m);

                break;

            case 2:
                baja(m);
                system("pause");
                system("cls");

                break;
            case 3:
                modificar(m);
                system("pause");
                system("cls");

           /* case 3:
                system("color 5b ");
                lista(people);
                system("pause");

                break;

            case 4:
                system("color 9f");
                grafico(people);

                break;*/

            case 8:
                printf("  Esta seguro que desea salir? (y=si/n=no): ");
                seguir = vRta(seguir);

                if(seguir == 'y')
                {
                    printf("\n\n  Adios, vuelva pronto!\n\n");
                }

                break;
        }
system("cls");
    system("pause");
    }





    return 0;
}






