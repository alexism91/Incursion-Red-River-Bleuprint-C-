#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PerPlatformBool -FallbackName=PerPlatformBool
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PerPlatformInt -FallbackName=PerPlatformInt
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowEngine -ObjectName=DataflowContentOwner -FallbackName=DataflowContentOwner
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowEngine -ObjectName=DataflowInstance -FallbackName=DataflowInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowEngine -ObjectName=DataflowInstanceInterface -FallbackName=DataflowInstanceInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PerQualityLevelInt -FallbackName=PerQualityLevelInt
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMaterial -FallbackName=SkeletalMaterial
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshLODInfo -FallbackName=SkeletalMeshLODInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkinnedAsset -FallbackName=SkinnedAsset
#include "ChaosClothAssetBase.generated.h"

class UMaterialInterface;
class UPhysicsAsset;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UChaosClothAssetBase : public USkinnedAsset, public IDataflowContentOwner, public IDataflowInstanceInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowInstance DataflowInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkeletalMaterial> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FSkeletalMeshLODInfo> LODInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerQualityLevelInt MinQualityLevelLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformBool DisableBelowMinLodStripping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformInt MinLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSupportRayTracing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RayTracingMinLOD;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* ShadowPhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OverlayMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverlayMaterialMaxDrawDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasVertexColors: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoxSphereBounds Bounds;
    
public:
    UChaosClothAssetBase();

    UFUNCTION(BlueprintCallable)
    void SetOverlayMaterialMaxDrawDistance(float InMaxDrawDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetOverlayMaterial(UMaterialInterface* NewOverlayMaterial);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhysicsAsset* GetShadowPhysicsAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverlayMaterialMaxDrawDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetOverlayMaterial() const;
    

    // Fix for true pure virtual functions not being implemented
};

