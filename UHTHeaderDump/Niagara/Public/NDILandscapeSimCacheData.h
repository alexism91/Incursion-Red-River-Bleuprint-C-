#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NDILandscapeSimCacheData.generated.h"

class UTexture2D;

UCLASS(Blueprintable, MinimalAPI)
class UNDILandscapeSimCacheData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> HeightFieldTextures;
    
    UNDILandscapeSimCacheData();

};

