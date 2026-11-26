#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioExtensions -ObjectName=SoundGeneratorOutput -FallbackName=SoundGeneratorOutput
#include "MetaSoundOutput.generated.h"

USTRUCT(BlueprintType)
struct FMetaSoundOutput : public FSoundGeneratorOutput {
    GENERATED_BODY()
public:
    METASOUNDENGINE_API FMetaSoundOutput();
};

