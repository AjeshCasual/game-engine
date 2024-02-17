#include "../include/raylib.h"
#include "../include/rlgl.h"
#include "../include/box2d.h"
#include <vector>

int main(void){
  InitWindow(800,450, "Armai");
  SetTargetFPS(60);
  while (!WindowShouldClose()){
    BeginDrawing();
      ClearBackground(RAYWHITE);
      DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
    EndDrawing();
  }
  CloseWindow();
  return 0;
}
