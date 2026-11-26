#pragma once
#include "CoreMinimal.h"
#include "IRRSizeRef.generated.h"

USTRUCT(BlueprintType)
struct FIRRSizeRef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName token;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Override;
    
    IRRCOREUI_API FIRRSizeRef();
};

