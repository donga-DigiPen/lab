#pragma once

struct vec2
{
    double x{0};
    double y{0};

    vec2() = default;
    vec2(double x_value, double y_value);
    explicit vec2(double fill_value);

    void AddTo(vec2 b);
    void MultiplyBy(double scale);
};

vec2 Add(vec2 a, vec2 b);
vec2 Multiply(vec2 a, double scale);
