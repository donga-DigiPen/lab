#pragma once

#include "Particle.h"

enum class AmmoRoundType
{
    Pistol,
    Artillery,
    Fireball,
    Laser
};

class AmmoRound
{
    AmmoRoundType type{AmmoRoundType::Pistol};
    Particle      particle{};

public:
    AmmoRound(AmmoRoundType type);

    void Update(double delta_time);
    void Draw() const;
};
