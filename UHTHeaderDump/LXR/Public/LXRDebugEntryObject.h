#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LXRDebugEntryObject.generated.h"

class AActor;
class ULXRDetectionComponent;
class ULXRFluxLightDetectorComponent;
class ULXRLightSenseComponent;

UCLASS(Blueprintable)
class LXR_API ULXRDebugEntryObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DebugColor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULXRDetectionComponent* DetectionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULXRLightSenseComponent* LightSenseComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULXRFluxLightDetectorComponent* FluxLightDetectorComponent;
    
public:
    ULXRDebugEntryObject();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetMyDebugActor() const;
    
};

