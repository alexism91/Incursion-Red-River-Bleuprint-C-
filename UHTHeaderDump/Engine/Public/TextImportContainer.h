#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TextImportTestStruct.h"
#include "TextImportContainer.generated.h"

UCLASS(Blueprintable)
class UTextImportContainer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextImportTestStruct ResultStruct;
    
    UTextImportContainer();

};

