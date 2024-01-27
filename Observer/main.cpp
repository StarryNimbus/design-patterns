//=============================================================================
// Copyright (c) 2024, AKO, All Rights Reserved
//
//! \brief      Observer example
//!
//! \date       January 2024
//!
//! \author     Alvin Ko
//!
//=============================================================================

#include </home/alvin/Documents/design-patterns/Observer/Observable.h>
#include </home/alvin/Documents/design-patterns/Observer/Observer.h>
#include </home/alvin/Documents/design-patterns/lib/stdc++.h>

using namespace std;

namespace {
string name1 = "bar1";
string name2 = "bar2";
string name3 = "bar3";
} // namespace

int main() {
  // class that sends out the update
  Observable *foo = new Observable();

  // classes that receives the updates
  ObserverInterface *bar1 = new Observer(name1);
  ObserverInterface *bar2 = new Observer(name2);
  ObserverInterface *bar3 = new Observer(name3);

  foo->AttachObserver(bar1);
  foo->AttachObserver(bar2);
  foo->AttachObserver(bar3);

  for (int i = 0; i < 5; i++) {
    if (i % 2 == 0) {
      foo->Notify();
      cout << "\n";
    }
  }

  return 0;
}