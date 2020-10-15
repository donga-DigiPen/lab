#include "vec2.h"

vec2::vec2(double x_value, double y_value) : x{x_value}, y{y_value} {}

vec2::vec2(double fill_value) : vec2(fill_value, fill_value) {}

void vec2::AddTo(vec2 b)
{
    x += b.x;
    this->y += b.y;
}

void vec2::MultiplyBy(double scale)
{
    x *= scale;
    y *= scale;
}

vec2 Add(vec2 a, vec2 b) { return vec2{a.x + b.x, a.y + b.y}; }

vec2 Multiply(vec2 a, double scale) { return vec2{a.x * scale, a.y * scale}; }
