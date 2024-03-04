#include "../include/raylib.h"
#include "../include/rlgl.h"
#include "../include/box2d.h"
#include <vector>
int main()
{
	const int screenWidth = 800;
	const int screenHeight = 450;
	InitWindow(screenWidth, screenHeight, "Gen");
	SetTargetFPS(60);
	while(!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(BLANK);
		EndDrawing();
	}
	CloseWindow();
}

