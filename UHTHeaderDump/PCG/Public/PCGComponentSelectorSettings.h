#pragma once
#include "CoreMinimal.h"
#include "EPCGComponentSelection.h"
#include "Templates/SubclassOf.h"
#include "PCGComponentSelectorSettings.generated.h"

class UActorComponent;

USTRUCT(BlueprintType)
struct FPCGComponentSelectorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGComponentSelection ComponentSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentSelectionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActorComponent> ComponentSelectionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShowComponentSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShowComponentSelectionClass;
    
    PCG_API FPCGComponentSelectorSettings();
};

