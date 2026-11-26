#pragma once
#include "CoreMinimal.h"
#include "LiveLinkSubjectName.h"
#include "Templates/SubclassOf.h"
#include "LiveLinkSubjectRepresentation.generated.h"

class ULiveLinkRole;

USTRUCT(BlueprintType)
struct FLiveLinkSubjectRepresentation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkSubjectName Subject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULiveLinkRole> Role;
    
    LIVELINKINTERFACE_API FLiveLinkSubjectRepresentation();
};

