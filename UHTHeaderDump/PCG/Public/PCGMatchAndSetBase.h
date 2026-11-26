#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPCGMetadataTypes.h"
#include "EPCGMetadataTypesConstantStructStringMode.h"
#include "PCGContext.h"
#include "PCGMatchAndSetBase.generated.h"

class UPCGPointData;
class UPCGPointMatchAndSetSettings;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UPCGMatchAndSetBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGMetadataTypes Type;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGMetadataTypesConstantStructStringMode StringMode;
    
public:
    UPCGMatchAndSetBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ValidatePreconditions(const UPCGPointData* InPointData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MatchAndSet(UPARAM(Ref) FPCGContext& Context, const UPCGPointMatchAndSetSettings* InSettings, const UPCGPointData* InPointData, UPCGPointData* OutPointData) const;
    
};

