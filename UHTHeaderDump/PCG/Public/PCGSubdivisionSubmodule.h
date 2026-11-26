#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "PCGSubdivisionSubmodule.generated.h"

USTRUCT(BlueprintType)
struct FPCGSubdivisionSubmodule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Symbol;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScalable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 DebugColor;
    
    PCG_API FPCGSubdivisionSubmodule();
};

