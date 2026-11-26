#pragma once
#include "CoreMinimal.h"
#include "RigModuleIdentifier.generated.h"

USTRUCT(BlueprintType)
struct FRigModuleIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Type;
    
    CONTROLRIG_API FRigModuleIdentifier();
};

