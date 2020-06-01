
#include "butcher.h"

/****************************************************************************
	PROPOSITO: El algoritmo Butcher originalmente calcula el Domingo de
	Resurección, pero se modifico la función para que calcule el Domingo de
	Ramos. Retorna la fecha del Domingo de Ramos del año enviado por
	parámetros.
	COMENTARIOS:
****************************************************************************/

FECHA Butcher(short anno)
{
    short a = anno % 19;
    short b = anno / 100;
    short c = anno % 100;
    short d = b / 4;
    short e = b % 4;
    short f = (b + 8) / 25;
    short g = (b - f + 1) / 3;
    short h = (19 * a + b - d - g + 15) % 30;
    short i = c / 4;
    short k = c % 4;
    short l = (32 + 2 * e+ 2 * i - h - k) % 7;
    short m = (a + 11 * h + 22 * l) / 451;
    short n = h + l - 7 * m + 107; /// Domingo de Ramos = 107; Domingo de Resurección = 114.
    short mes = n / 31;
    short dia = 1 + (n % 31);

    return InicializarFecha(dia, mes, anno);
}
