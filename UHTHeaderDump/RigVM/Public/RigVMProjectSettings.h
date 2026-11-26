#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "RigVMTag.h"
#include "RigVMProjectSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI, Config=Editor)
class URigVMProjectSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigVMTag> VariantTags;
    
    URigVMProjectSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRigVMTag GetTag(FName InTagName) const;
    
};

