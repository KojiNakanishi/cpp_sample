#include "MyController.h"

MyController::MyController()
    : _speed(0.0)
    , _steer(0.0) {
}

MyController::~MyController() {}

void MyController::Start(sim::ModelPtr& model) {
  _speed = 0.0;
  _steer = 0.0;
  model->SetSpeed(_speed);
  model->SetSteer(_steer);

  printf ("Press:\t'a' to increase speed.\n"
          "\t'z' to decrease speed.\n"
          "\t',' to steer left.\n"
          "\t'.' to steer right.\n"
          "\t' ' to reset speed and steering.\n");
}

void MyController::Command(sim::ModelPtr& model, int cmd) {
  switch (cmd) {
    case 'a': case 'A':
      _speed += 0.3;
      break;
    case 'z': case 'Z':
      _speed -= 0.3;
      break;
    case ',':
      _steer -= 0.5;
      break;
    case '.':
      _steer += 0.5;
      break;
    case ' ':
      _speed = 0;
      _steer = 0;
      break;
  }
  model->SetSpeed(_speed);
  model->SetSteer(_steer);
}

void MyController::Loop(sim::ModelPtr& model, int pause) {
  sim::Vector3f pos;
  sim::Vector3f rpy;
  model->GetPosition(&pos);
  model->GetRPY(&rpy);
  //printf("pos %f %f %f\n", pos[0], pos[1], pos[2]);
  //printf("rpy %f %f %f\n", rpy[0], rpy[1], rpy[2]);
}
