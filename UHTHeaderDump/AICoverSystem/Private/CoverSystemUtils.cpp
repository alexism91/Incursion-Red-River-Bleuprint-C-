#include "CoverSystemUtils.h"

UCoverSystemUtils::UCoverSystemUtils() {
}

void UCoverSystemUtils::SetBlackboardValueAsCover(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, FCover Value) {
}

bool UCoverSystemUtils::IsCoverValid(const FCover& Cover) {
    return false;
}

bool UCoverSystemUtils::IsCoverHandleValid(const FCoverHandle& Handle) {
    return false;
}

FCover UCoverSystemUtils::GetValueAsCover(UBlackboardComponent* Target, FName Key) {
    return FCover{};
}

FCover UCoverSystemUtils::GetBlackboardValueAsCover(UBTNode* NodeOwner, const FBlackboardKeySelector& Key) {
    return FCover{};
}


