#include "Particle.h"


#include <algorithm>
#include <cmath>

double Particle::GetDamping() const { return damping; }

void Particle::SetDamping(double new_damping_value)
{
    new_damping_value = std::abs(new_damping_value);
    new_damping_value = std::clamp(new_damping_value, 0.0, 1.0);
    damping           = new_damping_value;
}

void Particle::Update(double delta_time)
{
    position.AddTo(Multiply(velocity, delta_time));
    velocity.AddTo(Multiply(acceleration, delta_time));

    // d^(dt)
    velocity.MultiplyBy(std::pow(damping, delta_time));
}
