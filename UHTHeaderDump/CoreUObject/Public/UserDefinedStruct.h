#pragma once
#include "CoreMinimal.h"
#include "EUserDefinedStructureStatus.h"
#include "Guid.h"
#include "ScriptStruct.h"
#include "UserDefinedStruct.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UUserDefinedStruct : public UScriptStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EUserDefinedStructureStatus> Status;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UUserDefinedStruct();

};

