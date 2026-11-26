#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnlinePIEConfig.generated.h"

UCLASS(Blueprintable, Config=Editor)
class UOnlinePIEConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> LoginTypesAllowingDuplicates;
    
    UOnlinePIEConfig();

};

