#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EIRRVendorSortCategories.h"
#include "IRRVendorSortParams.generated.h"

USTRUCT(BlueprintType)
struct FIRRVendorSortParams : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRVendorSortCategories SortCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDescending;
    
    TEST_C_API FIRRVendorSortParams();
};

