#pragma once
#include "CoreMinimal.h"
#include "LiveLinkBaseStaticData.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkBaseStaticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PropertyNames;
    
    LIVELINKINTERFACE_API FLiveLinkBaseStaticData();
};

