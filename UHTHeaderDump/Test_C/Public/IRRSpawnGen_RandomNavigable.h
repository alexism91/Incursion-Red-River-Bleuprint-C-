#pragma once
#include "CoreMinimal.h"
#include "IRRSpawnCandidateGenerator.h"
#include "IRRSpawnGen_RandomNavigable.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UIRRSpawnGen_RandomNavigable : public UIRRSpawnCandidateGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UIRRSpawnGen_RandomNavigable();

};

