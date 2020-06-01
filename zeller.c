
#include "fecha.h"
#include "zeller.h"

/****************************************************************************
	PROPOSITO: C�lculo de la variable A. Seg�n la cantidad de d�as que tenga cada siglo.
	Nos dar� un n�mero distinto. Y a este resultado se le va sumando (o restando) 7 o
	m�ltiplos de 7 hasta que quede un numero entre 0 y 6.
	COMENTARIOS:
****************************************************************************/

short CalcularNumeroSiglo(short anno)
{
    short A = ((anno / 100) / 4) - 2 * (anno / 100);

    while (A < 0 || A > 6)
    {
        A += 7;
    }

    return A;
}

/****************************************************************************
	PROPOSITO: C�lculo de la variable B. Si el a�o es bisiesto y la fecha
    a determinar es de enero o febrero, entonces habr� que restar 1
    en la suma (B = -1). En todos los otros casos, no hay que sumar ni
    restar nada (B = 0).
	COMENTARIOS:
****************************************************************************/

short CalcularNumeroBisiesto(short anno, short mes)
{
    short B = 0;

    if ( (mes == 1 || mes == 2) && IsAnnoBisiesto(anno) )
    {
        B = -1;
    }

    return B;
}

/****************************************************************************
	PROPOSITO: C�lculo de la variable C. A las �ltimas dos cifras del a�o hay
	que dividirlas por cuatro, y al resultado hay que rendondearlo.
	Y al resultado le sumamos las mismas dos �ltimas cifras del a�o.
	COMENTARIOS:
****************************************************************************/

short CalcularUltimasDosCifras(short anno)
{
    anno %= 100;
    short C = anno / 4;

    return C += anno;
}

/****************************************************************************
	PROPOSITO: C�lculo de la variable D. A cada mes le corresponde un n�mero
	como vemos a continuaci�n.
	COMENTARIOS:
****************************************************************************/

short CalcularNumeroMes(short mes)
{
    short D = 0;

    switch (mes)
    {
        case ENERO:
        {
            D = 6;
            break;
        }
        case FEBRERO:
        {
            D = 2;
            break;
        }
        case MARZO:
        {
            D = 2;
            break;
        }
        case ABRIL:
        {
            D = 5;
            break;
        }
        case MAYO:
        {
            D = 0;
            break;
        }
        case JUNIO:
        {
            D = 3;
            break;
        }
        case JULIO:
        {
            D = 5;
            break;
        }
        case AGOSTO:
        {
            D = 1;
            break;
        }
        case SEPTIEMBRE:
        {
            D = 4;
            break;
        }
        case OCTUBRE:
        {
            D = 6;
            break;
        }
        case NOVIEMBRE:
        {
            D = 2;
            break;
        }
        case DICIEMBRE:
        {
            D = 4;
            break;
        }
    }

    return D;
}

/****************************************************************************
	PROPOSITO: Esta funci�n calcula el dia (Lun,Mar..) de cualquier siglo.
    La funci�n retornara un n�mero del (1-7). Para obtener el d�a
    se tienen que sumar 5 cosas.

        A (CalcularNumeroSiglo) = Tiene que ver con el siglo (A cada siglo le corresponde un n�mero).
        B (CalcularNumeroBisiesto) = Si es bisiesto o no.
        C (CalcularUltimasDosCifras) = Las ultimas dos cifras del a�o, se dividen por 4.
        D (CalcularNumeroMes) = Tiene que ver con el mes (A cada mes le corresponde un n�mero).
        E (dia) = El d�a n�merico, osea, (1...31).
	COMENTARIOS:
****************************************************************************/

short CalcularDiaSemana(FECHA fecha)
{
    short rta = (CalcularNumeroSiglo(fecha.anno) +
                 CalcularNumeroBisiesto(fecha.anno,fecha. mes) +
                 CalcularUltimasDosCifras(fecha.anno) +
                 CalcularNumeroMes(fecha.mes) +
                 fecha.dia);

    while (rta < 0 || rta > 6)
    {
        rta -= 7;
    }

    return rta + 1;
}
