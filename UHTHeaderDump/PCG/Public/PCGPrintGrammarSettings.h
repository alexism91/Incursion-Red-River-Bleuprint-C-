#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGPrintGrammarSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGPrintGrammarSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Grammar;
    
    UPCGPrintGrammarSettings();

};

