
#include "base/debug/debugger.h"

#include <unistd.h>

namespace base {
namespace debug {
  void BreakDebugger() {
    _exit(1);
  }
}  // namespace debug
}  // namespace base
