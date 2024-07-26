#pragma once
#include <command.h>
class InputHandle{
public:
	command* HandleInput();

	void AssignMoveLeftCommand2PressKeyA();
	void AssignMoveLeftCommand2PressKeyD();

private:
	command* pressKeyD_;
	command* pressKeyA_;
};

