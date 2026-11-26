#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "LXRDebugFeatures.h"
#include "LXRDebugSubsystem.generated.h"

class AActor;
class UULXRDebugCanvasWidget;

UCLASS(Blueprintable)
class LXR_API ULXRDebugSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UULXRDebugCanvasWidget* CanvasWidget;
    
public:
    ULXRDebugSubsystem();

    UFUNCTION(BlueprintCallable)
    void UpdateActorDebugFeatures(AActor* InActor, const FLXRDebugFeatures& InDebugFeatures);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDebugActor(AActor* InActor, bool IsLocalControllerActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmountOfDebugActors();
    
    UFUNCTION(BlueprintCallable)
    void AddDebugActor(AActor* InActor, const FLXRDebugFeatures& InDebugFeatures, bool IsLocalControllerActor);
    
};

