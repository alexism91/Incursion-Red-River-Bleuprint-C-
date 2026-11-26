#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedStruct -FallbackName=InstancedStruct
#include "PCGData.h"
#include "PCGUserParametersData.generated.h"

class UPCGUserParametersData;

UCLASS(Blueprintable, HideDropdown)
class UPCGUserParametersData : public UPCGData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct UserParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPCGUserParametersData> UpstreamData;
    
    UPCGUserParametersData();

};

