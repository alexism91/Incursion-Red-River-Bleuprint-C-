#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LiveLinkSubSectionData.h"
#include "Templates/SubclassOf.h"
#include "MovieSceneLiveLinkSubSection.generated.h"

class ULiveLinkRole;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UMovieSceneLiveLinkSubSection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkSubSectionData SubSectionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULiveLinkRole> SubjectRole;
    
    UMovieSceneLiveLinkSubSection();

};

