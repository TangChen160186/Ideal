#pragma once
#include "IRuntimeModule.hpp"
#include "Interface.hpp"

namespace IDEAL {
// each application runtimeModul implements the interface
Interface IApplication : implements IRuntimeModule {
public:
  virtual int Init() = 0;
  virtual void Finalize() = 0;
  virtual void Tick() = 0;
  virtual bool IsQuit() = 0;

protected:
  bool m_isQuit;
};
} // namespace IDEAL
