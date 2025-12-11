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

DISTRO_FEATURES:append = " DAC_SUPPORT"
DISTRO_FEATURES:append = " rdkshell"
DISTRO_FEATURES:append = " enable-dab"
DISTRO_FEATURES:append = " cobalt-25"
DISTRO_FEATURES:append = " enable_cobalt_plugin"
DISTRO_FEATURES:append = " rialto_in_dac"
DISTRO_FEATURES:append = " enable_rdkshell_force_1080"

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
DAC_PARAMS ?= "true"
DAC_DB_PATH   ?= "/opt/dac_apps/db"
DAC_APP_PATH  ?= "/opt/dac_apps/apps"
DAC_DATA_PATH ?= "/opt/dac_apps/data"
DAC_ANN_FILE  ?= "config.json"
DAC_ANN_REGEX   ?= "public\\.*"
DAC_BUN_FIRM_COMP_KEY ?= "1.0.0-b34e9a38a2675d4cd02cf89f7fc72874a4c99eb0-dbg"
DAC_BUN_PLATNAME_OVERRIDE ?= "rpi4"
DAC_CONFIGURL ?= "https://280222515084-rdkm-apps-resources.s3.eu-central-1.amazonaws.com/configuration/cpe.json"
