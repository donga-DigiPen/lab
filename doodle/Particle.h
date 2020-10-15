#pragma once

#include "vec2.h"

class Particle
{
public:
    vec2 position;
    vec2 velocity;
    vec2 acceleration;

private:
    double damping = 0.99;

public:
    double GetDamping() const;
    void   SetDamping(double new_damping_value);


    void Update(double delta_time);
};
