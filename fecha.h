#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

#include <stdbool.h>

#define ANNO_PISO 1583
#define ANNO_TECHO 9999

typedef struct
{
    short dia;
    short mes;
    short anno;
}FECHA;

FECHA InicializarFecha(short dia, short mes, short anno);
bool IsAnnoBisiesto(short anno);
short RetornarDiaLimiteMes(short mes, short anno);
bool IsFechaIguales(FECHA fecha1, FECHA fecha2);
bool IsFechaPisoLimite(FECHA fecha);
bool IsFechaTechoLimite(FECHA fecha);
bool IsFechaValida(FECHA fecha);
FECHA SumarDiasFecha(FECHA fecha, short diasSumados);
FECHA RestarDiasFecha(FECHA fecha, short diasRestados);

enum MESES
{
    ENERO = 1,
    FEBRERO,
    MARZO,
    ABRIL,
    MAYO,
    JUNIO,
    JULIO,
    AGOSTO,
    SEPTIEMBRE,
    OCTUBRE,
    NOVIEMBRE,
    DICIEMBRE,
};

enum DIAS
{
    DOMINGO = 1,
    LUNES,
    MARTES,
    MIERCOLES,
    JUEVES,
    VIERNES,
    SABADO,
};

#endif // FECHA_H_INCLUDED
