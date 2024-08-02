#pragma once
#include <Vector3.h>
#include<Novice.h>
class Player
{
private:
	Vector3 pos_{ 100,100 };
	float speed_ = 20;
public:
	Player();

	void Init();
	void Update();
	void Draw();

	//メンバ関数
	void MoveRight();
	void MoveLeft();
};

