
#include "feriados.h"

/****************************************************************************
	PROPOSITO: Retorna true, si la fecha enviada por par�metros coincide con
	un feriado inamovible o fijo.
	COMENTARIOS:
****************************************************************************/

bool IsFeriadoFijo(FECHA fecha)
{
    switch(fecha.mes)
    {
        case ENERO:
        {
            /****************************************************************************
                FERIADO: A�o nuevo
                FECHA: 1 de Enero
                �MBITO: Internacional
                RIGE: -
                LEY: -
           ****************************************************************************/
            if (fecha.dia == 1)
            {
                return true;
            }

            /****************************************************************************
                FERIADO: D�a de los Reyes Magos
                FECHA: 6 de Enero
                �MBITO: Internacional
                RIGE: Hasta 1977
                LEY: -
            ****************************************************************************/
            if (fecha.dia == 6 && fecha.anno <= 1977)
            {
                return true;
            }

            break;

        }
        case MARZO:
        {
            /****************************************************************************
                FERIADO: D�a de San Jos�, padre de Jes�s.
                FECHA: 19 de Marzo
                �MBITO: Internacional
                RIGE: Desde 1847, hasta 1964 (aproximadamente)
                LEY: -
            ****************************************************************************/
            if (fecha.dia == 19 && fecha.anno >= 1847 && fecha.anno <= 1964)
            {
                return true;
            }

            /****************************************************************************
                FERIADO: D�a Nacional de la Memoria por la Verdad y la Justicia
                FECHA: 24 de Marzo
                �MBITO: Nacional
                RIGE: Desde 2006 (Como feriado nacional inamovible)
                LEY: 25.633
            ****************************************************************************/
            if (fecha.dia == 24 && fecha.anno >= 2006)
            {
                return true;
            }

            break;
        }
        case ABRIL:
        {
            /****************************************************************************
                FERIADO: D�a del Veterano y de los Ca�dos en la Guerra de Malvinas
                FECHA: 2 de Abril
                �MBITO: Nacional
                RIGE: Desde 2006 (Como feriado nacional inamovible)
                LEY: 25.370
            ****************************************************************************/
            if (fecha.dia == 2 && fecha.anno >= 2006)
            {
                return true;
            }

            break;
        }
        case MAYO:
        {
            /****************************************************************************
                FERIADO: D�a del Trabajador
                FECHA: 1 de Mayo
                �MBITO: Internacional
                RIGE: Desde 1889
                LEY: -
            ****************************************************************************/
            if (fecha.dia == 1 && fecha.anno >= 1889)
            {
                return true;
            }

            /****************************************************************************
                FERIADO: D�a de la Revoluci�n de Mayo
                FECHA: 25 de Mayo
                �MBITO: Nacional
                RIGE: Desde 1810
                LEY: -
            ****************************************************************************/
            if (fecha.dia == 25 && fecha.anno >= 1810)
            {
                return true;
            }

            break;
        }
        case JUNIO:
        {
            /****************************************************************************
                FERIADO: D�a de la Afirmaci�n de los Derechos Argentinos sobre las Malvinas
                FECHA: 10 de Junio
                �MBITO: Nacional
                RIGE: Desde 1985, hasta 1994 (Como feriado nacional inamovible)
                DECRETO: 901/84
            ****************************************************************************/
            if (fecha.dia == 10 && fecha.anno >= 1985 && fecha.anno <= 1994)
            {
                return true;
            }

            /****************************************************************************
                FERIADO: Paso a la Inmortalidad del General Manuel Belgrano
                FECHA: 20 de Junio
                �MBITO: Nacional
                RIGE: Desde 1941, hasta 1994 y Desde 2011
                LEY: 12.361
            ****************************************************************************/
            if (fecha.dia == 20)
            {
                if (fecha.anno >= 1941 && fecha.anno <= 1994)
                {
                    return true;
                }
                else if (fecha.anno >= 2011)
                {
                    return true;
                }
            }

            /****************************************************************************
                FERIADO: D�a de San Pedro y San Pablo
                FECHA: 29 de Junio
                �MBITO: Internacional
                RIGE: Hasta 1961 (aproximadamente)
                LEY: -
            ****************************************************************************/
            if (fecha.dia == 29 && fecha.anno <= 1961)
            {
                return true;
            }

            break;
        }
        case JULIO:
        {
            /****************************************************************************
                FERIADO: D�a de la Independencia
                FECHA: 9 de Julio
                �MBITO: Nacional
                RIGE: Desde 1816
                LEY: -
            ****************************************************************************/
            if (fecha.dia == 9 && fecha.anno >= 1816)
            {
                return true;
            }

            break;
        }
        case AGOSTO:
        {
            /****************************************************************************
                FERIADO: D�a de Asunci�n de Mar�a
                FECHA: 15 de Agosto
                �MBITO: Internacional
                RIGE: Hasta 1977
                LEY: -
            ****************************************************************************/
            if (fecha.dia == 15 && fecha.anno <= 1977)
            {
                return true;
            }

            /****************************************************************************
                FERIADO: Paso a la Inmortalidad del General Jos� de San Mart�n
                FECHA: 17 de Agosto
                �MBITO: Nacional
                RIGE: Desde 1851, hasta 1994 (Como feriado nacional inamovible)
                LEY: -
            ****************************************************************************/
            if (fecha.dia == 17 && fecha.anno >= 1850 && fecha.anno <= 1994)
            {
                return true;
            }

            /****************************************************************************
                FERIADO: D�a de Santa Rosa de Lima
                FECHA: 30 de Agosto
                �MBITO: Internacional
                RIGE: Desde 1671, hasta 1961 (aproximadamente)
                LEY: -
            ****************************************************************************/
            if (fecha.dia == 30 && fecha.anno >= 1671 && fecha.anno <= 1961)
            {
                return true;
            }

            break;
        }
        case OCTUBRE:
        {
            /****************************************************************************
                FERIADO: D�a de la Raza
                FECHA: 12 de Octubre
                �MBITO: Internacional
                RIGE: Desde 1916, hasta 1977 y Desde 1984, hasta 1998 (Como feriado nacional inamovible)
                LEY: -
            ****************************************************************************/
            if (fecha.dia == 12)
            {
                if (fecha.anno >= 1916 && fecha.anno <= 1977)
                {
                    return true;
                }
                else if (fecha.anno >= 1984 && fecha.anno <= 1994)
                {
                    return true;
                }
            }

            /****************************************************************************
                FERIADO: D�a de la Lealtad
                FECHA: 17 de Octubre
                �MBITO: Nacional
                RIGE: Desde 1946, hasta 1955.
                LEY: -
            ****************************************************************************/
            if (fecha.dia == 17 && fecha.anno >= 1946 && fecha.anno <= 1955)
            {
                return true;
            }

            break;
        }
        case NOVIEMBRE:
        {
            /****************************************************************************
                FERIADO: D�a de Todos los Santos
                FECHA: 1 de Noviembre
                �MBITO: Internacional
                RIGE: Hasta 1977
                LEY: -
            ****************************************************************************/
            if (fecha.dia == 1 && fecha.anno <= 1977)
            {
                return true;
            }

            /****************************************************************************
                FERIADO: D�a de San Valent�n (No confirmado)
                FECHA: 11 de Noviembre
                �MBITO: Internacional
                RIGE: Hasta 1961
                LEY: -
            ****************************************************************************/
            if (fecha.dia == 11 && fecha.anno <= 1961)
            {
                return true;
            }

            break;
        }
        case DICIEMBRE:
        {
            /****************************************************************************
                FERIADO: D�a de la Inmaculada Concepci�n de Mar�a
                FECHA: 8 de Diciembre
                �MBITO: Internacional
                RIGE: Desde 1854.
                LEY: -
            ****************************************************************************/
            if (fecha.dia == 8 && fecha.anno >= 1854)
            {
                return true;
            }

            /****************************************************************************
                FERIADO: Navidad
                FECHA: 25 de Diciembre
                �MBITO: Internacional
                RIGE: -
                LEY: -
            ****************************************************************************/
            if (fecha.dia == 25)
            {
                return true;
            }

            break;
        }
    }

    return false;
}

