#ifndef _MY_IDLESTATE_H_
#define _MY_IDLESTATE_H_

#include "State.h"

class IdleState : public State{
public:
  IdleState();
  
  virtual void Enter() override;
  virtual void Leave() override;
  virtual void Execute(int event) override;
  virtual StatePtr GetNextState() const override;
};

#endif 
