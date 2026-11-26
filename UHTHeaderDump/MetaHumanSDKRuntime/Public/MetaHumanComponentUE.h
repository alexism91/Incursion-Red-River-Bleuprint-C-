#pragma once
#include "CoreMinimal.h"
#include "MetaHumanComponentBase.h"
#include "MetaHumanComponentUE.generated.h"

class UAnimInstance;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMetaHumanComponentUE : public UMetaHumanComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAnimInstance> PostProcessAnimBP;
    
public:
    UMetaHumanComponentUE(const FObjectInitializer& ObjectInitializer);

};

