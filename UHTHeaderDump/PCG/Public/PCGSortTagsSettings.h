#pragma once
#include "CoreMinimal.h"
#include "EPCGSortMethod.h"
#include "PCGSettings.h"
#include "PCGSortTagsSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGSortTagsSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGSortMethod SortMethod;
    
    UPCGSortTagsSettings();

};

