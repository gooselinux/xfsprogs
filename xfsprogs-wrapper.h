/* This file is here to prevent a file conflict on multiarch systems. A
 * conflict will occur because platform_defs.h has arch-specific definitions.
 *
 * DO NOT INCLUDE THE NEW FILE DIRECTLY -- ALWAYS INCLUDE THIS ONE INSTEAD. */

#if defined(__i386__)
#include "platform_defs-i386.h"
#elif defined(__x86_64__)
#include "platform_defs-x86_64.h"
#elif defined(__powerpc64__)
#include "platform_defs-ppc64.h"
#elif defined(__powerpc__)
#include "platform_defs-ppc.h"
#elif defined(__s390x__)
#include "platform_defs-s390x.h"
#elif defined(__s390__)
#include "platform_defs-s390.h"
#elif defined(__sparc__) && defined(__arch64__)
#include "platform_defs-sparc64.h"
#elif defined(__sparc__)
#include "platform_defs-sparc.h"
#else
#error "This xfsprogs-devel package does not work your architecture?"
#endif
