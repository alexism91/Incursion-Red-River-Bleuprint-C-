#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "IRRFactionCoverSubsystem.generated.h"

class ACoverSystem;
class UIRRBatchAsyncLineTraceSubsystem;
class UIRRNavAreaMap;

UCLASS(Blueprintable)
class TEST_C_API UIRRFactionCoverSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACoverSystem* CoverSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRNavAreaMap* NavAreaMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRBatchAsyncLineTraceSubsystem* BatchTrace;
    
public:
    UIRRFactionCoverSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnNavAreaMapUpdated(const UIRRNavAreaMap* NavMap);
    
    UFUNCTION(BlueprintCallable)
    void OnCoverNavMapUpdated(const ACoverSystem* InCoverSystem);
    
    UFUNCTION(BlueprintCallable)
    void OnCoverNavMapPatched(const ACoverSystem* InCoverSystem, const TArray<FBox>& PatchedBounds);
    
};

