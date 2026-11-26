#pragma once
#include "CoreMinimal.h"
#include "CameraObjectInterface.generated.h"

class UCameraObjectInterfaceBlendableParameter;
class UCameraObjectInterfaceDataParameter;

USTRUCT(BlueprintType)
struct FCameraObjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCameraObjectInterfaceBlendableParameter*> BlendableParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCameraObjectInterfaceDataParameter*> DataParameters;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
public:
    GAMEPLAYCAMERAS_API FCameraObjectInterface();
};

