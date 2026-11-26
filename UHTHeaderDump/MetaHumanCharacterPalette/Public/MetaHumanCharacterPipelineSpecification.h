#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MetaHumanCharacterPipelineSlot.h"
#include "MetaHumanCharacterPipelineSpecification.generated.h"

class UScriptStruct;

UCLASS(Blueprintable)
class METAHUMANCHARACTERPALETTE_API UMetaHumanCharacterPipelineSpecification : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptStruct* BuildOutputStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptStruct* AssemblyInputStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptStruct* AssemblyOutputStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMetaHumanCharacterPipelineSlot> Slots;
    
    UMetaHumanCharacterPipelineSpecification();

};

