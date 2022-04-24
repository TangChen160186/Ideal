#pragma once
#include "Interface.hpp"
namespace IDEAL {
// each runtimeModul implements the interface
Interface IRuntimeModule {
public:
  virtual ~IRuntimeModule() {}
  virtual int Init() = 0;
  virtual void Finalize() = 0;
  virtual void Tick() = 0;
}; 
} // namespace IDEAL
