#pragma once
#include "CoreMinimal.h"
#include "LiveLinkBaseStaticData.h"
#include "LiveLinkLocatorStaticData.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkLocatorStaticData : public FLiveLinkBaseStaticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LocatorNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnlabelledData;
    
    LIVELINKINTERFACE_API FLiveLinkLocatorStaticData();
};

