#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FilePath -FallbackName=FilePath
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=USDClasses -ObjectName=UsdMetadataImportOptions -FallbackName=UsdMetadataImportOptions
//CROSS-MODULE INCLUDE V2: -ModuleName=UnrealUSDWrapper -ObjectName=EGeometryCacheImport -FallbackName=EGeometryCacheImport
//CROSS-MODULE INCLUDE V2: -ModuleName=UnrealUSDWrapper -ObjectName=EUsdCollisionType -FallbackName=EUsdCollisionType
//CROSS-MODULE INCLUDE V2: -ModuleName=UnrealUSDWrapper -ObjectName=EUsdInitialLoadSet -FallbackName=EUsdInitialLoadSet
//CROSS-MODULE INCLUDE V2: -ModuleName=UnrealUSDWrapper -ObjectName=EUsdInterpolationType -FallbackName=EUsdInterpolationType
//CROSS-MODULE INCLUDE V2: -ModuleName=UnrealUSDWrapper -ObjectName=EUsdRootMotionHandling -FallbackName=EUsdRootMotionHandling
#include "EUsdStageState.h"
#include "UsdStageActor.generated.h"

class ULevelSequence;
class UObject;
class USceneComponent;
class UUsdAssetCache2;
class UUsdAssetCache3;
class UUsdInfoCache;
class UUsdPrimLinkCache;
class UUsdPrimTwin;
class UUsdTransactor;

UCLASS(Blueprintable, MinimalAPI, NoExport, Config=USDImporter)
class AUsdStageActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath RootLayer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUsdStageState StageState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUsdAssetCache3* AssetCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUsdInfoCache* UsdInfoCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUsdPrimLinkCache* PrimLinkCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUsdAssetCache2* UsdAssetCache;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUsdInitialLoadSet InitialLoadSet;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUsdInterpolationType InterpolationType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryCacheImport GeometryCacheImport;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePrimKindsForCollapsing;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KindsToCollapse;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMergeIdenticalMaterialSlots;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShareAssetsForIdenticalPrims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReuseIdenticalAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollapseTopLevelPointInstancers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PurposesToLoad;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NaniteTriangleThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RenderContext;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialPurpose;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUsdRootMotionHandling RootMotionHandling;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUsdCollisionType FallbackCollisionType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubdivisionLevel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUsdMetadataImportOptions MetadataOptions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUsdPrimTwin* RootUsdTwin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUsdTransactor* Transactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FString> PrimsToAnimate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UObject*, FString> ObjectsToWatch;
    
public:
    AUsdStageActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUsePrimKindsForCollapsing(bool bUse);
    
    UFUNCTION(BlueprintCallable)
    void SetUsdAssetCache(UUsdAssetCache3* NewCache);
    
    UFUNCTION(BlueprintCallable)
    void SetTime(float InTime);
    
    UFUNCTION(BlueprintCallable)
    void SetSubdivisionLevel(int32 NewLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetStageState(EUsdStageState NewStageState);
    
    UFUNCTION(BlueprintCallable)
    void SetShareAssetsForIdenticalPrims(bool bShare);
    
    UFUNCTION(BlueprintCallable)
    void SetRootMotionHandling(EUsdRootMotionHandling NewHandlingStrategy);
    
    UFUNCTION(BlueprintCallable)
    void SetRootLayer(const FString& RootFilePath);
    
    UFUNCTION(BlueprintCallable)
    void SetReuseIdenticalAssets(bool bReuse);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderContext(const FName& NewRenderContext);
    
    UFUNCTION(BlueprintCallable)
    void SetPurposesToLoad(int32 NewPurposesToLoad);
    
    UFUNCTION(BlueprintCallable)
    void SetNaniteTriangleThreshold(int32 NewNaniteTriangleThreshold);
    
    UFUNCTION(BlueprintCallable)
    void SetMergeIdenticalMaterialSlots(bool bMerge);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialPurpose(const FName& NewMaterialPurpose);
    
    UFUNCTION(BlueprintCallable)
    void SetKindsToCollapse(int32 NewKindsToCollapse);
    
    UFUNCTION(BlueprintCallable)
    void SetIsolatedRootLayer(const FString& IsolatedStageRootLayer);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertFilters(bool bNewInvertValue);
    
    UFUNCTION(BlueprintCallable)
    void SetInterpolationType(EUsdInterpolationType NewType);
    
    UFUNCTION(BlueprintCallable)
    void SetInitialLoadSet(EUsdInitialLoadSet NewLoadSet);
    
    UFUNCTION(BlueprintCallable)
    void SetGeometryCacheImport(EGeometryCacheImport ImportOption);
    
    UFUNCTION(BlueprintCallable)
    void SetFallbackCollisionType(EUsdCollisionType NewCollisionType);
    
    UFUNCTION(BlueprintCallable)
    void SetCollectOnComponents(bool bNewCollectValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCollectMetadata(bool bNewCollectValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCollectFromEntireSubtrees(bool bNewCollectValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCollapseTopLevelPointInstancers(bool bCollapse);
    
    UFUNCTION(BlueprintCallable)
    void SetBlockedPrefixFilters(const TArray<FString>& NewFilters);
    
    UFUNCTION(BlueprintCallable)
    void SetAssetCache(UUsdAssetCache2* NewCache);
    
    UFUNCTION(BlueprintCallable)
    void NewStage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSourcePrimPath(const UObject* Object) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULevelSequence* GetLevelSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetIsolatedRootLayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetGeneratedComponent(const FString& PrimPath) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UObject*> GetGeneratedAssets(const FString& PrimPath) const;
    
};

