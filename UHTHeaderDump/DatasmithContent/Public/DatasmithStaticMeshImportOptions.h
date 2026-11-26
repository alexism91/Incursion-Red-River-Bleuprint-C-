#pragma once
#include "CoreMinimal.h"
#include "EDatasmithImportLightmapMax.h"
#include "EDatasmithImportLightmapMin.h"
#include "DatasmithStaticMeshImportOptions.generated.h"

USTRUCT(BlueprintType)
struct FDatasmithStaticMeshImportOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDatasmithImportLightmapMin MinLightmapResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDatasmithImportLightmapMax MaxLightmapResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateLightmapUVs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRemoveDegenerates;
    
    DATASMITHCONTENT_API FDatasmithStaticMeshImportOptions();
};

