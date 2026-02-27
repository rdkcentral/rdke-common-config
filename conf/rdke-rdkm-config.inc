#Additional flags for voice remote support
IRDB             = "false"
AUTH             = "false"
AUTH_RECEIVER_ID = "false"
AUTH_DEVICE_ID   = "false"
AUTH_ACCOUNT_ID  = "false"
AUTH_PARTNER_ID  = "false"
AUTH_EXPERIENCE  = "false"
AUTH_SAT_TOKEN   = "false"
RF4CE_PACKET_ANALYSIS = "false"
VOICE_NEXTGEN_MAC = "false"

#TODO. Need to remove once rdkfonts is  ready for opensourcing
PREFERRED_PROVIDER_virtual/default-font ?= "liberation-fonts"

#libpackage support for DAC applications
PREFERRED_PROVIDER_virtual/libpackage = "packager-lisa"

DISTRO_FEATURES:append = " enable_ralf"
DISTRO_FEATURES:append = " rialto_in_dac"

# GDB has incompatible gplv3 license, disable by default
DISTRO_FEATURES:remove = "enable_gdb_support"

# Todo: Remove when REFPLTV-2709 is fixed and released in MW
BUILD_FACTORY_TEST = "false"

# Enable Distro to remove provisioning precondition check while activate OCDM plugin
DISTRO_FEATURES:append = " disable_provision_precondition_rdkm"

# Enable Distro to add sceneset
DISTRO_FEATURES:append = " sceneset"

# Remove from RPI builds as memcapture is in rdke repo
DISTRO_FEATURES:remove = "memcapture"

# DAC parameter values
DAC_APP_PATH  ?= "/opt/dac_apps/apps"
DAC_APP_CERT_PATH ?= "/etc/rdk/certs"
RUNTIME_APP_PORTAL ?= "com.rdk.dac.apps"
SCENESET_DEFAULT_APPNAME ?= "com.rdkcentral.refui"
FACTORY_APP_PATH ?= "/etc/rdk/factoryapps"
APP_PREINSTALL_DIRECTORY ?= "/media/apps"
APP_DOWNLOAD_DIRECTORY ?= "/opt/CDL"
