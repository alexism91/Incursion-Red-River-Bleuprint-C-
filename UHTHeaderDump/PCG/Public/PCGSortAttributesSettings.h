#pragma once
#include "CoreMinimal.h"
#include "EPCGSortMethod.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGSettings.h"
#include "PCGSortAttributesSettings.generated.h"

UCLASS(Blueprintable)
class UPCGSortAttributesSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector InputSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGSortMethod SortMethod;
    
    UPCGSortAttributesSettings();

};

