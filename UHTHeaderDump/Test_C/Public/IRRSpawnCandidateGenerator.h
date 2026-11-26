#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IRRSpawnCandidateGenerator.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class TEST_C_API UIRRSpawnCandidateGenerator : public UObject {
    GENERATED_BODY()
public:
    UIRRSpawnCandidateGenerator();

};

