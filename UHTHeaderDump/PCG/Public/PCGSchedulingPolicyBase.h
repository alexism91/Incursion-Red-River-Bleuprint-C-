#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPCGHiGenGrid.h"
#include "PCGSchedulingPolicyBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UPCGSchedulingPolicyBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPCGHiGenGrid> GridsDependentOnWorldStreaming;
    
    UPCGSchedulingPolicyBase();

};

