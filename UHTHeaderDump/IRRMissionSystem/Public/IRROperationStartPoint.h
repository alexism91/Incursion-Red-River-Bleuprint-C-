#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "IRRMissionSpawnPosition.h"
#include "IRROperationStartPoint.generated.h"

class AActor;
class UIRRMissionData;
class UIRRMissionSetup;

UCLASS(Abstract, Blueprintable, NoExport)
class IRRMISSIONSYSTEM_API AIRROperationStartPoint : public AIRRMissionSpawnPosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OperationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OperationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRMissionSetup* MissionSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRMissionData* MissionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGuid MissionUID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bActivated;
    
public:
    AIRROperationStartPoint(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool TryRerollOperation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PublishMissionData();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UIRRMissionData* PrepareMissionData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOperationRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetOperationProbePoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRMissionData* GetOperationMissionData() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool ActivateOperation();
    
};

