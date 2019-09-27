#ifndef _MY_CONTEXT_H_
#define _MY_CONTEXT_H_

#include "State.h"

class Context {
public:
  Context();
  
  void Update(int event);
  
private:
  StatePtr _currentState;
};

#endif // _MY_CONTEXT_H_
