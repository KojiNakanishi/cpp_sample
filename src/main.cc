#include "sim/Application.h"
#include "MyController.h"

int main (int argc, char **argv)
{
  MyController myController;
  sim::Application app(&myController);
  app.Loop(argc, argv);
}
