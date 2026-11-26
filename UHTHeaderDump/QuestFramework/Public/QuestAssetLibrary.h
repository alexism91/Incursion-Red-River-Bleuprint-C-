#pragma once
#include "CoreMinimal.h"
#include "QuestAssetLibrary.generated.h"

class UObjectLibrary;

USTRUCT(BlueprintType)
struct QUESTFRAMEWORK_API FQuestAssetLibrary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Paths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectLibrary* QuestAssetObjectLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoaded;
    
    FQuestAssetLibrary();
};

