#pragma once
#include "CoreMinimal.h"
#include "LootPostProcessor.h"
#include "LootPostProcessor_WeaponAttachmentBuild.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API ULootPostProcessor_WeaponAttachmentBuild : public ULootPostProcessor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplaceExistingAttachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceRequiredAttachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinAttachmentDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAttachmentDepth;
    
    ULootPostProcessor_WeaponAttachmentBuild();

};

