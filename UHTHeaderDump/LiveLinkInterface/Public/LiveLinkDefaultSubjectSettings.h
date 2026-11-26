#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LiveLinkDefaultSubjectSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class ULiveLinkDefaultSubjectSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRebroadcastSubjectsByDefault;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowEditingRebroadcastProperty;
    
public:
    ULiveLinkDefaultSubjectSettings();

};

