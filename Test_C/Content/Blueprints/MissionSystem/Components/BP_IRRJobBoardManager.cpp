class UBP_IRRJobBoardManager_C : public UIRRJobBoardComponent
{
public:
    TMap<int32, float> ContractTierByLoyaltyLevel = {
        { 3, 100 }, 
        { 2, 75 }, 
        { 1, 50 }, 
        { 0, 25 }
    };
    TMap<int32, float> ContractTierBySuccessPercentage = {
        { 3, 100 }, 
        { 2, 75 }, 
        { 1, 50 }, 
        { 0, 25 }
    };
};