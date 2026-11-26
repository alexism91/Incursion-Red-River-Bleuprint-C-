#pragma once
#include "CoreMinimal.h"
#include "CustomizedToolMenuEntry.h"
#include "CustomizedToolMenuSection.h"
#include "ToolMenuProfile.generated.h"

USTRUCT(BlueprintType)
struct FToolMenuProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCustomizedToolMenuEntry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCustomizedToolMenuSection> Sections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SuppressExtenders;
    
    SLATE_API FToolMenuProfile();
};

