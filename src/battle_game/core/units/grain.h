#pragma once
#include "battle_game/core/unit.h"

namespace battle_game::unit {
class Grain : public Unit {
 public:
  Grain(GameCore *game_core, uint32_t id, uint32_t player_id);
  void Render() override;
  void Update() override;
  [[nodiscard]] bool IsHit(glm::vec2 position) const override;
  [[nodiscard]] float GetSpeedScale() const override;
 protected:
  void GrainMove(float move_speed, float rotate_angular_speed);
  void TurretRotate();
  void Fire();
  void Fix();//to fix the tank: increase health by 10%

  [[nodiscard]] const char *UnitName() const override;
  [[nodiscard]] const char *Author() const override;

  float turret_rotation_{0.0f};
  uint32_t fire_count_down_{0};
  uint32_t mine_count_down_{0};
};
}  // namespace battle_game::unit
