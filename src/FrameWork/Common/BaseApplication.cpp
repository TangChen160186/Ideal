#include "BaseApplication.hpp"
#include "Interface/Interface.hpp"
#include "Interface/IRuntimeModule.hpp"
namespace IDEAL {
// each application runtimeModul implements the interface
int BaseApplication::Init() {
m_isQuit = false;
  return 0;
}
void BaseApplication::Finalize() {}
void BaseApplication::Tick() {}
bool BaseApplication::IsQuit() { return m_isQuit; }
}