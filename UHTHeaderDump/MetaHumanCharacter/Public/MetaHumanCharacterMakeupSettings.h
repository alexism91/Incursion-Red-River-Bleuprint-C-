#pragma once
#include "CoreMinimal.h"
#include "MetaHumanCharacterBlushMakeupProperties.h"
#include "MetaHumanCharacterEyeMakeupProperties.h"
#include "MetaHumanCharacterFoundationMakeupProperties.h"
#include "MetaHumanCharacterLipsMakeupProperties.h"
#include "MetaHumanCharacterMakeupSettings.generated.h"

USTRUCT(BlueprintType)
struct FMetaHumanCharacterMakeupSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterFoundationMakeupProperties Foundation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterEyeMakeupProperties Eyes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterBlushMakeupProperties Blush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterLipsMakeupProperties Lips;
    
    METAHUMANCHARACTER_API FMetaHumanCharacterMakeupSettings();
};

