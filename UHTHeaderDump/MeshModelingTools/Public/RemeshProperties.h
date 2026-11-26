#pragma once
#include "CoreMinimal.h"
#include "MeshConstraintProperties.h"
#include "RemeshProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class URemeshProperties : public UMeshConstraintProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmoothingStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSplits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollapses;
    
    URemeshProperties();

};

