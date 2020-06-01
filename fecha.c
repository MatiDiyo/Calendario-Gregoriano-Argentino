
#include "fecha.h"

/****************************************************************************
	PROPOSITO: Inicializa una struct de tipo FECHA.
	COMENTARIOS:
****************************************************************************/

FECHA InicializarFecha(short dia, short mes, short anno)
{
    FECHA fecha;

    fecha.dia = dia;
    fecha.mes = mes;
    fecha.anno = anno;

    return fecha;
}

/****************************************************************************
	PROPOSITO: Retorna true, si el año enviado por parámetros es bisiesto.
	COMENTARIOS:
****************************************************************************/

bool IsAnnoBisiesto(short anno)
{
    if ( anno % 4 != 0 || (anno % 4 == 0 && anno % 100 == 0 && anno % 400 != 0) )
    {
        return false;
    }

    return true;
}

/****************************************************************************
	PROPOSITO: Retorna el día límite de cada mes.
	COMENTARIOS:
****************************************************************************/

short RetornarDiaLimiteMes(short mes, short anno)
{
    short diaLimiteMes = 0;

    switch(mes)
    {
        case ENERO:
        {
            diaLimiteMes = 31;
            break;
        }
        case FEBRERO:
        {
            diaLimiteMes = (IsAnnoBisiesto(anno)) ? 29 : 28;
            break;
        }
        case MARZO:
        {
            diaLimiteMes = 31;
            break;
        }
        case ABRIL:
        {
            diaLimiteMes = 30;
            break;
        }
        case MAYO:
        {
            diaLimiteMes = 31;
            break;
        }
        case JUNIO:
        {
            diaLimiteMes = 30;
            break;
        }
        case JULIO:
        {
            diaLimiteMes = 31;
            break;
        }
        case AGOSTO:
        {
            diaLimiteMes = 31;
            break;
        }
        case SEPTIEMBRE:
        {
            diaLimiteMes = 30;
            break;
        }
        case OCTUBRE:
        {
            diaLimiteMes = 31;
            break;
        }
        case NOVIEMBRE:
        {
            diaLimiteMes = 30;
            break;
        }
        case DICIEMBRE:
        {
            diaLimiteMes = 31;
            break;
        }
    }

    return diaLimiteMes;
}

/****************************************************************************
	PROPOSITO: Retorna true, si las fechas son iguales.
	COMENTARIOS:
****************************************************************************/

bool IsFechaIguales(FECHA fecha1, FECHA fecha2)
{
    if ( (fecha1.dia == fecha2.dia) && (fecha1.mes == fecha2.mes) && (fecha1.anno == fecha2.anno) )
    {
        return true;
    }

    return false;
}

/****************************************************************************
	PROPOSITO: Retorna true, si la fecha coincide con 1/1/1583.
	COMENTARIOS:
****************************************************************************/

bool IsFechaPisoLimite(FECHA fecha)
{
    FECHA fechaPisoLimite = InicializarFecha(1, ENERO, ANNO_PISO);

    if (IsFechaIguales(fecha, fechaPisoLimite))
    {
        return true;
    }

    return false;
}

/****************************************************************************
	PROPOSITO: Retorna true, si la fecha coincide con 31/12/9999.
	COMENTARIOS:
****************************************************************************/

bool IsFechaTechoLimite(FECHA fecha)
{
    FECHA fechaTechoLimite = InicializarFecha(31, DICIEMBRE, ANNO_TECHO);

    if (IsFechaIguales(fecha, fechaTechoLimite))
    {
        return true;
    }

    return false;
}

/****************************************************************************
	PROPOSITO: Retorna true, si la fecha esta dentro de los parámetros
	permitidos (no negativa y entre el piso y el techo).
	COMENTARIOS:
****************************************************************************/

bool IsFechaValida(FECHA fecha)
{
    if ( ( fecha.dia >= 1 && fecha.dia <= RetornarDiaLimiteMes(fecha.mes, fecha.anno) ) &&
         ( fecha.mes >= ENERO && fecha.mes <= DICIEMBRE ) &&
         ( fecha.anno >= ANNO_PISO && fecha.anno <= ANNO_TECHO ) )
    {
        return true;
    }

    return false;
}

/****************************************************************************
	PROPOSITO: Recibe una fecha y los días a sumar. Retorna la fecha con los
	días sumados.
	COMENTARIOS:
****************************************************************************/

FECHA SumarDiasFecha(FECHA fecha, short diasSumados)
{
    FECHA fechaFinal = fecha;

    /// Verdadero si, la fecha NO es la fecha techo y que sea una fecha válida.
    if (!IsFechaTechoLimite(fechaFinal) && IsFechaValida(fechaFinal))
    {
        short i = 0;

        while (!IsFechaTechoLimite(fechaFinal) && i < diasSumados)
        {
            fechaFinal.dia++;

            /// Si el dia es mayor que el día límite del mes significa que hay que sumar un mes.
            if (fechaFinal.dia > RetornarDiaLimiteMes(fechaFinal.mes, fechaFinal.anno))
            {
                fechaFinal.dia = 1;
                fechaFinal.mes++;
            }

            /// Si el mes es mayor que Diciembre significa que hay que sumar un año.
            if (fechaFinal.mes > DICIEMBRE)
            {
                fechaFinal.mes = ENERO;
                fechaFinal.anno++;
            }

            i++;
        }
    }

    return fechaFinal;
}

/****************************************************************************
	PROPOSITO: Recibe una fecha y los días a restar. Retorna la fecha con los
	días restados.
	COMENTARIOS:
****************************************************************************/

FECHA RestarDiasFecha(FECHA fecha, short diasRestados)
{
    FECHA fechaFinal = fecha;

    /// Verdadero si, la fecha NO es la fecha techo y que sea una fecha válida.
    if (!IsFechaPisoLimite(fechaFinal) && IsFechaValida(fechaFinal))
    {
        short i = diasRestados;

        while (!IsFechaPisoLimite(fechaFinal) && i > 0)
        {
            fechaFinal.dia--;

            /// Si el dia es menor que el 1° del mes significa que hay que restar un mes.
            if (fechaFinal.dia < 1)
            {
                fechaFinal.mes--;

                /// Si el mes es menor que Enero significa que hay que restar un año.
                if (fechaFinal.mes < ENERO)
                {
                    fechaFinal.mes = DICIEMBRE;
                    fechaFinal.anno--;
                }

                /// Al restar mes hay que asignarle el día límite del mes que le corresponde.
                fechaFinal.dia = RetornarDiaLimiteMes(fechaFinal.mes, fechaFinal.anno);
            }

            i--;
        }
    }

    return fechaFinal;
}
