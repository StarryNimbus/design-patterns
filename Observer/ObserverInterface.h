//=============================================================================
// Copyright (c) 2024, AKO, All Rights Reserved
//
//! \brief      Observer Interface
//!
//! \date       January 2024
//!
//! \author     Alvin Ko
//!
//=============================================================================
#ifndef OBSERVER_OBSERVERINTERFACE
#define OBSERVER_OBSERVERINTERFACE

class ObserverInterface {
public:
  //   virtual ~ObserverInterface() = default;

  virtual void Receive() = 0;
};

#endif
