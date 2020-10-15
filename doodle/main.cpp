// Name       : TODO
// Assignment : TODO
// Course     : TODO
// Term & Year: TODO

#include "AmmoRound.h"
#include "Particle.h"
#include <doodle/doodle.hpp>
#include <vector>
#include "AmmoRound.h"

using namespace doodle;

Particle               particle;
AmmoRound              bullet{AmmoRoundType::Pistol};
std::vector<AmmoRound> bullets;



class lifetime
{
private:
    int life{30};
    
public:
    Particle particle;
    bool     IsParticleDead = false;

};

void delta() { 
    DeltaTime

}

int main(void)
{
    create_window("Particle Bullets");
    set_rectangle_mode(RectMode::Center);

    particle.position     = vec2{-Width / 2.0, 0.0};
    particle.velocity     = vec2{500, 0};
    particle.acceleration = vec2{0, -99.8};
    particle.SetDamping(0.8);

    while (!is_window_closed())
    {
        update_window();
        clear_background(220);
        
        draw_ellipse(particle.position.x, particle.position.y, 64);
        particle.Update(doodle::DeltaTime);

        bullet.Draw();
        bullet.Update(doodle::DeltaTime);

        for (const auto& b : bullets)
            b.Draw();
        for (auto& b : bullets)
            b.Update(doodle::DeltaTime);
    }
    return 0;
}

void on_mouse_moved([[maybe_unused]] int mouse_x, [[maybe_unused]] int mouse_y) {}

void on_key_released(KeyboardButtons button)
{
    if (button == KeyboardButtons::Escape)
        close_window();

    if (button == KeyboardButtons::_1)
    {
        bullets.push_back(AmmoRound{AmmoRoundType::Pistol});
    }
    else if (button == KeyboardButtons::_2)
    {
        bullets.push_back(AmmoRound{AmmoRoundType::Artillery});
    }
    else if (button == KeyboardButtons::_3)
    {
        bullets.push_back(AmmoRound{AmmoRoundType::Fireball});
    }
    else if (button == KeyboardButtons::_4)
    {
        bullets.push_back(AmmoRound{AmmoRoundType::Laser});
    }
}
