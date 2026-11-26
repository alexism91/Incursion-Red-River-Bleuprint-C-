#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "PCGAssetExporterParameters.h"
#include "PCGPinProperties.h"
#include "PCGSettings.h"
#include "Templates/SubclassOf.h"
#include "PCGSaveDataAssetSettings.generated.h"

class UPCGDataCollectionExporter;

UCLASS(Blueprintable, MinimalAPI)
class UPCGSaveDataAssetSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGPinProperties> Pins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPCGDataCollectionExporter> CustomDataCollectionExporterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAssetExporterParameters Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AssetDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor AssetColor;
    
    UPCGSaveDataAssetSettings();

};

