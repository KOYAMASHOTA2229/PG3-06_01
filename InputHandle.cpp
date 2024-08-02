#include "InputHandle.h"
#include <Novice.h>

void InputHandle::AssignMoveLeftCommand2PressKeyA() {
	command* command = new MoveLeftCommand();
	this->pressKeyA_ = command;
}

void InputHandle::AssignMoveLeftCommand2PressKeyD() {
	command* command = new MoveRightCommand();
	this->pressKeyD_ = command;
}

command* InputHandle::HandleInput() {
	if (Novice::CheckHitKey(DIK_D)) {
		return pressKeyD_;
	}
		if (Novice::CheckHitKey(DIK_A)) {
			return pressKeyA_;
		}
	return nullptr;
}
