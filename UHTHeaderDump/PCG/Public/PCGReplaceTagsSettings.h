#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGReplaceTagsSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGReplaceTagsSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SelectedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReplacedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTokenizeOnWhiteSpace;
    
    UPCGReplaceTagsSettings();

};

