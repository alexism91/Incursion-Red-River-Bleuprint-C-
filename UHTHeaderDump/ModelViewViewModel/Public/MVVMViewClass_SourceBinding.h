#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FieldNotification -ObjectName=FieldNotificationId -FallbackName=FieldNotificationId
#include "MVVMViewClass_BindingKey.h"
#include "MVVMViewClass_SourceBinding.generated.h"

USTRUCT(BlueprintType)
struct FMVVMViewClass_SourceBinding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldNotificationId FieldId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMVVMViewClass_BindingKey BindingKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Flags;
    
public:
    MODELVIEWVIEWMODEL_API FMVVMViewClass_SourceBinding();
};