/****************************************************************************
	PROPOSITO: Retorna true, si la fecha enviada por par�metros coincide con
	un feriado extraordinario o �nico.
	COMENTARIOS:
****************************************************************************/
bool IsFeriadoUnico(FECHA fecha)
{
    switch(fecha.anno)
    {
        case 2010:
        {

            /****************************************************************************
                FERIADO: Tur�stico
                FECHA: 24 de Mayo de 2010
                �MBITO: Nacional
                DECRETO: 615/2010 NU
           ****************************************************************************/
            if (fecha.dia == 24 && fecha.mes == MAYO)
            {
                return true;
            }

            /****************************************************************************
                FERIADO: Censo Nacional de Poblaci�n y Vivienda
                FECHA: 27 de Octubre de 2010
                �MBITO: Nacional
                LEY: 24.254
                COMENTARIOS:
                � Ley 24.252. (Feriado nacional. D�a en que se efect�a el Censo Nacional de
                Poblaci�n y Vivienda). Art. 1�.� Decl�rase feriado nacional el d�a de
                cada a�o en el que se efect�e el Censo Nacional de Poblaci�n y Vivienda.
            ****************************************************************************/
            if (fecha.dia == 27 && fecha.mes == OCTUBRE)
            {
                return true;
            }

            break;
        }
        case 2011:
        {
            /****************************************************************************
                FERIADO: Tur�stico
                FECHA: 25 de Marzo de 2011
                �MBITO: Nacional
                DECRETO: 1585/2010
           ****************************************************************************/
            if (fecha.dia == 25 && fecha.mes == MARZO)
            {
                return true;
            }

            /****************************************************************************
                FERIADO: Tur�stico
                FECHA: 9 de Diciembre de 2011
                �MBITO: Nacional
                DECRETO: 1585/2010
           ****************************************************************************/
            if (fecha.dia == 9 && fecha.mes == DICIEMBRE)
            {
                return true;
            }

            break;
        }
        case 2012:
        {
            /****************************************************************************
                FERIADO: Bicentenario de la creaci�n y primera jura de la bandera argentina
                FECHA: 27 de Febrero de 2012
                �MBITO: Nacional
                LEY: 26.721
           ****************************************************************************/
            if (fecha.dia == 27 && fecha.mes == FEBRERO)
            {
                return true;
            }

            /****************************************************************************
                FERIADO: Tur�stico
                FECHA: 30 de Abril de 2012
                �MBITO: Nacional
                DECRETO: 1585/2010
           ****************************************************************************/
            if (fecha.dia == 30 && fecha.mes == ABRIL)
            {
                return true;
            }

            /****************************************************************************
                FERIADO: Bicentenario de la Batalla de Tucum�n
                FECHA: 24 de Septiembre de 2012
                �MBITO: Nacional
                LEY: 26.763
           ****************************************************************************/
            if (fecha.dia == 24 && fecha.mes == SEPTIEMBRE)
            {
                return true;
            }

            /****************************************************************************
                FERIADO: Tur�stico
                FECHA: 24 de Diciembre de 2012
                �MBITO: Nacional
                DECRETO: 1585/2010
           ****************************************************************************/
            if (fecha.dia == 24 && fecha.mes == DICIEMBRE)
            {
                return true;
            }

            break;
        }
        case 2013:
        {
            /****************************************************************************
                FERIADO: Bicentenario de la Asamblea General Constituyente de 1813
                FECHA: 31 de Enero de 2013
                �MBITO: Nacional
                LEY: 26.840
           ****************************************************************************/
            if (fecha.dia == 31 && fecha.mes == ENERO)
            {
                return true;
            }

            /****************************************************************************
                FERIADO: Bicentenario de la Batalla de Tucum�n
                FECHA: 20 de Febrero de 2013
                �MBITO: Nacional
                LEY: 26.837
           ****************************************************************************/
            if (fecha.dia == 20 && fecha.mes == FEBRERO)
            {
                return true;
            }

            /****************************************************************************
                FERIADO: Tur�stico
                FECHA: 1 de Abril de 2013
                �MBITO: Nacional
                DECRETO: 1585/2010
           ****************************************************************************/
            if (fecha.dia == 1 && fecha.mes == ABRIL)
            {
                return true;
            }

            /****************************************************************************
                FERIADO: Tur�stico
                FECHA: 21 de Junio de 2013
                �MBITO: Nacional
                DECRETO: 1585/2010
           ****************************************************************************/
            if (fecha.dia == 21 && fecha.mes == JUNIO)
            {
                return true;
            }

            break;
        }
        case 2014:
        {
            /****************************************************************************
                FERIADO: Tur�stico
                FECHA: 2 de Mayo de 2014
                �MBITO: Nacional
                DECRETO: 1768/2013
           ****************************************************************************/
            if (fecha.dia == 2 && fecha.mes == MAYO)
            {
                return true;
            }

            /****************************************************************************
                FERIADO: Tur�stico
                FECHA: 26 de Diciembre de 2014
                �MBITO: Nacional
                DECRETO: 1768/2013
           ****************************************************************************/
            if (fecha.dia == 26 && fecha.mes == DICIEMBRE)
            {
                return true;
            }

            break;
        }
        case 2015:
        {
            /****************************************************************************
                FERIADO: Tur�stico
                FECHA: 23 de Marzo de 2015
                �MBITO: Nacional
                DECRETO: 1768/2013
           ****************************************************************************/
            if (fecha.dia == 23 && fecha.mes == MARZO)
            {
                return true;
            }

            /****************************************************************************
                FERIADO: Tur�stico
                FECHA: 7 de Diciembre de 2015
                �MBITO: Nacional
                DECRETO: 1768/2013
           ****************************************************************************/
            if (fecha.dia == 7 && fecha.mes == DICIEMBRE)
            {
                return true;
            }

            break;
        }
        case 2016:
        {
            /****************************************************************************
                FERIADO: Tur�stico
                FECHA: 8 de Julio de 2016
                �MBITO: Nacional
                DECRETO: 1768/2013
           ****************************************************************************/
            if (fecha.dia == 8 && fecha.mes == JULIO)
            {
                return true;
            }

            /****************************************************************************
                FERIADO: Tur�stico
                FECHA: 9 de Diciembre de 2016
                �MBITO: Nacional
                DECRETO: 1768/2013
           ****************************************************************************/
            if (fecha.dia == 9 && fecha.mes == DICIEMBRE)
            {
                return true;
            }

            break;
        }
        case 2018:
        {
            /****************************************************************************
                FERIADO: Tur�stico
                FECHA: 30 de Abril de 2018
                �MBITO: Nacional
                DECRETO: 923/2017
           ****************************************************************************/
            if (fecha.dia == 30 && fecha.mes == ABRIL)
            {
                return true;
            }

            /****************************************************************************
                FERIADO: Tur�stico
                FECHA: 24 de Diciembre de 2018
                �MBITO: Nacional
                DECRETO: 923/2017
           ****************************************************************************/
            if (fecha.dia == 24 && fecha.mes == DICIEMBRE)
            {
                return true;
            }

            /****************************************************************************
                FERIADO: Tur�stico
                FECHA: 31 de Diciembre de 2018
                �MBITO: Nacional
                DECRETO: 923/2017
           ****************************************************************************/
            if (fecha.dia == 31 && fecha.mes == DICIEMBRE)
            {
                return true;
            }

            break;
        }
        case 2019:
        {
            /****************************************************************************
                FERIADO: Tur�stico
                FECHA: 8 de Julio de 2019
                �MBITO: Nacional
                DECRETO: 923/2017
           ****************************************************************************/
            if (fecha.dia == 8 && fecha.mes == JULIO)
            {
                return true;
            }

            /****************************************************************************
                FERIADO: Tur�stico
                FECHA: 19 de Agosto de 2019
                �MBITO: Nacional
                DECRETO: 923/2017
           ****************************************************************************/
            if (fecha.dia == 19 && fecha.mes == AGOSTO)
            {
                return true;
            }

            /****************************************************************************
                FERIADO: Tur�stico
                FECHA: 14 de Octubre de 2019
                �MBITO: Nacional
                DECRETO: 923/2017
           ****************************************************************************/
            if (fecha.dia == 14 && fecha.mes == OCTUBRE)
            {
                return true;
            }

            break;
        }
        case 2020:
        {
            /****************************************************************************
                FERIADO: Tur�stico
                FECHA: 23 de Marzo de 2020
                �MBITO: Nacional
                DECRETO: 717/2019
           ****************************************************************************/
            if (fecha.dia == 23 && fecha.mes == MARZO)
            {
                return true;
            }

            /****************************************************************************
                FERIADO: Tur�stico
                FECHA: 10 de Julio de 2020
                �MBITO: Nacional
                DECRETO: 717/2019
           ****************************************************************************/
            if (fecha.dia == 10 && fecha.mes == JULIO)
            {
                return true;
            }

            /****************************************************************************
                FERIADO: Tur�stico
                FECHA: 7 de Diciembre de 2020
                �MBITO: Nacional
                DECRETO: 717/2019
           ****************************************************************************/
            if (fecha.dia == 7 && fecha.mes == DICIEMBRE)
            {
                return true;
            }

            break;
        }
    }

    return false;
}

