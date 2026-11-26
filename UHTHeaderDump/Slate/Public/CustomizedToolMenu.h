#pragma once
#include "CoreMinimal.h"
#include "CustomizedToolMenuNameArray.h"
#include "ToolMenuProfile.h"
#include "CustomizedToolMenu.generated.h"

USTRUCT(BlueprintType)
struct FCustomizedToolMenu : public FToolMenuProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCustomizedToolMenuNameArray> EntryOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SectionOrder;
    
    SLATE_API FCustomizedToolMenu();
};

