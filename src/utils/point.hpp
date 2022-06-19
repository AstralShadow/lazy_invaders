#ifndef INCLUDE_POINT_HPP
#define INCLUDE_POINT_HPP

struct SDL_Point
{
        int x;
        int y;
};

struct SDL_FPoint
{
        float x;
        float y;
};

typedef SDL_Point point;
typedef SDL_FPoint fpoint;

#endif // INCLUDE_POINT_HPP
