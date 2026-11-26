#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PCGAttributePropertyInputSelector.h"
#include "PCGContext.h"
#include "PCGData.h"
#include "PCGInitializeFromDataParams.h"
#include "PCGPoint.h"
#include "PCGProjectionParams.h"
#include "PCGSpatialData.generated.h"

class AActor;
class UPCGDifferenceData;
class UPCGIntersectionData;
class UPCGMetadata;
class UPCGPointData;
class UPCGSpatialData;
class UPCGUnionData;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UPCGSpatialData : public UPCGData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepZeroDensityPoints;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasCachedLastSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector CachedLastSelector;
    
public:
    UPCGSpatialData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGPointData* ToPointDataWithContext(UPARAM(Ref) FPCGContext& Context) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGPointData* ToPointData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGUnionData* K2_UnionWith(const UPCGSpatialData* InOther) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGDifferenceData* K2_Subtract(const UPCGSpatialData* InOther) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_SamplePoint(const FTransform& Transform, const FBox& Bounds, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_ProjectPoint(const FTransform& InTransform, const FBox& InBounds, const FPCGProjectionParams& InParams, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGSpatialData* K2_ProjectOn(const UPCGSpatialData* InOther, const FPCGProjectionParams& InParams) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGIntersectionData* K2_IntersectWith(const UPCGSpatialData* InOther) const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeFromDataWithParams(const FPCGInitializeFromDataParams& InParams);
    
    UFUNCTION(BlueprintCallable)
    void InitializeFromData(const UPCGSpatialData* InSource, const UPCGMetadata* InMetadataParentOverride, bool bInheritMetadata, bool bInheritAttributes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNonTrivialTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBox GetStrictBounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetNormal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDimension() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDensityAtPosition(const FVector& InPosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBox GetBounds() const;
    
    UFUNCTION(BlueprintCallable)
    UPCGMetadata* CreateEmptyMetadata();
    
};

