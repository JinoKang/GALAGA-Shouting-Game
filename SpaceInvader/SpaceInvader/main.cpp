#include "Console.h"
#include "Object_Player.h"

char Screen[HEIGHT][WIDTH]; // 스크린 크기 [24][81]

void Draw(PlayerInfo* player); // 객체들의 위치 갱신을 받고 화면에 직접적으로 출력해주는 함수
void Action(PlayerInfo* player);

void main()
{
	cursorNonVisible(); // 커서 안보이게 하기

	PlayerInfo* player = (PlayerInfo*)malloc(sizeof(PlayerInfo));
	player = InitPlayer(player,"@=^=@");
	

	while (1)
	{
		Action(player);
		Draw(player);

		Sleep(50);
	}

	free(player);
}

void Draw(PlayerInfo* player)
{
	for (int i = 0; i < HEIGHT; i++)
	{
		memset(Screen[i], ' ', WIDTH); // Screen[i]번째 행에 ' '을 WIDTH만큼 넣겠다.
		Screen[i][WIDTH - 1] = NULL; // 마지막 칸에는 NULL
	}

	// 객체 좌표 갱신
	DrawPlayer(player);

	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

	for (int i = 0; i < HEIGHT; i++)
	{
		MoveCursor(0, i);
		PrintString(hStdOut, RED, Screen[i]);
		//printf(Screen[i]); // i번째행 출력
	}
}

void Action(PlayerInfo* player)
{

	PlayerAction(player);

}