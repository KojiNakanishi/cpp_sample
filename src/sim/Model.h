#ifndef _SIM_MODEL_H_
#define _SIM_MODEL_H_

namespace sim {

class Model {
 public:
  virtual float GetSpeed() const = 0;
  virtual float GetSteer() const = 0;

  virtual void SetSpeed(float speed) = 0;
  virtual void SetSteer(float steer) = 0;
};

} // namespace sim

#endif // _SIM_MODEL_H_
