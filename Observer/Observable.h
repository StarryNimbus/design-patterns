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
#ifndef OBSERVER_OBSERVERABLE
#define OBSERVER_OBSERVERABLE

#include </home/alvin/Documents/design-patterns/Observer/ObservableInterface.h>
#include </home/alvin/Documents/design-patterns/Observer/Observer.h>
#include </home/alvin/Documents/design-patterns/Observer/ObserverInterface.h>
#include <vector>

class Observable : public ObservableInterface {
public:
  Observable() = default;
  ~Observable() = default;

  void AttachObserver(ObserverInterface *observer) override {
    observers.push_back(observer);
  }

  void Notify() override {
    for (const auto &i : observers) {
      i->Receive();
    }
  }

private:
  std::vector<ObserverInterface *> observers;
};

#endif