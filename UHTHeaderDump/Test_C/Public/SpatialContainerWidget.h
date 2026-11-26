#pragma once
#include "CoreMinimal.h"
#include "ContainerElementWidget.h"
#include "SpatialContainerWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API USpatialContainerWidget : public UContainerElementWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Columns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rows;
    
    USpatialContainerWidget();

};

