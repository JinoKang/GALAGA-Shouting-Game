#include "Console.h"
#include "Object_Player.h"

char Screen[HEIGHT][WIDTH]; // ��ũ�� ũ�� [24][81]

void Draw(PlayerInfo* player); // ��ü���� ��ġ ������ �ް� ȭ�鿡 ���������� ������ִ� �Լ�
void Action(PlayerInfo* player);

void main()
{
	cursorNonVisible(); // Ŀ�� �Ⱥ��̰� �ϱ�

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
		memset(Screen[i], ' ', WIDTH); // Screen[i]��° �࿡ ' '�� WIDTH��ŭ �ְڴ�.
		Screen[i][WIDTH - 1] = NULL; // ������ ĭ���� NULL
	}

	// ��ü ��ǥ ����
	DrawPlayer(player);

	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

	for (int i = 0; i < HEIGHT; i++)
	{
		MoveCursor(0, i);
		PrintString(hStdOut, RED, Screen[i]);
		//printf(Screen[i]); // i��°�� ���
	}
}

void Action(PlayerInfo* player)
{

	PlayerAction(player);

}