/****************************************************************************
	PROPOSITO: Retorna true, si la fecha enviada por par�metros coincide con
	el Lunes de Carnaval de ese a�o.
	COMENTARIOS:
	- Si se le restan 41 d�as a la Domingo de Ramos (Butcher) se obtendra
	el Lunes de Carnaval.
****************************************************************************/
bool IsFeriadoLunesCarnaval(FECHA fecha)
{
    if (IsFechaIguales(fecha, RestarDiasFecha(Butcher(fecha.anno), 41)))
    {
        return true;
    }

    return false;
}

/****************************************************************************
	PROPOSITO: Retorna true, si la fecha enviada por par�metros coincide con
	el Martes de Carnaval de ese a�o.
	COMENTARIOS:
	- Si se le restan 40 d�as a la Domingo de Ramos (Butcher) se obtendra
	el Martes de Carnaval.
****************************************************************************/
bool IsFeriadoMartesCarnaval(FECHA fecha)
{
    if (IsFechaIguales(fecha, RestarDiasFecha(Butcher(fecha.anno), 40)))
    {
        return true;
    }

    return false;
}

/****************************************************************************
	PROPOSITO: Retorna true, si la fecha enviada por par�metros coincide con
	el Jueves Santo de ese a�o.
	COMENTARIOS:
	- Si se le suman 4 d�as a la Domingo de Ramos (Butcher) se obtendra
	el Jueves Santo.
****************************************************************************/
bool IsFeriadoJuevesSanto(FECHA fecha)
{
    if (IsFechaIguales(fecha, SumarDiasFecha(Butcher(fecha.anno), 4)))
    {
        return true;
    }

    return false;
}

