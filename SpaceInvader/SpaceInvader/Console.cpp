#include "Console.h"

HANDLE hConsole;

void cursorNonVisible()
{
	CONSOLE_CURSOR_INFO csCursor; // 콘솔 커서정보 변수

	csCursor.bVisible = FALSE;
	csCursor.dwSize = 1;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorInfo(hConsole, &csCursor);
}

void MoveCursor(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;

	SetConsoleCursorPosition(hConsole, coord);
}

void PrintString(HANDLE hStdOut, WORD Attribute, LPCSTR str)
{
	SetConsoleTextAttribute(hStdOut, Attribute);
	printf(str);
}