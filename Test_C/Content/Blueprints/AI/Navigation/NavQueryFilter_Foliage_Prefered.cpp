class UNavQueryFilter_Foliage_Prefered_C : public UNavigationQueryFilter
{
public:
    TArray<struct FNavigationFilterArea> Areas = {
        {
            "AreaClass": "BlueprintGeneratedClass'Test_C/Content/Blueprints/AI/Navigation/NavArea_Foliage.NavArea_Foliage_C'",
            "TravelCostOverride": 1,
            "EnteringCostOverride": 0,
            "bIsExcluded": false,
            "bOverrideTravelCost": false,
            "bOverrideEnteringCost": false
        },
        {
            "AreaClass": "Class'/Script/NavigationSystem.NavArea_Default'",
            "TravelCostOverride": 2,
            "EnteringCostOverride": 2,
            "bIsExcluded": false,
            "bOverrideTravelCost": true,
            "bOverrideEnteringCost": true
        },
        {
            "AreaClass": "Class'/Script/NavigationSystem.NavArea_Null'",
            "TravelCostOverride": 1,
            "EnteringCostOverride": 0,
            "bIsExcluded": false,
            "bOverrideTravelCost": false,
            "bOverrideEnteringCost": false
        },
        {
            "AreaClass": nullptr,
            "TravelCostOverride": 1,
            "EnteringCostOverride": 0,
            "bIsExcluded": true,
            "bOverrideTravelCost": false,
            "bOverrideEnteringCost": false
        }
    };
};