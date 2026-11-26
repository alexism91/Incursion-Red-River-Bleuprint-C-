#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "IRRLevelInstanceMaterialParams.h"
#include "IRRAdvancedLevelInstanceFunctionLibrary.generated.h"

class AActor;
class ALevelInstance;
class UObject;

UCLASS(Blueprintable)
class IRRADVANCEDLEVELINSTANCE_API UIRRAdvancedLevelInstanceFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIRRAdvancedLevelInstanceFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool ReplaceLevelInstanceWithAdvancedLevelInstance(ALevelInstance* OldLI);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReplaceAllLevelInstancesWithAdvancedLevelInstances(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveDuplicateLevelInstances(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static TMap<float, FIRRLevelInstanceMaterialParams> GetMaterialParamsForLevelInstance();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ConvertStaticMeshActorsToInstancedFoliage(UObject* WorldContextObject, const TArray<AActor*>& ActorsToConvert, bool bDestroyOriginals, float MaxWorldPositionOffsetDistance);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* ConvertStaticMeshActorsToHISMs(UObject* WorldContextObject, const TArray<AActor*>& ActorsToConvert, AActor* ContainerActor, bool bDestroyOriginals, bool bCopyCollision, bool bCopyLighting, bool bCopyTags, float MaxWorldPositionOffsetDistance);
    
};

