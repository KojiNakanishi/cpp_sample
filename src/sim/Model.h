#ifndef _SIM_MODEL_H_
#define _SIM_MODEL_H_

#include <array>

namespace sim {

using Vector3f = std::array<float, 3>;

class Model {
 public:
  virtual void GetPosition(Vector3f *pos) const = 0;
  virtual void GetRPY(Vector3f *rpy) const = 0;

  virtual float GetSpeed() const = 0;
  virtual float GetSteer() const = 0;

  virtual void SetSpeed(float speed) = 0;
  virtual void SetSteer(float steer) = 0;
};

} // namespace sim

#endif // _SIM_MODEL_H_
