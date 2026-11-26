#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPCGPointExtentsModifierMode.h"
#include "PCGSettings.h"
#include "PCGPointExtentsModifierSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGPointExtentsModifierSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Extents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGPointExtentsModifierMode Mode;
    
    UPCGPointExtentsModifierSettings();

};

