#ifndef FERIADOS_H_INCLUDED
#define FERIADOS_H_INCLUDED

#include <stdbool.h>

#include "butcher.h"
#include "fecha.h"
#include "zeller.h"

bool IsFeriadoFijo(FECHA fecha);
bool IsFeriadoUnico(FECHA fecha);

bool IsFeriadoLunesCarnaval(FECHA fecha);
bool IsFeriadoMartesCarnaval(FECHA fecha);
bool IsFeriadoJuevesSanto(FECHA fecha);
bool IsFeriadoViernesSanto(FECHA fecha);
bool IsFeriadoCatolico(FECHA fecha);

bool IsFechaFeriadoPuente(FECHA fecha);
bool IsMesDeTercerLunesDelMes(FECHA fecha);
bool IsTercerLunesDeMes(FECHA fecha);
bool IsLunesAnteriorOrPosterior(FECHA fecha);
bool IsFeriadoPuente(FECHA fecha);

bool IsFeriado(short dia, short mes, short anno);

#endif // FERIADOS_H_INCLUDED
