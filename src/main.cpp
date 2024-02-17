#include "../include/raylib.h"
#include "../include/rlgl.h"
#include "../include/box2d.h"
#include <vector>

int main(void){
  InitWindow(800,450, "Armai");
  SetTargetFPS(60);
  while (!WindowShouldClose()){
    BeginDrawing();
      ClearBackground(BLACK);
      DrawText("Congrats! You created your first window!", 190, 200, 20, ORANGE);
    EndDrawing();
  }
  CloseWindow();
  return 0;
}
