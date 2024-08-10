#include "Player.h"

Player::Player(std::string name, Texture2D texture, float radius, Vector2 position, float rotation, float scale)
{
	this->name = name;
	this->texture = texture;
	this->radius = radius;
	this->position = position;
	this->rotation = rotation;
	this->scale = scale;
}

void Player::update(float delta)
{
}

void Player::draw()
{
	DrawTexturePro(this->texture, 
		Rectangle{0,0,(float)this->texture.width, (float)this->texture.height},
		Rectangle{this->position.x, this->position.y, (float)this->texture.width, (float)this->texture.height},
		Vector2{ (float)this->texture.width/2, (float)this->texture.height/2},
		this->rotation, 
		WHITE);
}
