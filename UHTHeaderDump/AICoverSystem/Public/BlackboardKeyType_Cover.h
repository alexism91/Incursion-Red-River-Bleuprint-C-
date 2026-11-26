#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeyType_Vector -FallbackName=BlackboardKeyType_Vector
#include "BlackboardKeyType_Cover.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class AICOVERSYSTEM_API UBlackboardKeyType_Cover : public UBlackboardKeyType_Vector {
    GENERATED_BODY()
public:
    UBlackboardKeyType_Cover();

};

