#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "MeshBlendSubSystem.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class MESHBLEND_API UMeshBlendSubSystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* NoiseTexture;
    
public:
    UMeshBlendSubSystem();

};

