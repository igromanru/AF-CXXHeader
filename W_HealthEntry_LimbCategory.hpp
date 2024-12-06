#ifndef UE4SS_SDK_W_HealthEntry_LimbCategory_HPP
#define UE4SS_SDK_W_HealthEntry_LimbCategory_HPP

class UW_HealthEntry_LimbCategory_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02E8 (size: 0x8)
    class UVerticalBox* Limb_BuffVBox;                                                // 0x02F0 (size: 0x8)
    class UTextBlock* LimbNameText;                                                   // 0x02F8 (size: 0x8)
    class UBorder* MainBorder;                                                        // 0x0300 (size: 0x8)
    class UImage* SelectionBG;                                                        // 0x0308 (size: 0x8)
    EBodyLimbs LimbID;                                                                // 0x0310 (size: 0x1)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_HealthEntry_LimbCategory(int32 EntryPoint);
}; // Size: 0x311

#endif
