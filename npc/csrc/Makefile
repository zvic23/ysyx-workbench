NPC_HOME_CSRC = ~/ysyx-workbench/npc/csrc


Q            := @
KCONFIG_PATH := $(NPC_HOME_CSRC)/utils/kconfig
FIXDEP_PATH  := $(NPC_HOME_CSRC)/utils/fixdep
Kconfig      := $(NPC_HOME_CSRC)/Kconfig
silent := -s

CONF   := $(KCONFIG_PATH)/conf
MCONF  := $(KCONFIG_PATH)/mconf
FIXDEP := $(FIXDEP_PATH)/fixdep

$(CONF):
	$(Q)$(MAKE) $(silent) -C $(KCONFIG_PATH) NAME=conf

$(MCONF):
	$(Q)$(MAKE) $(silent) -C $(KCONFIG_PATH) NAME=mconf

$(FIXDEP):
	$(Q)$(MAKE) $(silent) -C $(FIXDEP_PATH)

menuconfig: $(MCONF) $(CONF) $(FIXDEP)
	$(Q)$(MCONF) $(Kconfig)
	$(Q)$(CONF) $(silent) --syncconfig $(Kconfig)
