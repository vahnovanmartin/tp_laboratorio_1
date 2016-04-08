
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{

  float A,B, respuesta;
  int flagA=0,flagB=0,opcion;

    do{
        printf("--------calculadora--------\n");
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma(A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);
        system("cls");

        switch(opcion)
        {

            case 1:

                    printf("ingrese un numero:\n");
                    scanf("%f",&A);
                    flagA=1;

                    break;


            case 2:

                    printf("ingrese otro numero:\n");
                    scanf("%f",&B);
                    flagB=1;

                    break;


            case 3:

                    if(flagA==0||flagB==0)
                    {
                        printf("error en el operando \n");
                    }


                    else
                    {
                        respuesta= suma(A,B);
                        printf("\n la suma es: %f \n\n",respuesta);
                    }

                    break;


            case 4:

                    if(flagA==0||flagB==0)
                    {
                        printf("\n error en el operando \n\n");
                    }

                    else
                    {
                        respuesta= resta (A,B);
                        printf("\n la resta es : %f \n\n" , respuesta);
                    }

                    break;


            case 5:

                    if(flagA==0||flagB==0)
                    {
                        printf("error en el operando \n\n");
                    }

                    else
                    {
                        if(B==0)
                        {
                            printf("\n no se puede dividir por cero\n\n");
                        }

                        else
                        {
                            respuesta= division(A,B);
                            printf("\n la division es :%f\n\n",respuesta);
                        }
                     }

                    break;


            case 6:

                    if(flagA==0||flagB==0)
                    {
                        printf("\n error en el operando \n\n");
                    }

                    else
                    {
                        respuesta=multiplicacion (A,B);
                        printf("\n la multiplicacion es :%f \n\n",respuesta);
                    }

                    break;


            case 7:

                    if(flagA==0)
                    {
                        printf("\n error en el operando \n\n");
                    }

                    else
                    {
                        int aux=(int)A;

                        if((A-aux)==0)
                        {
                            respuesta=factorial (A);
                            printf("\n el factorial es :%f \n\n",respuesta);
                        }

                        else
                        {
                            printf("el numero del factorial no es entero\n");
                        }
                    }

                    break;


            case 8:

                    if(flagA==0||flagB==0)
                    {
                        printf("error en el operando \n");
                    }

                    else
                    {
                        respuesta= suma(A,B);
                        printf("la suma es: %f \n",respuesta);

                        respuesta= resta (A,B);
                        printf("la resta es : %f \n" , respuesta);

                        respuesta=multiplicacion (A,B);
                        printf("la multiplicacion es :%f \n",respuesta);

                    if(B==0)
                    {
                      printf("no se puede dividir por cero\n");
                    }

                    else
                    {
                       respuesta= division(A,B);
                        printf("la division es :%f\n",respuesta);
                    }

                    if(flagA==0)
                    {
                        printf("\n error en el operando \n\n");
                    }

                    else
                    {
                        int aux=(int)A;

                        if((A-aux)==0)
                        {
                            respuesta=factorial (A);
                            printf("\n el factorial es :%f \n\n",respuesta);
                        }

                        else
                        {
                            printf("el numero del factorial no es entero\n");
                        }
                    }
                    }
                    break;


            case 9:

                   break;

                    default:
                        printf("opcion no valida\n");

        }
    }

    while (opcion !=9);

    return 0;

}
