#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "IRRConnectedActorSnap.h"
#include "IRRMissionSpawnInterface.h"
#include "Templates/SubclassOf.h"
#include "IRRMissionSpawnPosition.generated.h"

class UIRRSpawnModifier;

UCLASS(Blueprintable, NoExport)
class IRRMISSIONSYSTEM_API AIRRMissionSpawnPosition : public AActor, public IIRRMissionSpawnInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SpawnPositionUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> SpawnClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRSpawnModifier*> SpawnModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
    AIRRMissionSpawnPosition(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSelected(bool Selected);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetSpawnPositionUID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FIRRConnectedActorSnap> GetConnectedActors(bool& bSuccess);
    

    // Fix for true pure virtual functions not being implemented
};

