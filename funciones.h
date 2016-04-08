


#define FUNCIONES_H_INCLUDED


/** \brief Suma dos numeros.
 *
 * \param x float El primer numero.
 * \param y float El segundo numero.
 * \return float Devuelve la suma de los dos numeros.
 *
 */
float suma(float  x , float y)
{
   return x+y;
}


/** \brief Resta de dos numeros
 *
 * \param x float El primer numero a ingresar .
 * \param y float El segundo numero a ingresar.
 * \return float devuelve la resta de los dos numeros.
 *
 */


float resta (float x , float y)
{
    return x-y;
}


/** \brief multiplica dos numeros.
 *
 * \param x float El primer numero a ingresar.
 * \param y float El segundo numero a ingresar.
 * \return float devuelve la multiplicacion de los numeros.
 *
 */


float multiplicacion (float x , float y)
{
    return x*y;
}


/** \brief divide dos numeros a ingresar.
 *
 * \param float x el primer numero a ingresar.
 * \param float y el segundo numero a ingresar.
 * \return devuelve la division de los numeros.
 *
 */


float division (float x , float y)
{
    return (float)x/y;
}


/** \brief Calcula el factorial del primer numero ingresado.
 *
 * \param float x el primer numero a ingresar.
 * \param
 * \return devuelve el factorial del numero ingresado.
 *
 */


int factorial (float x)
{
    int acum=1;

    for (int i=x;i>0;i--)
    {
        acum=acum*i;
    }

    return acum ;
}



