#include "StageScene.h"

void StageScene::Init() {
	inputHandle_ = new InputHandle();

	inputHandle_->AssignMoveLeftCommand2PressKeyD();
	inputHandle_->AssignMoveLeftCommand2PressKeyA();

	player_ = new Player();

}

void StageScene::Update() {
	command_ = inputHandle_->HandleInput();

	if (this->command_) {
		command_->Exec(*player_);
	}

	player_->Update();

}

void StageScene::Draw()
{
	player_->Draw();
}
