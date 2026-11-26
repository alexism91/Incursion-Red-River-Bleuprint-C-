#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DataTableRowObject.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class DATATABLEFUNCTIONLIBRARY_API UDataTableRowObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    UDataTableRowObject();

};

