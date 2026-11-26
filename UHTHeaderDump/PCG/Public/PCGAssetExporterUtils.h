#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=AssetData -FallbackName=AssetData
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PCGAssetExporterParameters.h"
#include "PCGAssetExporterUtils.generated.h"

class UPCGAssetExporter;
class UPackage;

UCLASS(Blueprintable, MinimalAPI)
class UPCGAssetExporterUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPCGAssetExporterUtils();

    UFUNCTION(BlueprintCallable)
    static void UpdateAssets(const TArray<FAssetData>& PCGAssets, FPCGAssetExporterParameters Parameters);
    
    UFUNCTION(BlueprintCallable)
    static UPackage* CreateAsset(UPCGAssetExporter* Exporter, FPCGAssetExporterParameters Parameters);
    
};

