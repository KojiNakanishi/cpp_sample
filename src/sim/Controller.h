#ifndef _SIM_CONTROLLER_H_
#define _SIM_CONTROLLER_H_

#include "Model.h"
#include <memory>

namespace sim {

using ModelPtr = std::unique_ptr<Model>;

class Controller {
 public:
  virtual void Start(ModelPtr& model) = 0;
  virtual void Command(ModelPtr& model, int cmd) = 0;
  virtual void Loop(ModelPtr& model, int pause) = 0;
};

} // namespace sim

#endif // _SIM_CONTROLLER_H_
