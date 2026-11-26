#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ELXRDebugFeature.h"
#include "Templates/SubclassOf.h"
#include "ULXRDebugFeature.generated.h"

class AActor;
class UActorComponent;
class UULXRDebugEntry;

UCLASS(Blueprintable, EditInlineNew)
class LXR_API UULXRDebugFeature : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UULXRDebugEntry* DebugEntryWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELXRDebugFeature MyDebugFeature;
    
    UULXRDebugFeature();

    UFUNCTION(BlueprintCallable)
    void SetMyComponent(UActorComponent* InComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMyFeatureEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UActorComponent> GetMyDebugComponentClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetMyDebugActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActorComponent* GetMyComponent(TSubclassOf<UActorComponent> FeatureComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CustomTick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_WidgetReady();
    
};

