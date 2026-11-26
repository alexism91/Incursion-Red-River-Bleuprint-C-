#pragma once
#include "CoreMinimal.h"
#include "SoundSubmixBase.h"
#include "SoundSubmixWithParentBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class USoundSubmixWithParentBase : public USoundSubmixBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSubmixBase* ParentSubmix;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, USoundSubmixBase*> DynamicParentSubmix;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsDynamic: 1;
    
public:
    USoundSubmixWithParentBase();

};