/****************************************************************************
	PROPOSITO: Retorna true, si la fecha enviada por par�metros coincide con
	el Viernes Santo de ese a�o.
	COMENTARIOS:
	- Si se le suman 5 d�as a la Domingo de Ramos (Butcher) se obtendra
	el Viernes Santo.
****************************************************************************/
bool IsFeriadoViernesSanto(FECHA fecha)
{
    if (IsFechaIguales(fecha, SumarDiasFecha(Butcher(fecha.anno), 5)))
    {
        return true;
    }

    return false;
}

/****************************************************************************
	PROPOSITO: Retorna true, si la fecha coincide con alguno de los 4
	feriados cat�licos.
	COMENTARIOS:
****************************************************************************/
bool IsFeriadoCatolico(FECHA fecha)
{
    if (IsFeriadoLunesCarnaval(fecha) ||  IsFeriadoMartesCarnaval(fecha) ||
       IsFeriadoJuevesSanto(fecha) || IsFeriadoViernesSanto(fecha))
    {
        return true;
    }

    return false;
}

/****************************************************************************
	PROPOSITO: Retorna true, si la fecha enviada por par�metros coincide con
	un feriado puente o trasladable.
	COMENTARIOS:
****************************************************************************/
bool IsFechaFeriadoPuente(FECHA fecha)
{
    switch(fecha.mes)
    {
        case JUNIO:
        {
            /****************************************************************************
                FERIADO: D�a de la Afirmaci�n de los Derechos Argentinos sobre las Malvinas
                FECHA: 10 de Junio
                �MBITO: Nacional
                RIGE: Desde 1995, hasta 2000
                DECRETO: 901/84
            ****************************************************************************/
            if (fecha.dia == 10 && fecha.anno >= 1995 && fecha.anno <= 2000)
            {
                return true;
            }

            /****************************************************************************
                FERIADO: Paso a la Inmortalidad del General Mart�n Miguel de G�emes
                FECHA: 17 de Junio
                �MBITO: Nacional
                RIGE: Desde 2017
                DECRETO: -
            ****************************************************************************/
            if (fecha.dia == 17 && fecha.anno >= 2017)
            {
                return true;
            }

            break;
        }
        case OCTUBRE:
        {
            /****************************************************************************
                FERIADO: D�a de la Raza
                FECHA: 12 de Octubre
                �MBITO: Internacional
                RIGE: Desde 1995
                LEY: -
            ****************************************************************************/
            if (fecha.dia == 12 && fecha.anno >= 1995)
            {
                return true;
            }

            break;
        }
        case NOVIEMBRE:
        {
            /****************************************************************************
                FERIADO: D�a de la Soberan�a Nacional
                FECHA: 20 de Noviembre
                �MBITO: Nacional
                RIGE: Desde 2010
                DECRETO: -
            ****************************************************************************/
            if (fecha.dia == 20 && fecha.anno >= 2010)
            {
                return true;
            }

            break;
        }
    }

    return false;
}

