//=============================================================================
// Copyright (c) 2024, AKO, All Rights Reserved
//
//! \brief      Observable Interface
//!             This class is responsible for notifying the observer class when
//!             something happens
//!
//! \date       January 2024
//!
//! \author     Alvin Ko
//!
//=============================================================================
#ifndef OBSERVER_OBSERVABLEINTERFACE
#define OBSERVER_OBSERVABLEINTERFACE

#include </home/alvin/Documents/design-patterns/Observer/ObserverInterface.h>

class ObservableInterface {
public:
  //   virtual ~ObservableInterface() = default;

  virtual void AttachObserver(ObserverInterface *observer) = 0;
  virtual void Notify() = 0;
};

#endif
