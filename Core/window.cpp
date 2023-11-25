#include "window.h"
#include "raylib.h"


void Window::update() {
    SetTargetFPS(targetFPS);
    InitWindow(width, height, title);

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("NebulaPax", 500, 500, 200, LIGHTGRAY);

        EndDrawing();
    }
    CloseWindow();
}