/****************************************************************************
	PROPOSITO: Retorna true, si la fecha enviada por par�metros coincide con
	unos de los dos meses que tiene feriado el tercer Lunes del mes
	correspondiente.
	COMENTARIOS:
	� Ley 24.445. Art. 4�.� Los feriados nacionales del 20 de junio y del
	17 de Agosto, como fechas conmemorativas del paso a la inmortalidad
	del general Manuel Belgrano y del general Jos� de San Mart�n ser�n cumplidos
	el d�a que corresponda al tercer lunes del mes respectivo.
****************************************************************************/
bool IsMesDeTercerLunesDelMes(FECHA fecha)
{
    if (fecha.mes == JUNIO && fecha.anno >= 1995 && fecha.anno <= 2010)
    {
        return true;
    }
    else if (fecha.mes == AGOSTO && fecha.anno >= 1995)
    {
        return true;
    }

    return false;
}

/****************************************************************************
	PROPOSITO: Retorna true, si la fecha enviada por par�metros coincide con
	el tercer Lunes del mes correspondiente.
	COMENTARIOS:
****************************************************************************/
bool IsTercerLunesDeMes(FECHA fecha)
{
    if (IsMesDeTercerLunesDelMes(fecha))
    {
        FECHA fechaAux = InicializarFecha(1, fecha.mes, fecha.anno);
        short contadorDeLunes = 0;

        while (contadorDeLunes < 3)
        {
            if (CalcularDiaSemana(fechaAux) == LUNES)
            {
                contadorDeLunes++;
            }

            if (contadorDeLunes < 3)
            {
                fechaAux = SumarDiasFecha(fechaAux, 1);
            }
        }

        if (IsFechaIguales(fecha, fechaAux))
        {
            return true;
        }
    }

    return false;
}

