#pragma once
#include "battle_game/core/particle.h"
#include "glm/glm.hpp"
namespace battle_game::particle {
class Halo : public Particle {
 public:
  Halo(GameCore *game_core,
       uint32_t id,
       glm::vec2 position,
       float rotation,
       glm::vec2 v,
       float size = 1.0f,
       glm::vec4 color = glm::vec4{0.0f, 0.0f, 1.0f, 1.0f},
       float decay_scale = 1.0f);
  void Render() override;
  void Update() override;

 private:
  glm::vec2 v_{};
  float strength_{1.0f};
  float size_{};
  float decay_scale_{};
  glm::vec4 color_{};
};
}  // namespace battle_game::particle
