#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "EPCGMetadataFilterMode.h"
#include "EPCGMetadataOp.h"
#include "EPCGMetadataTypes.h"
#include "EPCGStringMatchingOperator.h"
#include "PCGPoint.h"
#include "PCGMetadata.generated.h"

class UPCGMetadata;

UCLASS(Blueprintable, MinimalAPI)
class UPCGMetadata : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGMetadata* Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TWeakObjectPtr<UPCGMetadata>> OtherParents;
    
public:
    UPCGMetadata();

    UFUNCTION(BlueprintCallable)
    void SetPointAttributes(const FPCGPoint& Point, const UPCGMetadata* MetaData, UPARAM(Ref) FPCGPoint& OutPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetAttributesByKey(int64 Key, const UPCGMetadata* InMetaData, int64 TargetKey, int64& OutKey);
    
    UFUNCTION(BlueprintCallable)
    void ResetWeightedAttributesByKey(int64 TargetKey, int64& OutKey);
    
    UFUNCTION(BlueprintCallable)
    void ResetPointWeightedAttributes(FPCGPoint& OutPoint);
    
    UFUNCTION(BlueprintCallable)
    void MergePointAttributes(const FPCGPoint& PointA, const UPCGMetadata* MetadataA, const FPCGPoint& PointB, const UPCGMetadata* MetadataB, UPARAM(Ref) FPCGPoint& TargetPoint, EPCGMetadataOp Op);
    
    UFUNCTION(BlueprintCallable)
    void MergeAttributesByKey(int64 KeyA, const UPCGMetadata* MetadataA, int64 KeyB, const UPCGMetadata* MetadataB, int64 TargetKey, EPCGMetadataOp Op, int64& OutKey);
    
    UFUNCTION(BlueprintCallable)
    void K2_InitializeAsCopyWithAttributeFilter(const UPCGMetadata* InMetadataToCopy, const TSet<FName>& InFilteredAttributes, const TArray<int64>& InOptionalEntriesToCopy, EPCGMetadataFilterMode InFilterMode, EPCGStringMatchingOperator InMatchOperator);
    
    UFUNCTION(BlueprintCallable)
    void K2_InitializeAsCopy(const UPCGMetadata* InMetadataToCopy, const TArray<int64>& InOptionalEntriesToCopy);
    
    UFUNCTION(BlueprintCallable)
    void InitializeWithAttributeFilter(const UPCGMetadata* InParent, const TSet<FName>& InFilteredAttributes, EPCGMetadataFilterMode InFilterMode, EPCGStringMatchingOperator InMatchOperator);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const UPCGMetadata* InParent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCommonAttributes(const UPCGMetadata* InMetaData) const;
    
    UFUNCTION(BlueprintPure)
    int64 GetItemCountForChild() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAttributes(TArray<FName>& AttributeNames, TArray<EPCGMetadataTypes>& AttributeTypes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAttributeCount() const;
    
    UFUNCTION(BlueprintCallable)
    void Flatten();
    
    UFUNCTION(BlueprintCallable)
    UPCGMetadata* CreateVectorAttribute(FName AttributeName, FVector DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    
    UFUNCTION(BlueprintCallable)
    UPCGMetadata* CreateVector4Attribute(FName AttributeName, FVector4 DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    
    UFUNCTION(BlueprintCallable)
    UPCGMetadata* CreateVector2Attribute(FName AttributeName, FVector2D DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    
    UFUNCTION(BlueprintCallable)
    UPCGMetadata* CreateTransformAttribute(FName AttributeName, FTransform DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    
    UFUNCTION(BlueprintCallable)
    UPCGMetadata* CreateStringAttribute(FName AttributeName, const FString& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    
    UFUNCTION(BlueprintCallable)
    UPCGMetadata* CreateSoftObjectPathAttribute(FName AttributeName, const FSoftObjectPath& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    
    UFUNCTION(BlueprintCallable)
    UPCGMetadata* CreateSoftClassPathAttribute(FName AttributeName, const FSoftClassPath& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    
    UFUNCTION(BlueprintCallable)
    UPCGMetadata* CreateRotatorAttribute(FName AttributeName, FRotator DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    
    UFUNCTION(BlueprintCallable)
    UPCGMetadata* CreateQuatAttribute(FName AttributeName, FQuat DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    
    UFUNCTION(BlueprintCallable)
    UPCGMetadata* CreateNameAttribute(FName AttributeName, FName DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    
    UFUNCTION(BlueprintCallable)
    UPCGMetadata* CreateInteger64Attribute(FName AttributeName, int64 DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    
    UFUNCTION(BlueprintCallable)
    UPCGMetadata* CreateInteger32Attribute(FName AttributeName, int32 DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    
    UFUNCTION(BlueprintCallable)
    UPCGMetadata* CreateFloatAttribute(FName AttributeName, float DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    
    UFUNCTION(BlueprintCallable)
    UPCGMetadata* CreateDoubleAttribute(FName AttributeName, double DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    
    UFUNCTION(BlueprintCallable)
    UPCGMetadata* CreateBoolAttribute(FName AttributeName, bool DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    
    UFUNCTION(BlueprintCallable)
    void CopyAttributes(const UPCGMetadata* InOther);
    
    UFUNCTION(BlueprintCallable)
    bool BP_RenameAttribute(FName AttributeToRename, FName NewAttributeName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_HasAttribute(FName AttributeName) const;
    
    UFUNCTION(BlueprintCallable)
    void BP_DeleteAttribute(FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    bool BP_CopyExistingAttribute(FName AttributeToCopy, FName NewAttributeName, bool bKeepParent);
    
    UFUNCTION(BlueprintCallable)
    void BP_CopyAttribute(const UPCGMetadata* InOther, FName AttributeToCopy, FName NewAttributeName);
    
    UFUNCTION(BlueprintCallable)
    void BP_ClearAttribute(FName AttributeToClear);
    
    UFUNCTION(BlueprintCallable)
    void BP_AddAttribute(const UPCGMetadata* InOther, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    int64 AddEntry(int64 ParentEntryKey);
    
    UFUNCTION(BlueprintCallable)
    void AddAttributesFiltered(const UPCGMetadata* InOther, const TSet<FName>& InFilteredAttributes, EPCGMetadataFilterMode InFilterMode, EPCGStringMatchingOperator InMatchOperator);
    
    UFUNCTION(BlueprintCallable)
    void AddAttributes(const UPCGMetadata* InOther);
    
    UFUNCTION(BlueprintCallable)
    void AccumulateWeightedAttributesByKey(int64 Key, const UPCGMetadata* MetaData, float Weight, bool bSetNonInterpolableAttributes, int64 TargetKey, int64& OutKey);
    
    UFUNCTION(BlueprintCallable)
    void AccumulatePointWeightedAttributes(const FPCGPoint& InPoint, const UPCGMetadata* InMetaData, float Weight, bool bSetNonInterpolableAttributes, UPARAM(Ref) FPCGPoint& OutPoint);
    
};

