#ifndef CALENDARIO_H_INCLUDED
#define CALENDARIO_H_INCLUDED

#include <conio.h>
#include <stdbool.h>
#include <stdio.h>
#include <time.h>

#include "fecha.h"
#include "feriados.h"
#include "gotoxy.h"
#include "zeller.h"

void ImprimirMes(short matriz[6][7], short mes, short anno, COORD coord);
COORD InicializarCoord(short X, short Y);
COORD ObtenerCoordenadas(short mes);
void RellenarMatrizDeMes(short matriz[6][7], short diaSemana);
void ImprimirDias();
void ImprimirDiasMeses();
void ImprimirNombreDeMeses();
void ImprimirNumeroDeAnno(short anno);
void ImprimirMeses(short anno);
short RetornarAnnoActual();
void ImprimirAnnoCompleto(short anno);
void CargarCalendario();

enum COLOR
{
    FUENTE = 15,
    FERIADO = 12
};

#endif // CALENDARIO_H_INCLUDED
