#ifndef UE4SS_SDK_W_LevelSavingScreen_HPP
#define UE4SS_SDK_W_LevelSavingScreen_HPP

class UW_LevelSavingScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Image;                                                              // 0x02E8 (size: 0x8)
    class UImage* Image_24;                                                           // 0x02F0 (size: 0x8)
    class UTextBlock* SavingLevelText;                                                // 0x02F8 (size: 0x8)
    FString LevelBeingSaved;                                                          // 0x0300 (size: 0x10)

    void Construct();
    void ExecuteUbergraph_W_LevelSavingScreen(int32 EntryPoint);
}; // Size: 0x310

#endif
