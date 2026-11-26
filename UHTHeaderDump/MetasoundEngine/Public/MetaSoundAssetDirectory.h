#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DirectoryPath -FallbackName=DirectoryPath
#include "MetaSoundAssetDirectory.generated.h"

USTRUCT(BlueprintType)
struct FMetaSoundAssetDirectory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath Directory;
    
    METASOUNDENGINE_API FMetaSoundAssetDirectory();
};

