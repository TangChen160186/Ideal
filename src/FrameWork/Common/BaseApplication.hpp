#pragma once

#include "../Interface/IApplication.hpp"
#include "../Interface/IRuntimeModule.hpp"
#include "../Interface/Interface.hpp"
namespace IDEAL {
// each application runtimeModul implements the interface
Interface BaseApplication : implements IApplication {
public:
  virtual int Init();
  virtual void Finalize();
  virtual void Tick();
  virtual bool IsQuit();
};
} // namespace IDEAL