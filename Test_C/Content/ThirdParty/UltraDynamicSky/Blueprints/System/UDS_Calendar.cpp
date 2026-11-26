class UUDS_Calendar_C : public UPrimaryDataAsset
{
public:
    TMap<FString, int32> Months = {
        { "January", 31 }, 
        { "Feburary", 28 }, 
        { "March", 31 }, 
        { "April", 30 }, 
        { "May", 31 }, 
        { "June", 30 }, 
        { "July", 31 }, 
        { "August", 31 }, 
        { "September", 30 }, 
        { "October", 31 }, 
        { "November", 30 }, 
        { "December", 31 }
    };
    bool Uses Leap Year = true;
    int32 Leap Year Month = 2;
    int32 Winter Solstice Offset = -11;
    TArray<FString> Days of the Week = {
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday"
    };
    int Day of the Week Offset;
};