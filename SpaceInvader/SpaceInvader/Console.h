#pragma once
#include <Windows.h>
#include <String.h>
#include <stdio.h>
#include <stdlib.h>

#define WIDTH	81 // 스크린 가로줄 (80칸 +1은 null)
#define HEIGHT	24 // 세로줄 24줄

#define RED			(FOREGROUND_RED | FOREGROUND_INTENSITY) // 빨간색

void cursorNonVisible(); // 커서가 보이지 않게 하는 함수

void MoveCursor(int x, int y); // 커서를 움직여주는 함수

void PrintString(HANDLE hStdOut, WORD Attribute, LPCSTR str); // 색깔 출력 함수