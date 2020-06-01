
#include "calendario.h"

/****************************************************************************
	PROPOSITO: Recibe un mes a imprimir, obtiene sus coordenas e imprime
	el mes correspondiestes con sus respectivas variaciones.
	COMENTARIOS:
****************************************************************************/

void ImprimirMes(short matriz[6][7], short mes, short anno, COORD coord)
{
    for (short i = 0; i < 6; i++)
    {
        Gotoxy(coord.X, coord.Y);
        for (short j = 0; j < 7; j++)
        {
           /// Si la pos actual es un cero, significa que el mes todavia no comienza
           /// en el día actual y se debera rellenar con un 3 espacios.
           if (matriz[i][j] == 0)
           {
               printf("   ");
           }
           else
           {
               /// Si es un día de un solo digito, se mostrara con 2 espacios.
               if (matriz[i][j] >= 1 && matriz[i][j] <= 9)
               {
                   /// Si es domingo, se mostrara en ROJO.
                   if(j == 0)
                   {
                       Color(FERIADO);
                       printf(" %i ", matriz[i][j]);
                       Color(FUENTE);
                   }
                   /// Si es feriado, se mostrara en ROJO.
                   else if (IsFeriado(matriz[i][j] , mes, anno))
                   {
                       Color(FERIADO);
                       printf(" %i ", matriz[i][j]);
                       Color(FUENTE);
                   }
                   /// Día común, se mostrara en BLANCO.
                   else
                   {
                       printf(" %i ", matriz[i][j]);
                   }
               }
               /// Si es un día de un 2 digitos, se mostrara con un espacio.
               else if (matriz[i][j] >= 10 && matriz[i][j] <= RetornarDiaLimiteMes(mes, anno))
               {
                   /// Si es domingo, se mostrara en ROJO.
                   if (j == 0)
                   {
                       Color(FERIADO);
                       printf(" %i", matriz[i][j]);
                       Color(FUENTE);
                   }
                   /// Si es feriado, se mostrara en ROJO.
                   else if (IsFeriado(matriz[i][j], mes, anno))
                   {
                       Color(FERIADO);
                       printf(" %i", matriz[i][j]);
                       Color(FUENTE);
                   }
                   /// Día común, se mostrara en BLANCO.
                   else
                   {
                       printf(" %i", matriz[i][j]);
                   }

               }
               /// Limpiado de pantalla inteligente.
               else
               {
                   /// Si el mes actual supera el día limite, entonces, deberá imprimir un
                   /// espacio para limpiar las fechas, que quedaron de otros años.
                   printf("   ");
               }
           }
        }
        coord.Y++;
        printf("\n");
    }
}

/****************************************************************************
	PROPOSITO: Constructor de un COORD.
	COMENTARIOS:
****************************************************************************/

COORD InicializarCoord(short X, short Y)
{
    COORD coord;

    coord.X = X;
    coord.Y = Y;

    return coord;
}

/****************************************************************************
	PROPOSITO: Obtiene las coordenas x e y, de un determinado mes, las cual
	utilizara, en otra función para la impresión del mes por pantalla.
	COMENTARIOS:
****************************************************************************/

COORD ObtenerCoordenadas(short mes)
{
    COORD coord;

    switch (mes)
    {
        case ENERO:
        {
            coord = InicializarCoord(0, 7);
            break;
        }
        case FEBRERO:
        {
            coord = InicializarCoord(22, 7);
            break;
        }
        case MARZO:
        {
            coord = InicializarCoord(44, 7);
            break;
        }
        case ABRIL:
        {
            coord = InicializarCoord(66, 7);
            break;
        }
        case MAYO:
        {
            coord = InicializarCoord(0, 18);
            break;
        }
        case JUNIO:
        {
            coord = InicializarCoord(22, 18);
            break;
        }
        case JULIO:
        {
            coord = InicializarCoord(44, 18);
            break;
        }
        case AGOSTO:
        {
            coord = InicializarCoord(66, 18);
            break;
        }
        case SEPTIEMBRE:
        {
            coord = InicializarCoord(0, 29);
            break;
        }
        case OCTUBRE:
        {
            coord = InicializarCoord(22, 29);
            break;
        }
        case NOVIEMBRE:
        {
            coord = InicializarCoord(44, 29);
            break;
        }
        case DICIEMBRE:
        {
            coord = InicializarCoord(66, 29);
            break;
        }
    }

    return coord;
}

