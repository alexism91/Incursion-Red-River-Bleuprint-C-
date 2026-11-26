#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Templates/SubclassOf.h"
#include "PCGAssetExporter.generated.h"

class UPCGDataAsset;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UPCGAssetExporter : public UObject {
    GENERATED_BODY()
public:
    UPCGAssetExporter();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UPCGDataAsset> BP_GetAssetType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_ExportToAsset(UPCGDataAsset* Asset);
    
};

