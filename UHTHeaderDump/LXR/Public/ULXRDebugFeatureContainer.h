#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ULXRDebugFeatureContainer.generated.h"

class UULXRDebugFeature;

UCLASS(Blueprintable, EditInlineNew)
class LXR_API UULXRDebugFeatureContainer : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UULXRDebugFeature* DirectDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UULXRDebugFeature* SenseDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UULXRDebugFeature* FluxDebug;
    
    UULXRDebugFeatureContainer();

};

