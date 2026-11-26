#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PCGContext.h"
#include "PCGSkinnedMeshInstanceList.h"
#include "PCGSkinnedMeshPackedCustomData.h"
#include "PCGSkinnedMeshInstanceDataPackerBase.generated.h"

class UPCGMetadata;
class UPCGSpatialData;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UPCGSkinnedMeshInstanceDataPackerBase : public UObject {
    GENERATED_BODY()
public:
    UPCGSkinnedMeshInstanceDataPackerBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PackInstances(FPCGContext& Context, const UPCGSpatialData* InSpatialData, const FPCGSkinnedMeshInstanceList& InstanceList, FPCGSkinnedMeshPackedCustomData& OutPackedCustomData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void PackCustomDataFromAttributes(const FPCGSkinnedMeshInstanceList& InstanceList, const UPCGMetadata* MetaData, const TArray<FName>& AttributeNames, FPCGSkinnedMeshPackedCustomData& OutPackedCustomData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AddTypeToPacking(int32 TypeID, FPCGSkinnedMeshPackedCustomData& OutPackedCustomData) const;
    
};

