#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LevelInstance -FallbackName=LevelInstance
#include "IRRLevelInstanceMaterialParams.h"
#include "IRRAdvancedLevelInstanceActor.generated.h"

class AStaticMeshActor;

UCLASS(Blueprintable, NoExport)
class IRRADVANCEDLEVELINSTANCE_API AIRRAdvancedLevelInstanceActor : public ALevelInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ZoneGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<float, FIRRLevelInstanceMaterialParams> MaterialParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeverReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRLevelInstanceMaterialParams LastMaterialParams;
    
    AIRRAdvancedLevelInstanceActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetMaterialParams();
    
    UFUNCTION(BlueprintCallable)
    void RandomizeMaterialParams();
    
    UFUNCTION(BlueprintCallable)
    FIRRLevelInstanceMaterialParams GetLastMaterialParams();
    
    UFUNCTION(BlueprintCallable)
    static TArray<AStaticMeshActor*> GetAllStaticMeshActors(ALevelInstance* LevelInstance);
    
    UFUNCTION(BlueprintCallable)
    void ApplyMaterialParams(FIRRLevelInstanceMaterialParams Params);
    
};

