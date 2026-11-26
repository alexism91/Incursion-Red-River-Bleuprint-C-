#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=DeprecateSlateVector2D -FallbackName=DeprecateSlateVector2D
#include "NiagaraGraphViewSettings.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraGraphViewSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeprecateSlateVector2D Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Zoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValid;
    
public:
    NIAGARA_API FNiagaraGraphViewSettings();
};

