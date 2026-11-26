#pragma once
#include "CoreMinimal.h"
#include "RigHierarchyModulePath.generated.h"

USTRUCT(BlueprintType)
struct FRigHierarchyModulePath {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ModulePath;
    
public:
    CONTROLRIG_API FRigHierarchyModulePath();
};
FORCEINLINE uint32 GetTypeHash(const FRigHierarchyModulePath) { return 0; }

