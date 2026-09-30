// Scopes the CTrealla SwiftPM target's public module interface to exactly
// the embedding API - not every header under src/, which includes plenty
// that were never meant to be public (internal.h, the vendored imath/sre
// sources, isocline, ...). See include/module.modulemap.
#include "../src/trealla.h"
