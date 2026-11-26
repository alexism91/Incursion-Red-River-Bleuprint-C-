#pragma once
#include "CoreMinimal.h"
#include "Object.h"
#include "ObjectCookedMetaDataStore.h"
#include "EnumCookedMetaData.generated.h"

UCLASS(Blueprintable, MinimalAPI, Within=Enum)
class UEnumCookedMetaData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectCookedMetaDataStore EnumMetaData;
    
public:
    UEnumCookedMetaData();

};

