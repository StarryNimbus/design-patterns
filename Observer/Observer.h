//=============================================================================
// Copyright (c) 2024, AKO, All Rights Reserved
//
//! \brief      Observer class implements ObserverInterface
//!             This class receives the updates from Observable
//!
//! \date       January 2024
//!
//! \author     Alvin Ko
//!
//=============================================================================
#ifndef OBSERVER_OBSERVER
#define OBSERVER_OBSERVER

#include </home/alvin/Documents/design-patterns/Observer/ObserverInterface.h>
#include <iostream>
#include <string>

class Observer : public ObserverInterface {
public:
  Observer() = default;
  Observer(const std::string &name) { this->name = name; }
  ~Observer() = default;

  void Receive() override {
    std::cout << name << " received update"
              << "\n";
  }

private:
  std::string name;
};

#endif
