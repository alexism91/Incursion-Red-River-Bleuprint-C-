#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "RigVMGraphFunctionIdentifier.generated.h"

USTRUCT(BlueprintType)
struct FRigVMGraphFunctionIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath LibraryNode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LibraryNodePath;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath HostObject;
    
    RIGVM_API FRigVMGraphFunctionIdentifier();
};
FORCEINLINE uint32 GetTypeHash(const FRigVMGraphFunctionIdentifier) { return 0; }

