#ifndef _MY_STATEFACTORY_H_
#define _MY_STATEFACTORY_H_

#include "State.h"

class StateFactory {
public:
  enum {
    kInitializeState,
    kIdleState,
    kNumberOfState,
  };
  static StatePtr CreateState(int state);
};

#endif // _MY_STATEFACTORY_H_
