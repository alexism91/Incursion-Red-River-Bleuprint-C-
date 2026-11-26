#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "LXRSubsystem.generated.h"

class AActor;
class ULXRDetectionComponent;
class ULXRSourceComponent;
class UUserWidget;

UCLASS(Blueprintable)
class LXR_API ULXRSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ULXRSourceComponent>> LightSources;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ULXRDetectionComponent>> DetectionComponents;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> LXRActorsNotInOctreeYetBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UUserWidget> DetectionDebugWidget;
    
public:
    ULXRSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnregisterLight(ULXRSourceComponent* LightSource);
    
    UFUNCTION(BlueprintCallable)
    void RegisterLight(ULXRSourceComponent* LightSource);
    
};

