
#include "fecha.h"
#include "zeller.h"

/****************************************************************************
	PROPOSITO: Cálculo de la variable A. Según la cantidad de días que tenga cada siglo.
	Nos dará un número distinto. Y a este resultado se le va sumando (o restando) 7 o
	múltiplos de 7 hasta que quede un numero entre 0 y 6.
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
	PROPOSITO: Cálculo de la variable B. Si el año es bisiesto y la fecha
    a determinar es de enero o febrero, entonces habrá que restar 1
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
	PROPOSITO: Cálculo de la variable C. A las últimas dos cifras del año hay
	que dividirlas por cuatro, y al resultado hay que rendondearlo.
	Y al resultado le sumamos las mismas dos últimas cifras del año.
	COMENTARIOS:
****************************************************************************/

short CalcularUltimasDosCifras(short anno)
{
    anno %= 100;
    short C = anno / 4;

    return C += anno;
}

/****************************************************************************
	PROPOSITO: Cálculo de la variable D. A cada mes le corresponde un número
	como vemos a continuación.
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
	PROPOSITO: Esta función calcula el dia (Lun,Mar..) de cualquier siglo.
    La función retornara un número del (1-7). Para obtener el día
    se tienen que sumar 5 cosas.

        A (CalcularNumeroSiglo) = Tiene que ver con el siglo (A cada siglo le corresponde un número).
        B (CalcularNumeroBisiesto) = Si es bisiesto o no.
        C (CalcularUltimasDosCifras) = Las ultimas dos cifras del año, se dividen por 4.
        D (CalcularNumeroMes) = Tiene que ver con el mes (A cada mes le corresponde un número).
        E (dia) = El día númerico, osea, (1...31).
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
