#pragma once
#include "CoreMinimal.h"
#include "MVVMVCompiledFieldPath.h"
#include "MVVMViewClass_FieldId.h"
#include "MVVMViewClass_SourceBinding.h"
#include "MVVMViewClass_SourceCondition.h"
#include "MVVMViewModelContext.h"
#include "MVVMViewClass_Source.generated.h"

class UMVVMViewModelContextResolver;

USTRUCT(BlueprintType)
struct FMVVMViewClass_Source {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ExpectedSourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMVVMViewModelContextResolver* Resolver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMVVMViewModelContext GlobalViewModelInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMVVMVCompiledFieldPath FieldPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMVVMViewClass_FieldId> FieldToRegisterTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMVVMViewClass_SourceBinding> Bindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMVVMViewClass_SourceCondition> Conditions;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Flags;
    
public:
    MODELVIEWVIEWMODEL_API FMVVMViewClass_Source();
};

