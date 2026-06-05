#include "SSAFMP.h"

SSAFMP* g_SSAFMP = nullptr;

extern "C" __declspec(dllexport)
EuroScopePlugIn::CPlugin* __stdcall GetPluginEuroScope()
{
    if (!g_SSAFMP)
        g_SSAFMP = new SSAFMP();

    return g_SSAFMP;
}