/****************************************************************************
	PROPOSITO: Carga la matriz (mes) llamada por parámetros. Sabiendo en que
	día inicia el mes (diaSemana). Carga con ceros los días inexistentes,
	por ejemplo, Si un mes inicia en Martes, rellenara los días Domingo y
	Lunes con ceros.
	COMENTARIOS:
****************************************************************************/

void RellenarMatrizDeMes(short matriz[6][7], short diaSemana)
{
    short k = 1, l = 1;

    for (short i = 0; i < 6; i++)
    {
        for (short j = 0; j < 7; j++)
        {
            if (k < diaSemana)
            {
                matriz[i][j] = 0;
            }

            else if (k >= diaSemana)
            {
                matriz[i][j] = l;
                l++;
            }

            k++;
        }
    }
}

/****************************************************************************
	PROPOSITO: Imprime un solo cartel de los días de la semana.
	COMENTARIOS:
	- El domingo lo imprime en ROJO.
****************************************************************************/

void ImprimirDias()
{
    char semana[7] = {'D', 'L', 'M', 'M', 'J', 'V', 'S'};

    Color(FERIADO);
    printf(" %c ", semana[0]);
    Color(FUENTE);

    for (short i = 1; i < 7; i++)
    {
        printf(" %c ", semana[i]);
    }
}

/****************************************************************************
	PROPOSITO: Imprime doce carteles de los días de la semana.
	COMENTARIOS:
	- Función dependizada de la librería "gotoxy.h"
****************************************************************************/

void ImprimirDiasMeses()
{
    for (short i = ENERO; i <= DICIEMBRE; i++)
    {
        switch (i)
        {
            case ENERO:
            {
                Gotoxy(0, 5);
                break;
            }
            case FEBRERO:
            {
                Gotoxy(22, 5);
                break;
            }
            case MARZO:
            {
                Gotoxy(44 ,5);
                break;
            }
            case ABRIL:
            {
                Gotoxy(66, 5);
                break;
            }
            case MAYO:
            {
                Gotoxy(0, 16);
                break;
            }
            case JUNIO:
            {
                Gotoxy(22, 16);
                break;
            }
            case JULIO:
            {
                Gotoxy(44, 16);
                break;
            }
            case AGOSTO:
            {
                Gotoxy(66, 16);
                break;
            }
            case SEPTIEMBRE:
            {
                Gotoxy(0, 27);
                break;
            }
            case OCTUBRE:
            {
                Gotoxy(22, 27);
                break;
            }
            case NOVIEMBRE:
            {
                Gotoxy(44, 27);
                break;
            }
            case DICIEMBRE:
            {
                Gotoxy(66, 27);
                break;
            }
        }

        ImprimirDias();
    }
}

/****************************************************************************
	PROPOSITO: Imprime los nombres de los meses, en determinadas posiciones.
	COMENTARIOS:
	- Función dependizada de la librería "gotoxy.h"
****************************************************************************/

