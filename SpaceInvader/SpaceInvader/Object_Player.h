#define P_COUNT		5

struct PlayerInfo {
	char UnitShape[P_COUNT + 1];
	int x, y;
	bool liveFlag; // �÷��̾ ��Ҵ��� �׾����� ��Ÿ ��
};

void DrawPlayer(PlayerInfo* player); // �÷��̾��� ��ġ ����
void PlayerAction(PlayerInfo* player);
PlayerInfo* InitPlayer(PlayerInfo* player, char* shape); // �÷��̾��� ���� ����