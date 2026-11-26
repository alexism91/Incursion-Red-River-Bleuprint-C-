#pragma once
#include "CoreMinimal.h"
#include "Object.h"
#include "StructCookedMetaDataStore.h"
#include "ClassCookedMetaData.generated.h"

UCLASS(Blueprintable, MinimalAPI, Within=Class)
class UClassCookedMetaData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStructCookedMetaDataStore ClassMetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FStructCookedMetaDataStore> FunctionsMetaData;
    
public:
    UClassCookedMetaData();

};

