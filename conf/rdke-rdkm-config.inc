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
