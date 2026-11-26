#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "IRRGraphSaveData.h"
#include "IRRMissionSaveData.h"
#include "IRRProgressData.h"
#include "IRRMissionSaveGame.generated.h"

class UIRRMissionData;

UCLASS(Blueprintable)
class IRRMISSIONSYSTEM_API UIRRMissionSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitiated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRProgressData ProgressData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRMissionSaveData> MissionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRGraphSaveData> MissionGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> PlayedBriefings;
    
    UIRRMissionSaveGame();

    UFUNCTION(BlueprintCallable)
    void SetProgressData(const FIRRProgressData NewProgressData);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionData(TArray<UIRRMissionData*> NewMissionData);
    
    UFUNCTION(BlueprintCallable)
    FIRRProgressData GetProgressData();
    
    UFUNCTION(BlueprintCallable)
    TArray<FIRRMissionSaveData> GetMissionData();
    
};

