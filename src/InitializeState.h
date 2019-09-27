#ifndef _MY_INITIALIZESTATE_H_
#define _MY_INITIALIZESTATE_H_

#include "State.h"

class InitializeState : public State {
public:
  InitializeState();
  
  virtual void Enter() override;
  virtual void Leave() override;
  virtual void Execute(int event) override;
  virtual StatePtr GetNextState() const override;
  
private:
  int _count;
};

#endif 
