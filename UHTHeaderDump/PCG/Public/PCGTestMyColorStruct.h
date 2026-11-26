#pragma once
#include "CoreMinimal.h"
#include "PCGTestMyColorStruct.generated.h"

USTRUCT(BlueprintType)
struct FPCGTestMyColorStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double B;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double G;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double R;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double A;
    
    PCG_API FPCGTestMyColorStruct();
};

