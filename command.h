#include <Player.h>
class Player;
#pragma once
class command{

public:
	virtual ~command();
	virtual void Exec(Player& player) = 0;

};

class MoveRightCommand :public command {
public:
	void Exec(Player& player)override;
};

class MoveLeftCommand :public command {
public:
	void Exec(Player& player)override;
};

