#ifndef _MY_STATE_H_
#define _MY_STATE_H_
#include <memory>

class State;

using StatePtr = std::shared_ptr<State>;

class State {
public:
  virtual ~State() = default;
  
  virtual void Enter() = 0;
  virtual void Leave() = 0;
  virtual void Execute(int event) = 0;
  virtual StatePtr GetNextState() const = 0;
};

#endif // _MY_STATE_H_
