#ifndef __FBGL_SHAPES

#include "fbio.h"

typedef struct point2d {
    int x;
    int y;
} Point2D;

void fbgl_fillrect( const struct framebuffer *, const unsigned int, const unsigned int, const unsigned int, const unsigned int, const unsigned int );
void fbgl_drawtri( const struct framebuffer *, const Point2D *, const Point2D *, const Point2D *, const unsigned int * );
void fbgl_drawcir( const struct framebuffer *, const Point2D *, const int, const unsigned int );

#define __FBGL_SHAPES

#endif
