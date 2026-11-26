class UUDS_Cloud_Paint_Cell_C : public UPrimaryDataAsset
{
public:
    TArray<struct FLinearColor> Painting Array;
    TSoftObjectPtr<UTexture2D> Texture;
    bool Zero Coverage Present;
    bool Mid Coverage Present;
    bool Full Coverage Present;
};