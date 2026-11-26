#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "ThreadingOptions.h"
#include "NNERuntimeORTSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class UNNERuntimeORTSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThreadingOptions EditorThreadingOptions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThreadingOptions GameThreadingOptions;
    
    UNNERuntimeORTSettings();

};

