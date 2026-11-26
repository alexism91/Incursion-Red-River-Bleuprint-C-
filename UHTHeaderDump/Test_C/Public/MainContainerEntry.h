#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "MainContainer.h"
#include "MainContainerEntry.generated.h"

USTRUCT(BlueprintType)
struct FMainContainerEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMainContainer Container;
    
    TEST_C_API FMainContainerEntry();
};

