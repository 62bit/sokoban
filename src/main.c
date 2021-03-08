#include "graphics.h"
#include "matrix.h"
#include "vector.h"
#include "winin.h"

#include <math.h>
#include <stdio.h>

#define WINDOW_WIDTH 600
#define WINDOW_HEIGHT 600

#include "imageloader.h"

int main(int argc, char *argv[])
{
    Window *win = create_window("Sokoban", WINDOW_WIDTH, WINDOW_HEIGHT, 3, 0);
    renderer_context *context = init_renderer(win);

    vec3 position = {300.0f, 300.0f, 0.0f};

    vec4 color = {1.0f, 0.0f, 0.0f, 1.0f};

    char *data = load_png("/home/eax/Desktop/test/PNG/Character2.png");

    int bb = 45;
    exit(0);

    while (!glfwWindowShouldClose(win->handle))
    {
        glClear(GL_COLOR_BUFFER_BIT);
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

        position = vec3_create(300.0f, 300.0f, 0.0f);
        draw_quad(context, &position, 70.0f);

        position = vec3_create(200, 200, 0.0f);
        draw_colored_quad(context, &position, &color, 120.0f);

        glfwSwapBuffers(win->handle);
        glfwPollEvents();
    }

    destroy_renderer(context);
    destroy_window(win);
    return 0;
}
