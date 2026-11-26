#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Landscape -ObjectName=LandscapeBlueprintBrushBase -FallbackName=LandscapeBlueprintBrushBase
#include "LandscapePatchManager.generated.h"

class ALandscape;
class ULandscapePatchComponent;

UCLASS(Blueprintable, NoExport)
class ALandscapePatchManager : public ALandscapeBlueprintBrushBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ULandscapePatchComponent>> PatchComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform HeightmapCoordsToWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<ULandscapePatchComponent>, int32> PatchToIndex;
    
public:
    ALandscapePatchManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTargetLandscape(ALandscape* InOwningLandscape);
    
    UFUNCTION(BlueprintCallable)
    bool RemovePatch(ULandscapePatchComponent* Patch);
    
    UFUNCTION(BlueprintCallable)
    void MovePatchToIndex(ULandscapePatchComponent* Patch, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndexOfPatch(const ULandscapePatchComponent* Patch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsPatch(ULandscapePatchComponent* Patch) const;
    
    UFUNCTION(BlueprintCallable)
    void AddPatch(ULandscapePatchComponent* Patch);
    
};

