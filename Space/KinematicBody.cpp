#include "KinematicBody.h"

KinematicBody::KinematicBody(std::string name, Texture2D texture, float radius, Vector2 position, float rotation, float scale)
{
	this->name = name;
	this->texture = texture;
	this->radius = radius;
	this->position = position;
	this->rotation = rotation;
	this->scale = scale;
}

void KinematicBody::drawDebug()
{
	DrawCircleV(this->position, this->radius, RED);
}
