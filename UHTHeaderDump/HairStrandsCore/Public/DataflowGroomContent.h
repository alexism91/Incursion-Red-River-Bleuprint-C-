#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowEngine -ObjectName=DataflowSkeletalContent -FallbackName=DataflowSkeletalContent
#include "DataflowGroomContent.generated.h"

class UGroomBindingAsset;

UCLASS(Blueprintable)
class UDataflowGroomContent : public UDataflowSkeletalContent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UGroomBindingAsset* BindingAsset;
    
public:
    UDataflowGroomContent();

};

