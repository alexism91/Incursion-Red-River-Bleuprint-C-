#pragma once
#include "CoreMinimal.h"
#include "CollectionAttributeKey.generated.h"

USTRUCT(BlueprintType)
struct FCollectionAttributeKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Group;
    
    DATAFLOWENGINEPLUGIN_API FCollectionAttributeKey();
};

