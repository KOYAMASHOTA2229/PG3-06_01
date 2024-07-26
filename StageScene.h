#pragma once
#include "InputHandle.h"
class StageScene
{
private:
	InputHandle* inputHandle_ = nullptr;
	command* command_ = nullptr;
	Player* player_;

public:
	StageScene();

	void Init();
	void Update();
	void Draw();
};

