#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "IRROperationActivation.h"
#include "IRROperationDirectorSubsystem.generated.h"

class AIRROperationStartPoint;
class AIRROperationStartPoint_Auto;
class UIRROperationDirectorSubsystem;
class UObject;

UCLASS(Blueprintable)
class IRRMISSIONSYSTEM_API UIRROperationDirectorSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIRROperationDirectorSubsystem();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool RegisterOperation(AIRROperationStartPoint_Auto* StartPoint, const FIRROperationActivation& InActivation);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSightCheckComplete(const TArray<FVector>& ValidLocations, const TArray<int32>& UnseenCandidates);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AIRROperationStartPoint*> GetRunningOperations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AIRROperationStartPoint_Auto*> GetPendingOperations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UIRROperationDirectorSubsystem* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool CancelPendingOperation(AIRROperationStartPoint_Auto* StartPoint);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 ActivateSelectedOperationsNow();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool ActivateOperationNow(AIRROperationStartPoint_Auto* StartPoint);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 ActivateAllOperationsNow();
    
};

