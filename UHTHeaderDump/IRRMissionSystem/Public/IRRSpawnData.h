#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRBaseObject -FallbackName=IRRBaseObject
#include "IRRSpawnData.generated.h"

class AActor;
class UIRRMissionData;
class UIRRSpawnPayload;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRSpawnData : public UIRRBaseObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DataLayerLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor SpawnColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRSpawnPayload*> SpawnPayloads;
    
    UIRRSpawnData();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void ResolveSpawnTargets(UIRRMissionData* MissionData, TArray<AActor*>& OutActors) const;
    
};

