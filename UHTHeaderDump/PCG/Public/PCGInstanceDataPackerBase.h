#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PCGContext.h"
#include "PCGMeshInstanceList.h"
#include "PCGPackedCustomData.h"
#include "PCGInstanceDataPackerBase.generated.h"

class UPCGMetadata;
class UPCGSpatialData;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UPCGInstanceDataPackerBase : public UObject {
    GENERATED_BODY()
public:
    UPCGInstanceDataPackerBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PackInstances(FPCGContext& Context, const UPCGSpatialData* InSpatialData, const FPCGMeshInstanceList& InstanceList, FPCGPackedCustomData& OutPackedCustomData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void PackCustomDataFromAttributes(const FPCGMeshInstanceList& InstanceList, const UPCGMetadata* MetaData, const TArray<FName>& AttributeNames, FPCGPackedCustomData& OutPackedCustomData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AddTypeToPacking(int32 TypeID, FPCGPackedCustomData& OutPackedCustomData) const;
    
};

