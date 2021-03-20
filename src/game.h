#ifndef GAME_H
#define GAME_H

#include "graphics.h"

typedef struct
{
    uint32_t width;
    uint32_t height;
    uint32_t *grid_data;
} Grid;

Grid create_grid();
void render_level(renderer_context *context, const Grid *grid);

#endif
