#pragma once
#include "CoreMinimal.h"
#include "EDatasmithCADStitchingTechnique.h"
#include "DatasmithTessellationOptions.generated.h"

USTRUCT(BlueprintType)
struct FDatasmithTessellationOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChordTolerance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxEdgeLength;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalTolerance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDatasmithCADStitchingTechnique StitchingTechnique;
    
protected:
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double GeometricTolerance;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double StitchingTolerance;
    
public:
    DATASMITHCONTENT_API FDatasmithTessellationOptions();
};

