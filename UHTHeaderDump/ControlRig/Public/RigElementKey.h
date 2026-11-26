#pragma once
#include "CoreMinimal.h"
#include "ERigElementType.h"
#include "RigElementKey.generated.h"

USTRUCT(BlueprintType)
struct FRigElementKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigElementType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    CONTROLRIG_API FRigElementKey();
};
FORCEINLINE uint32 GetTypeHash(const FRigElementKey) { return 0; }

