#pragma once

#include "EuroScopePlugIn.h"

class SSAFMP : public EuroScopePlugIn::CPlugIn
{
public:
    SSAFMP();
    virtual ~SSAFMP();

    void OnGetTagItem(
        EuroScopePlugIn::CFlightPlan FlightPlan,
        EuroScopePlugIn::CTagItem TagItem,
        int ItemCode,
        int TagData
    ) override;
};