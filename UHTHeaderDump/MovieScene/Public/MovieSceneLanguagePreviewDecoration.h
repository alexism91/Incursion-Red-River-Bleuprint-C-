#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneLanguagePreviewDecoration.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneLanguagePreviewDecoration : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PreviewLanguage;
    
    UMovieSceneLanguagePreviewDecoration();

};

