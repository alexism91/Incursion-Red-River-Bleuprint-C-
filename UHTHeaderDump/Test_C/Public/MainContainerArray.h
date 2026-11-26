#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "MainContainerEntry.h"
#include "MainContainerArray.generated.h"

class UInventoryComponent;

USTRUCT(BlueprintType)
struct FMainContainerArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMainContainerEntry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    UInventoryComponent* OwnerComponent;
    
    TEST_C_API FMainContainerArray();
};

