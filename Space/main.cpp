#include <iostream>
#include "raylib.h"
#include "Player.h"


int main(void)
{
    // Window Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 1280;
    const int screenHeight = 720;
    InitWindow(screenWidth, screenHeight, "Space");
    SetTargetFPS(60); 
    //--------------------------------------------------------------------------------------
    // Initialization
    const Vector2 center = Vector2{ screenWidth / 2, screenHeight / 2 };
    Texture2D player_tex = LoadTexture("assets/player0.png"); // Load texture from file into GPU memory (VRAM)
    Player player = Player("player", player_tex, 50, center);
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        player.draw();
        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

