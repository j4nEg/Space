#pragma once
#include "KinematicBody.h"
class Player :
    public KinematicBody
{
public:
    Player(std::string name, Texture2D texture, float radius, Vector2 position, float rotation = 0, float scale = 1);

    void update(float delta);

    void draw();
};

