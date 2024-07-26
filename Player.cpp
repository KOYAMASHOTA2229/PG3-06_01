#include "Player.h"

Player::Player()
{
}

void Player::Init()
{
}

void Player::Update()
{
}

void Player::Draw()
{
	Novice::DrawBox((int)pos_.x, (int)pos_.y, 30, 30, 0.0f, WHITE, kFillModeSolid);
}

void Player::MoveRight(){
	this->pos_.x += this->speed_;
}

void Player::MoveLeft(){
	this->pos_.x -= this->speed_;
}
