#pragma once
#include "CoreMinimal.h"
#include "DistanceFieldToTextureSettings.generated.h"

USTRUCT(BlueprintType)
struct FDistanceFieldToTextureSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Offset;
    
    GEOMETRYSCRIPTINGCORE_API FDistanceFieldToTextureSettings();
};

