#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNReplanParameters -FallbackName=HTNReplanParameters
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNService -FallbackName=HTNService
#include "HTNService_ReplanSearchOnSight.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNService_ReplanSearchOnSight : public UHTNService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplanOnAnyTargetVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplanOnLastKnownInSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHTNReplanParameters ReplanParameters;
    
    UHTNService_ReplanSearchOnSight();

};

