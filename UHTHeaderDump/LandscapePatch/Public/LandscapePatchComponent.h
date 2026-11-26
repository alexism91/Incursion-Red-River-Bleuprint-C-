#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Landscape -ObjectName=LandscapeEditLayerRenderer -FallbackName=LandscapeEditLayerRenderer
#include "ELandscapePatchPriorityInitialization.h"
#include "LandscapePatchComponent.generated.h"

class ALandscape;
class ALandscapePatchManager;

UCLASS(Abstract, Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULandscapePatchComponent : public USceneComponent, public ILandscapeEditLayerRenderer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid EditLayerGuid;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELandscapePatchPriorityInitialization PriorityInitialization;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ALandscape> Landscape;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ALandscapePatchManager> PatchManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
public:
    ULandscapePatchComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPriority(double PriorityIn);
    
    UFUNCTION(BlueprintCallable)
    void SetPatchManager(ALandscapePatchManager* NewPatchManager);
    
    UFUNCTION(BlueprintCallable)
    void SetLandscape(ALandscape* NewLandscape);
    
    UFUNCTION(BlueprintCallable)
    void SetIsEnabled(bool bEnabledIn);
    
    UFUNCTION(BlueprintCallable)
    void RequestLandscapeUpdate(bool bInUserTriggeredUpdate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintPure)
    double GetPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALandscapePatchManager* GetPatchManager() const;
    
private:
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetLayerOptions();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetLandscapeHeightmapCoordsToWorld() const;
    

    // Fix for true pure virtual functions not being implemented
};

