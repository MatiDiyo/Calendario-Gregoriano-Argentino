
#include "gotoxy.h"

/****************************************************************************
	PROPOSITO: Cambia la combinación de color de fondo y frente.
	COMENTARIOS:
****************************************************************************/

void Color(short x)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
}

/****************************************************************************
	PROPOSITO: Cambia las coordenadas del cursor.
	COMENTARIOS:
****************************************************************************/

void Gotoxy(short X, short Y)
{
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = X;
    dwPos.Y = Y;
    SetConsoleCursorPosition(hcon, dwPos);
}

/****************************************************************************
	PROPOSITO: Función para mostrar o esconder el cursor.
	COMENTARIOS:
****************************************************************************/

void HideCursor(bool ver)
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 1;
    info.bVisible = ver;
    SetConsoleCursorInfo(consoleHandle, &info);
}

/****************************************************************************
	PROPOSITO: Devuelve la posicion de X.
	COMENTARIOS:
****************************************************************************/

short WhereX()
{
    CONSOLE_SCREEN_BUFFER_INFO sbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &sbi);
    return sbi.dwCursorPosition.X;
}

/****************************************************************************
	PROPOSITO: Devuelve la posicion de Y.
	COMENTARIOS:
****************************************************************************/

short WhereY()
{
    CONSOLE_SCREEN_BUFFER_INFO sbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &sbi);
    return sbi.dwCursorPosition.Y;
}
