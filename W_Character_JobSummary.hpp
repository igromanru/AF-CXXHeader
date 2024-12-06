#ifndef UE4SS_SDK_W_Character_JobSummary_HPP
#define UE4SS_SDK_W_Character_JobSummary_HPP

class UW_Character_JobSummary_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* CurrentJobTitle_Text;                                           // 0x02E8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02F0 (size: 0x8)
    class UImage* Image_JobIcon;                                                      // 0x02F8 (size: 0x8)
    class UImage* JobImage;                                                           // 0x0300 (size: 0x8)
    FDataTableRowHandle JobData;                                                      // 0x0308 (size: 0x10)
    FName JobRow;                                                                     // 0x0318 (size: 0x8)

    void OnLoaded_84CC6ABD4628711B44750AB0686CBC13(class UObject* Loaded);
    void OnLoaded_5909CC744C0DDC544B64E5957FA3971A(class UObject* Loaded);
    void Construct();
    void RefreshSummary(FDataTableRowHandle JobData);
    void ExecuteUbergraph_W_Character_JobSummary(int32 EntryPoint);
}; // Size: 0x320

#endif
