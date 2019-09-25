#ifndef _SIM_APPLICATION_H_
#define _SIM_APPLICATION_H_

#include "Controller.h"

namespace sim {

class Application {
public:
  Application(Controller *controller);
  ~Application();

  void Loop(int argc, char **argv);
};

} // namespace sim

#endif // _CXX_SIMAPPLICATION_H_
