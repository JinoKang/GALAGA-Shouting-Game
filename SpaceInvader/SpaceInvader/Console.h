#pragma once
#include <Windows.h>
#include <String.h>
#include <stdio.h>
#include <stdlib.h>

#define WIDTH	81 // ��ũ�� ������ (80ĭ +1�� null)
#define HEIGHT	24 // ������ 24��

#define RED			(FOREGROUND_RED | FOREGROUND_INTENSITY) // ������

void cursorNonVisible(); // Ŀ���� ������ �ʰ� �ϴ� �Լ�

void MoveCursor(int x, int y); // Ŀ���� �������ִ� �Լ�

void PrintString(HANDLE hStdOut, WORD Attribute, LPCSTR str); // ���� ��� �Լ