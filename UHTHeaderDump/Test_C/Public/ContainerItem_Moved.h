#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "ContainerItem.h"
#include "MainContainer.h"
#include "ContainerItem_Moved.generated.h"

USTRUCT(BlueprintType)
struct FContainerItem_Moved : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMainContainer MainContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContainerItem ContainerItem;
    
    TEST_C_API FContainerItem_Moved();
};

