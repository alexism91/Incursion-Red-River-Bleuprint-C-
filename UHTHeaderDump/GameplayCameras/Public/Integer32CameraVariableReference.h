#pragma once
#include "CoreMinimal.h"
#include "CameraVariableID.h"
#include "Integer32CameraVariableReference.generated.h"

class UInteger32CameraVariable;

USTRUCT(BlueprintType)
struct FInteger32CameraVariableReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID VariableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteger32CameraVariable* Variable;
    
    GAMEPLAYCAMERAS_API FInteger32CameraVariableReference();
};