/****************************************************************************
	PROPOSITO: Retorna true, si la fecha enviada por par�metros coincide con
	una fecha de feriado puente o trasladable. Si la fecha cae en Martes,
	Jueves o Viernes el feriado ser� traslado.
	COMENTARIOS:
	� Ley 23.555 (Traslado a los d�as lunes. Excepciones). Art. 1�.�
	Los feriados nacionales obligatorios cuyas fechas coincidan con los
	d�as martes y mi�rcoles ser�n trasladados al d�a lunes anterior.
	Los que coincidan con d�as jueves y viernes
	ser�n trasladados al d�a lunes siguiente.
****************************************************************************/

bool IsLunesAnteriorOrPosterior(FECHA fecha)
{
    short diaSemana = CalcularDiaSemana(fecha);

    if (IsFechaFeriadoPuente(fecha))
    {
        if (diaSemana == DOMINGO || diaSemana == LUNES ||
            diaSemana == MIERCOLES || diaSemana == SABADO)
        {
            return true;
        }
    }
    else
    {
        if (diaSemana == LUNES)
        {
            if (IsFechaFeriadoPuente(SumarDiasFecha(fecha, 1)) ||
                IsFechaFeriadoPuente(RestarDiasFecha(fecha, 3)) ||
                IsFechaFeriadoPuente(RestarDiasFecha(fecha, 4)))
            {
                return true;
            }
        }
    }

    return false;
}

