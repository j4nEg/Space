#pragma once
#include "raylib.h"
#include "raymathext.h"

class KinematicBody
{
public:
	std::string name;
	Vector2 position;
	float rotation;
	float scale;
	Texture2D texture;
	float radius;

	KinematicBody() {}

	KinematicBody(std::string name, Texture2D texture, float radius, Vector2 position, float rotation = 0, float scale = 1);

	virtual void update(float delta){}

	virtual void draw(){}

	void drawDebug();
};

