ARCHS = arm64 arm64e

INSTALL_TARGET_PROCESSES = SpringBoard

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = Folded

Folded_FILES = Tweak.xm
Folded_CFLAGS = -fobjc-arc
Folded_PRIVATE_FRAMEWORKS = Preferences
Folded_LIBRARIES = colorpicker

include $(THEOS_MAKE_PATH)/tweak.mk
SUBPROJECTS += prefs
include $(THEOS_MAKE_PATH)/aggregate.mk