/****************************************************************************
	PROPOSITO: Retorna tres valores posibles.
	0: false
	1: true, coincide d�a, mes y a�o.
	2: true, coincide mes y a�o.
	COMENTARIOS:
****************************************************************************/
short IsFeriadoPuenteExcepcion(FECHA fecha)
{
    switch (fecha.anno)
    {
        /*case 1997:
        {
            if (fecha.dia == 10 && fecha.mes == JUNIO)
            {
                return 1;
            }

            if(fecha.mes == JUNIO)
            {
                return 2;
            }
        }*/

        case 1998:
        {
            /*if (fecha.dia == 20 && fecha.mes == JUNIO)
            {
                return 1;
            }

            if (fecha.mes == JUNIO)
            {
                return 2;
            }*/

            if (fecha.dia == 12 && fecha.mes == OCTUBRE)
            {
                return 1;
            }

            if (fecha.mes == OCTUBRE)
            {
                return 2;
            }
        }

        case 2001:
        {
            if (fecha.dia == 2 && fecha.mes == ABRIL)
            {
                return 1;
            }

            if (fecha.mes == ABRIL)
            {
                return 2;
            }

            if (fecha.dia == 8 && fecha.mes == OCTUBRE)
            {
                return 1;
            }

            if (fecha.mes == OCTUBRE)
            {
                return 2;
            }

            break;
        }
        case 2002:
        {
            if (fecha.dia == 1 && fecha.mes == ABRIL)
            {
                return 1;
            }

            if (fecha.mes == ABRIL)
            {
                return 2;
            }

            if (fecha.dia == 14 && fecha.mes == OCTUBRE)
            {
                return 1;
            }

            if (fecha.mes == OCTUBRE)
            {
                return 2;
            }

            break;
        }
        case 2003:
        {
            if (fecha.dia == 31 && fecha.mes == MARZO)
            {
                return 1;
            }

            if (fecha.mes == MARZO)
            {
                return 2;
            }

            if (fecha.dia == 13 && fecha.mes == OCTUBRE)
            {
                return 1;
            }

            if (fecha.mes == OCTUBRE)
            {
                return 2;
            }

            break;
        }
        case 2004:
        {
            if (fecha.dia == 5 && fecha.mes == ABRIL)
            {
                return 1;
            }

            if (fecha.mes == ABRIL)
            {
                return 2;
            }

            break;
        }
        case 2005:
        {
            if (fecha.dia == 2 && fecha.mes == ABRIL)
            {
                return 1;
            }

            if (fecha.mes == ABRIL)
            {
                return 2;
            }

            if (fecha.dia == 10 && fecha.mes == OCTUBRE)
            {
                return 1;
            }

            if (fecha.mes == OCTUBRE)
            {
                return 2;
            }

            break;
        }
        case 2008:
        {
            if (fecha.dia == 13 && fecha.mes == OCTUBRE)
            {
                return 1;
            }

            if (fecha.mes == OCTUBRE)
            {
                return 2;
            }

            break;
        }
        case 2010:
        {
            if (fecha.dia == 22 && fecha.mes == NOVIEMBRE)
            {
                return 1;
            }

            if (fecha.mes == NOVIEMBRE)
            {
                return 2;
            }

            break;
        }
        case 2011:
        {
            if (fecha.dia == 22 && fecha.mes == AGOSTO)
            {
                return 1;
            }

            if (fecha.mes == AGOSTO)
            {
                return 2;
            }

            if (fecha.dia == 10 && fecha.mes == OCTUBRE)
            {
                return 1;
            }

            if (fecha.mes == OCTUBRE)
            {
                return 2;
            }

            if (fecha.dia == 28 && fecha.mes == NOVIEMBRE)
            {
                return 1;
            }

            if (fecha.mes == NOVIEMBRE)
            {
                return 2;
            }

            break;
        }
        case 2012:
        {
            if (fecha.dia == 8 && fecha.mes == OCTUBRE)
            {
                return 1;
            }

            if (fecha.mes == OCTUBRE)
            {
                return 2;
            }

            if (fecha.dia == 26 && fecha.mes == NOVIEMBRE)
            {
                return 1;
            }

            if (fecha.mes == NOVIEMBRE)
            {
                return 2;
            }
        }
        case 2013:
        {
            if (fecha.dia == 14 && fecha.mes == OCTUBRE)
            {
                return 1;
            }

            if (fecha.mes == OCTUBRE)
            {
                return 2;
            }

            if (fecha.dia == 25 && fecha.mes == NOVIEMBRE)
            {
                return 1;
            }

            if (fecha.mes == NOVIEMBRE)
            {
                return 2;
            }
        }
        case 2014:
        {
            if (fecha.dia == 13 && fecha.mes == OCTUBRE)
            {
                return 1;
            }

            if (fecha.mes == OCTUBRE)
            {
                return 2;
            }
        }
        case 2016:
        {
            if (fecha.dia == 10 && fecha.mes == OCTUBRE)
            {
                return 1;
            }

            if (fecha.mes == OCTUBRE)
            {
                return 2;
            }

            if (fecha.dia == 28 && fecha.mes == NOVIEMBRE)
            {
                return 1;
            }

            if (fecha.mes == NOVIEMBRE)
            {
                return 2;
            }
        }
        case 2019:
        {
            if (fecha.dia == 17 && fecha.mes == JUNIO)
            {
                return 1;
            }

            if (fecha.mes == JUNIO)
            {
                return 2;
            }

            if (fecha.dia == 18 && fecha.mes == NOVIEMBRE)
            {
                return 1;
            }

            if (fecha.mes == NOVIEMBRE)
            {
                return 2;
            }
        }

        case 2020:
        {
            if (fecha.dia == 15 && fecha.mes == JUNIO)
            {
                return 1;
            }

            if (fecha.mes == JUNIO)
            {
                return 2;
            }
        }
    }

    return 0;
}

/****************************************************************************
	PROPOSITO: Retorna true, si la fecha enviada por par�metros coincide con
	un feriado puente.
	COMENTARIOS:
****************************************************************************/
bool IsFeriadoPuente(FECHA fecha)
{
    switch(IsFeriadoPuenteExcepcion(fecha))
    {
        case 0:
        {
            if (IsTercerLunesDeMes(fecha) || IsLunesAnteriorOrPosterior(fecha))
            {
                return true;
            }

            break;
        }

        case 1: return true; break;

        case 2: return false; break;
    }

    return false;
}

/****************************************************************************
	PROPOSITO: Retorna true, si la fecha enviada por par�metros coincide con
	alguno de los 4 tipos de feriados.
	COMENTARIOS:
****************************************************************************/
bool IsFeriado(short dia, short mes, short anno)
{
    FECHA fecha = InicializarFecha(dia, mes, anno);

    if (IsFeriadoFijo(fecha) || IsFeriadoUnico(fecha) || IsFeriadoCatolico(fecha) || IsFeriadoPuente(fecha) )
    {
        return true;
    }

    return false;
}
