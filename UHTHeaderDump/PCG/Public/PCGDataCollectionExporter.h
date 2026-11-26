#pragma once
#include "CoreMinimal.h"
#include "PCGAssetExporter.h"
#include "PCGDataCollection.h"
#include "PCGDataCollectionExporter.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGDataCollectionExporter : public UPCGAssetExporter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGDataCollection Data;
    
    UPCGDataCollectionExporter();

};

