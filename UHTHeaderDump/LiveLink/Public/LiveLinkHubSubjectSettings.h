#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSubjectSettings -FallbackName=LiveLinkSubjectSettings
#include "LiveLinkHubSubjectSettings.generated.h"

class ULiveLinkFrameTranslator;

UCLASS(Blueprintable, MinimalAPI)
class ULiveLinkHubSubjectSettings : public ULiveLinkSubjectSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubjectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OutboundName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULiveLinkFrameTranslator* TranslatorsProxy;
    
public:
    ULiveLinkHubSubjectSettings();

};

