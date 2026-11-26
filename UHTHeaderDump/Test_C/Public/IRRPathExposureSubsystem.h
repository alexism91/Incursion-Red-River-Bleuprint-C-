#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "IRRPathExposureSubsystem.generated.h"

class UIRRVisibilityCacheSubsystem;

UCLASS(Blueprintable)
class TEST_C_API UIRRPathExposureSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRVisibilityCacheSubsystem* VisCache;
    
public:
    UIRRPathExposureSubsystem();

};

