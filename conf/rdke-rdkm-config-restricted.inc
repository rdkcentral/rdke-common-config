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

DISTRO_FEATURES:append = " DAC_SUPPORT"
DISTRO_FEATURES:append = " rdkshell"
DISTRO_FEATURES:append = " enable-dab"
DISTRO_FEATURES:append = " cobalt-25"
DISTRO_FEATURES:append = " enable_cobalt_plugin"
DISTRO_FEATURES:append = " playready"
DISTRO_FEATURES:append = " widevine"
DISTRO_FEATURES:append = " dolby-vision"
DISTRO_FEATURES:append = " dolby-ms12"
DISTRO_FEATURES:append = " hdcp-v2p2"

# GDB has incompatible gplv3 license, disable by default
DISTRO_FEATURES:remove = "enable_gdb_support"

# Todo: Remove when REFPLTV-2709 is fixed and released in MW
BUILD_FACTORY_TEST = "false"

# Enable Distro to remove provisioning precondition check while activate OCDM plugin
DISTRO_FEATURES:append = " disable_provision_precondition_rdkm"
