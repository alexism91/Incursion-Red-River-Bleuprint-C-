#pragma once
#include "CoreMinimal.h"
#include "EPCGDataType.h"
#include "PCGFilterDataBaseSettings.h"
#include "PCGFilterByTypeSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGFilterByTypeSettings : public UPCGFilterDataBaseSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGDataType TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowOutsideFilter;
    
    UPCGFilterByTypeSettings();

};

