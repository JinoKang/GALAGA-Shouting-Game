#define P_COUNT		5

struct PlayerInfo {
	char UnitShape[P_COUNT + 1];
	int x, y;
	bool liveFlag; // 플레이어가 살았는지 죽었는지 나타 냄
};

void DrawPlayer(PlayerInfo* player); // 플레이어의 위치 갱신
void PlayerAction(PlayerInfo* player);
PlayerInfo* InitPlayer(PlayerInfo* player, char* shape); // 플레이어의 정보 세팅