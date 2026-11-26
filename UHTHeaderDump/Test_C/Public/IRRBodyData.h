#pragma once
#include "CoreMinimal.h"
#include "IRRBodyData.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct TEST_C_API FIRRBodyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    FIRRBodyData();
};

