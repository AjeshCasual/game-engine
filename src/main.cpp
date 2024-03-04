#include "../include/raylib.h"
#include "../include/rlgl.h"
#include "../include/box2d.h"
#include <vector>

int main()
{
	const int screenWidth = 800;
	const int screenHeight = 450;

	SetConfigFlags(FLAG_WINDOW_TRANSPARENT);
	InitWindow(screenWidth, screenHeight, "Transparent");
	SetWindowPosition(GetMonitorWidth(0) / 2 - screenWidth / 2, GetMonitorHeight(0) / 2 - screenHeight / 2);
	SetWindowState(FLAG_WINDOW_UNDECORATED);

	RenderTexture2D target = LoadRenderTexture(screenWidth, screenHeight);

	SetTargetFPS(60);

	while(!WindowShouldClose())
	{
		BeginTextureMode(target);
		
		ClearBackground(BLANK);
		DrawRectangle(50, 50, 200, 100, {255, 0, 0, 192});
		EndTextureMode();


		BeginDrawing();
		ClearBackground(BLANK);
		DrawTexturePro(target.texture, { 0.0f, 0.0f, 800.0f, 450.0f }, { 0.0f, 0.0f, 800.0f, 450.0f },
			{ 0.f, 0.f }, 0.0f, WHITE);
		EndDrawing();
	}

	UnloadRenderTexture(target);
	CloseWindow();
}

