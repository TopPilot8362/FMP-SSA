#include "FMP.h"
#include "ECFMP.h"

MyPlugin::Myplugin()
      : EuroscopePlugIn::CPlugIn(
            EuroscopePlugIn::COMPATIBILITY_CODE,
            "MyPlugin",
            "1.0",
            "Liam Garland"
      )