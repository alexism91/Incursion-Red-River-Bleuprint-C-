#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkFramePreProcessor -FallbackName=LiveLinkFramePreProcessor
#include "LiveLinkTransformDeadbandPreProcessor.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class ULiveLinkTransformDeadbandPreProcessor : public ULiveLinkFramePreProcessor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDeadband;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TranslationDeadband;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationDeadbandInDegrees;
    
public:
    ULiveLinkTransformDeadbandPreProcessor();

};

