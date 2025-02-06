# RDK-E common config options 

# common distro features
include rdke-distros.inc

# common repo labels
include rdke-repo-details.inc

# common breakpad suported components
include rdke-breakpad-log.inc

# RDK-E topic simplification branch changes adding the BBMASK Here

# RDK-42398 use sqlite from the OE Layer
BBMASK .= "|${RDKROOT}/rdke/common/meta-oss-reference/recipes-support/sqlite/sqlite3_3.31.1.bb"

# RDK-42417 use nanomsg from the OE Layer
BBMASK .= "|${RDKROOT}/rdke/common/meta-oss-reference/recipes-support/nanomsg/nanomsg_1.0.bb"

# RDK-42418 use msgpack-c from the OE Layer
BBMASK .= "|${RDKROOT}/rdke/common/meta-oss-reference/recipes-support/msgpack/msgpack-c_2.1.1.bb"

# RDK-42421 use libbsd from the OE Layer
BBMASK .= "|${RDKROOT}/rdke/common/meta-oss-reference/recipes-support/libbsd/libbsd_0.8.2.bb"

# RDK-42422 use jansson from the OE Layer
BBMASK .= "|${RDKROOT}/rdke/common/meta-oss-reference/recipes-support/jansson/jansson_2.7.bb"


#Removing fstackprotector and fortify source
SECURITY_CFLAGS_remove = " -fstack-protector -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Wno-error=format-security -Wno-error=unused-result"
SECURITY_LDFLAGS_remove = " -fstack-protector"

