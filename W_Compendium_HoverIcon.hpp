#ifndef UE4SS_SDK_W_Compendium_HoverIcon_HPP
#define UE4SS_SDK_W_Compendium_HoverIcon_HPP

class UW_Compendium_HoverIcon_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UBorder* Border_72;                                                         // 0x02E8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F0 (size: 0x8)
    int32 ResistanceType;                                                             // 0x02F8 (size: 0x4)
    FDamageDefinitionRowHandle DamageDefinitionRow;                                   // 0x0300 (size: 0x20)

    void OnLoaded_758B17404606C753C71D3B9987007067(class UObject* Loaded);
    void Construct();
    void ExecuteUbergraph_W_Compendium_HoverIcon(int32 EntryPoint);
}; // Size: 0x320

#endif
