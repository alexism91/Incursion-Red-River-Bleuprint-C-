#pragma once
#include "CoreMinimal.h"
#include "UserSceneTextureOverride.generated.h"

USTRUCT(BlueprintType)
struct FUserSceneTextureOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Value;
    
    ENGINE_API FUserSceneTextureOverride();
};

