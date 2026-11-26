#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRLoadoutAttachmentSection -FallbackName=IRRLoadoutAttachmentSection
#include "LootPostProcessor.h"
#include "LootPostProcessor_LoadoutCuratedAttachments.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API ULootPostProcessor_LoadoutCuratedAttachments : public ULootPostProcessor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRLoadoutAttachmentSection> Sections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFillRemainingSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FallbackMinDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FallbackMaxDepth;
    
    ULootPostProcessor_LoadoutCuratedAttachments();

};

