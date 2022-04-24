#include "Interface/IApplication.hpp"
namespace IDEAL {
extern IApplication * app ;
}
int main(int argc, char **argv) {
  int ret;

  if ((ret = IDEAL::app->Init()) != 0) {

    return ret;
  }

  while (!IDEAL::app->IsQuit()) {
    IDEAL::app->Tick();
  }

  IDEAL::app->Finalize();
}