void ImprimirNombreDeMeses()
{
    for (short i = ENERO; i <= DICIEMBRE; i++)
    {
        switch (i)
        {
            case ENERO:
            {
                Gotoxy(8, 3);
                printf("Enero");
                break;
            }
            case FEBRERO:
            {
                Gotoxy(29, 3);
                printf("Febrero");
                break;
            }
            case MARZO:
            {
                Gotoxy(52, 3);
                printf("Marzo");
                break;
            }
            case ABRIL:
            {
                Gotoxy(74, 3);
                printf("Abril");
                break;
            }
            case MAYO:
            {
                Gotoxy(8, 14);
                printf("Mayo");
                break;
            }
            case JUNIO:
            {
                Gotoxy(30, 14);
                printf("Junio");
                break;
            }
            case JULIO:
            {
                Gotoxy(52, 14);
                printf("Julio");
                break;
            }
            case AGOSTO:
            {
                Gotoxy(73, 14);
                printf("Agosto");
                break;
            }
            case SEPTIEMBRE:
            {
                Gotoxy(6, 25);
                printf("Septiembre");
                break;
            }
            case OCTUBRE:
            {
                Gotoxy(29, 25);
                printf("Octubre");
                break;
            }
            case NOVIEMBRE:
            {
                Gotoxy(50, 25);
                printf("Noviembre");
                break;
            }
            case DICIEMBRE:
            {
                Gotoxy(72, 25);
                printf("Diciembre");
                break;
            }
        }
    }
}

/****************************************************************************
	PROPOSITO: Imprime el numero del año recibido por parámetros, en
	una determinada posición.
	COMENTARIOS:
	- Función dependizada de la librería "gotoxy.h"
****************************************************************************/

void ImprimirNumeroDeAnno(short anno)
{
    Gotoxy(41, 1);
    printf("%hi", anno);
}

/****************************************************************************
	PROPOSITO: Imprime las 12 matrices, que representarían los 12 meses
	del año.
	COMENTARIOS:
****************************************************************************/

void ImprimirMeses(short anno)
{
    COORD coord;
    short matriz[6][7];

    for (short i = ENERO; i <= DICIEMBRE; i++)
    {
        coord = ObtenerCoordenadas(i);
        RellenarMatrizDeMes(matriz, CalcularDiaSemana(InicializarFecha(1, i, anno)));
        ImprimirMes(matriz, i, anno, coord);
    }
}

/****************************************************************************
	PROPOSITO: Retorna el año actual vigente.
	COMENTARIOS:
****************************************************************************/

short RetornarAnnoActual()
{
    time_t t;
    struct tm * tm;
    t = time(NULL);
    tm = localtime(&t);
    return tm->tm_year + 1900;
}

/****************************************************************************
	PROPOSITO: Imprime un año completo.
	COMENTARIOS:
****************************************************************************/

void ImprimirAnnoCompleto(short anno)
{
    Color(FUENTE);
    ImprimirNombreDeMeses();
    ImprimirDiasMeses();
    ImprimirNumeroDeAnno(anno);
    ImprimirMeses(anno);
}

/****************************************************************************
	PROPOSITO: Función madre del programa, es la que se invoca en el main.c
	COMENTARIOS:
****************************************************************************/

void CargarCalendario()
{
    short anno = RetornarAnnoActual();
    char opcion;

    Color(FUENTE);
    SetConsoleTitle("CALENDARIO GREGORIANO ARGENTINO V3");
    system("mode con: cols=89 lines=36");
    HideCursor(false);

    while (1)
    {
        ImprimirAnnoCompleto(anno);

        opcion = getch();

        if (opcion == 75) /// Flecha izquierda.
        {
            if(anno != ANNO_PISO)
            {
                anno--;
            }
        }
        else if (opcion == 77) /// Flecha Derecha.
        {
           if (anno != ANNO_TECHO)
           {
               anno++;
           }
        }
        else if (opcion == 13) /// ENTER
        {
            short aux;

            do
            {
                system("mode con: cols=89 lines=38");
                ImprimirAnnoCompleto(anno);
                HideCursor(true);
                Gotoxy(0, 36);
                printf("Ingrese un a%co entre (%hi-%hi): ", 164, ANNO_PISO, ANNO_TECHO);
                fflush(stdin);
                scanf("%hi", &aux);
                HideCursor(false);

                if (aux < ANNO_PISO || aux > ANNO_TECHO)
                {
                    ImprimirAnnoCompleto(anno);
                }

            }while (aux < ANNO_PISO || aux > ANNO_TECHO);

            system("mode con: cols=89 lines=36");
            HideCursor(false);
            ImprimirAnnoCompleto(anno);
            anno = aux;
        }
    }
}
