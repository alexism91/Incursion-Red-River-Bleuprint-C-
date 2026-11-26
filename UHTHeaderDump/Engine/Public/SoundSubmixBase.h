#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DynamicChildSubmix.h"
#include "SoundSubmixBase.generated.h"

class USoundSubmixBase;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI, Config=Engine)
class USoundSubmixBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoDisable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoDisableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundSubmixBase*> ChildSubmixes;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, FDynamicChildSubmix> DynamicChildSubmixes;
    
    USoundSubmixBase();

    UFUNCTION(BlueprintCallable)
    USoundSubmixBase* FindDynamicAncestor();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool DynamicDisconnect(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool DynamicConnect(const UObject* WorldContextObject, USoundSubmixBase* InParent);
    
};

