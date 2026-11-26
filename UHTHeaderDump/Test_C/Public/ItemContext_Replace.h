#pragma once
#include "CoreMinimal.h"
#include "ItemContext.h"
#include "ItemContext_Replace.generated.h"

class UIRRItemDefinition;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UItemContext_Replace : public UItemContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRItemDefinition* ReplaceItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyOnEquip;
    
    UItemContext_Replace();

};

