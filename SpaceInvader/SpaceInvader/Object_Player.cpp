#include "Object_Player.h"
#include "Console.h"

extern char Screen[HEIGHT][WIDTH];

PlayerInfo* InitPlayer(PlayerInfo* player, char* shape)
{
	strcpy(player->UnitShape, shape);
	player->x = 40;
	player->y = 20;
	player->liveFlag = true;

	return player;
}

void DrawPlayer(PlayerInfo* player)
{
	int x = player->x - P_COUNT / 2; // �׸��� ������ ��ǥ  @=^=@ �� �÷��̾ ������ ^�� ������ ���� �÷��̾��� ��ǥ -2 �� ������������ �׸��� ����.
	int y = player->y;

	if (y < 0 || y >= HEIGHT) return; // �� �Ʒ� ����ó�� ȭ�� ������ ������ ���� X

	if (player->liveFlag == true)
	{
		for (int i = 0; i < P_COUNT; i++)
		{
			if (x >= 0 && x < WIDTH - 2)
				Screen[y][x] = player->UnitShape[i];

			x++;
		}
	}
}

void PlayerAction(PlayerInfo* player)
{
	if (GetAsyncKeyState(VK_RIGHT) && player->x < WIDTH - (3 + P_COUNT / 2))
	{
		player->x++;
	}
	if (GetAsyncKeyState(VK_LEFT) && player->x > 0 + (P_COUNT / 2))
	{
		player->x--;
	}
	if (GetAsyncKeyState(VK_UP) && player->y > 0)
	{
		player->y--;
	}
	if (GetAsyncKeyState(VK_DOWN) && player->y < HEIGHT - 1)
	{
		player->y++;
	}
}
