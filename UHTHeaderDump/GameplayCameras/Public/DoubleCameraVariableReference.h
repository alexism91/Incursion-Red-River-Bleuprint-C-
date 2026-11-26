#pragma once
#include "CoreMinimal.h"
#include "CameraVariableID.h"
#include "DoubleCameraVariableReference.generated.h"

class UDoubleCameraVariable;

USTRUCT(BlueprintType)
struct FDoubleCameraVariableReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID VariableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDoubleCameraVariable* Variable;
    
    GAMEPLAYCAMERAS_API FDoubleCameraVariableReference();
};

