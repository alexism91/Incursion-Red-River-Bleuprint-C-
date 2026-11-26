#pragma once
#include "CoreMinimal.h"
#include "PCGFilterDataBaseSettings.h"
#include "PCGFilterByIndexSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGFilterByIndexSettings : public UPCGFilterDataBaseSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SelectedIndices;
    
    UPCGFilterByIndexSettings();

};

